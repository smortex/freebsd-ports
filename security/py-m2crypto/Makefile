# Created by: Peter Haight <peterh@sapros.com>
# $FreeBSD$

PORTNAME=	m2crypto
PORTVERSION=	0.33.0
CATEGORIES=	security python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}
DISTNAME=	M2Crypto-${PORTVERSION}

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	Crypto and SSL toolkit for Python

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/LICENCE

BUILD_DEPENDS=	swig3.0:devel/swig30

USES=		python ssl
USE_PYTHON=	autoplist concurrent distutils

PYDISTUTILS_BUILDARGS=	build_ext --include=${OPENSSLINC} --openssl=${OPENSSLBASE} --swig=${LOCALBASE}/bin/swig3.0

post-patch:
	@${REINPLACE_CMD} -e "s|swig\(', '-version\)|swig3.0\1|" ${WRKSRC}/setup.py

post-install:
	${STRIP_CMD} ${STAGEDIR}${PYTHON_SITELIBDIR}/M2Crypto/_m2crypto.so

.include <bsd.port.pre.mk>

.if ${PYTHON_REL} < 3500
RUN_DEPENDS+=	${PYTHON_PKGNAMEPREFIX}typing>=0:devel/py-typing@${PY_FLAVOR}
.endif

.include <bsd.port.post.mk>
