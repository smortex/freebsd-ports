PORTNAME=	zfs-snapshot-clean
PORTVERSION=	0.2.0
DISTVERSIONPREFIX=	v
CATEGORIES=	filesystems sysutils

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Tool to sieve ZFS snapshots as per given spec a la 'pdumpfs-clean'
WWW=		https://github.com/knu/zfs-snapshot-clean

LICENSE=	BSD2CLAUSE

USE_GITHUB=	yes
GH_ACCOUNT=	knu

NO_BUILD=	yes
PLIST_FILES=	sbin/${PORTNAME}

do-install:
	${INSTALL_SCRIPT} ${WRKSRC}/${PORTNAME} ${STAGEDIR}${PREFIX}/sbin/

.include <bsd.port.mk>
