PORTNAME=	rss2email
DISTVERSIONPREFIX=	v
DISTVERSION=	3.14
PORTREVISION=	1
CATEGORIES=	mail python
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	chalpin@cs.wisc.edu
COMMENT=	Emails posts from subscribed RSS/Atom newsfeeds
WWW=		https://github.com/rss2email/rss2email

LICENSE=	GPLv2 GPLv3
LICENSE_COMB=	dual

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}feedparser>=6.0.0:textproc/py-feedparser@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}html2text>=3.0.1:textproc/py-html2text@${PY_FLAVOR}

USES=		python
USE_GITHUB=	yes
USE_PYTHON=	distutils concurrent autoplist

NO_ARCH=	yes

PORTDOCS=	AUTHORS CHANGELOG README.rst
OPTIONS_DEFINE=	DOCS

PLIST_FILES=	share/man/man1/r2e.1.gz

post-install:
	${INSTALL_MAN} ${WRKSRC}/r2e.1 ${STAGEDIR}${PREFIX}/share/man/man1

post-install-DOCS-on:
	@${MKDIR} ${STAGEDIR}${DOCSDIR}
	cd ${WRKSRC} && ${INSTALL_DATA} ${PORTDOCS} ${STAGEDIR}${DOCSDIR}/

.include <bsd.port.mk>
