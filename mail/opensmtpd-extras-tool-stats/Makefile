# Created by: fluffy
# $FreeBSD$

PKGNAMESUFFIX=		-tool-stats
PORTREVISION=		2

COMMENT=		Statistics tool for OpenSMTPD

PLIST_FILES=		bin/tool-stats \
			man/man8/tool-stats.8.gz

CONFIGURE_ARGS+=	--with-tool-stats

MASTERDIR=		${.CURDIR}/../opensmtpd-extras
SLAVE_PORT=		yes

.include "${MASTERDIR}/Makefile"
