# $FreeBSD$

PORTNAME=	dnscrypt-proxy
PORTVERSION=	2.0.23
CATEGORIES=	dns security ipv6
PKGNAMESUFFIX=	2

MAINTAINER=	egypcio@FreeBSD.org
COMMENT=	Flexible DNS proxy with support for encrypted protocols

LICENSE=	ISCL
LICENSE_FILE=	${WRKSRC}/LICENSE

RUN_DEPENDS=	ca_root_nss>=3.35:security/ca_root_nss

USES=		go
USE_RC_SUBR=	${PORTNAME}
USE_GITHUB=	yes

GH_ACCOUNT=	jedisct1

USERS=		_dnscrypt-proxy
GROUPS=		_dnscrypt-proxy

PLIST_SUB=	USER="${USERS}" GROUP="${GROUPS}"
SUB_LIST=	USER="${USERS}" GROUP="${GROUPS}"
SUB_FILES=	pkg-message

PORTDOCS=	README.*
PORTEXAMPLES=	example*

CONFLICTS_INSTALL=	dnscrypt-proxy

OPTIONS_DEFINE=	DOCS EXAMPLES

do-build:
	${RLN} ${WRKSRC}/vendor ${WRKSRC}/src
	${RM} ${WRKSRC}/go.mod
	cd ${WRKSRC}/${PORTNAME} && \
	  ${SETENV} ${MAKE_ENV} ${GO_ENV} GOPATH=${WRKSRC} \
	  ${GO_CMD} build ${GO_BUILDFLAGS} -o ${WRKDIR}/sbin/${PORTNAME}

do-install:
	${INSTALL_PROGRAM} ${WRKDIR}/sbin/${PORTNAME} ${STAGEDIR}${PREFIX}/sbin

do-install-DOCS-on:
	${MKDIR} ${STAGEDIR}${DOCSDIR}
	cd ${WRKSRC} && ${INSTALL_DATA} ${PORTDOCS} ${STAGEDIR}${DOCSDIR}

do-install-EXAMPLES-on:
	${MKDIR} ${STAGEDIR}${EXAMPLESDIR}
	cd ${WRKSRC}/${PORTNAME} && ${INSTALL_DATA} ${PORTEXAMPLES} ${STAGEDIR}${EXAMPLESDIR}

post-install:
	${MKDIR} ${STAGEDIR}${ETCDIR}
	# After 'install' examples because of the priv drop issue with Go.
	# Keeping original example files.
	@${REINPLACE_CMD} -e \
		"s#\['127.0.0.1:53', '\[::1\]:53'\]#\['127.0.0.1:5353'\]#" \
		${WRKSRC}/${PORTNAME}/example-${PORTNAME}.toml
	${INSTALL_DATA} ${WRKSRC}/${PORTNAME}/example-${PORTNAME}.toml \
		${STAGEDIR}${ETCDIR}/${PORTNAME}.toml.sample

.include <bsd.port.mk>
