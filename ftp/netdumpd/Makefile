# Created by: Mark Johnston <markj@FreeBSD.org>
# $FreeBSD$

PORTNAME=	netdumpd
PORTVERSION=	20180511
PORTREVISION=	1
CATEGORIES=	ftp
MASTER_SITES=	LOCAL/markj

MAINTAINER=	markj@FreeBSD.org
COMMENT=	UDP server capable of handling netdump transfers

LICENSE=	BSD2CLAUSE

BROKEN_powerpc64=	fails to build: netdumpd.c:270: warning: declaration of 'index' shadows a global declaration

MAKE_ARGS+=	BINDIR=${PREFIX}/sbin
MAKE_ARGS+=	MANDIR=${PREFIX}/man/man
MAKE_ARGS+=	SCRIPTSDIR=${PREFIX}/etc/rc.d

PLIST_FILES=	sbin/${PORTNAME} man/man8/${PORTNAME}.8.gz etc/rc.d/${PORTNAME}

USES+=		uidfix

.include <bsd.port.mk>
