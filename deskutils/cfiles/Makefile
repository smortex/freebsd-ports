PORTNAME=	cfiles
DISTVERSIONPREFIX=	v
DISTVERSION=	1.8-6
DISTVERSIONSUFFIX=	-g327d47f
PORTREVISION=	32
CATEGORIES=	deskutils

MAINTAINER=	yuri@FreeBSD.org
COMMENT=	Ncurses file manager written in C with vim-like keybindings
WWW=		https://github.com/mananapr/cfiles

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/LICENSE

RUN_DEPENDS=	${LOCALBASE}/libexec/w3m/w3mimgdisplay:www/w3m-img \
		atool:archivers/atool \
		bash:shells/bash \
		pdftoppm:graphics/poppler-utils

USES=		shebangfix
SHEBANG_FILES=	scripts/*
USE_GITHUB=	yes
GH_ACCOUNT=	mananapr

MAKE_ARGS=	CC=${CC} NCURSES_CFLAGS=-I/usr/include NCURSES_LIBS=/usr/lib/libncursesw.so

PLIST_FILES=	bin/${PORTNAME} \
		share/man/man1/${PORTNAME}.1.gz \
		${DATADIR}/scripts/clearimg \
		${DATADIR}/scripts/displayimg

post-patch:
	@${REINPLACE_CMD} -E '\
		s,"(atool|fzf|pdftoppm)","${LOCALBASE}/bin/\1",g; \
		s|"/bin/bash"|"${LOCALBASE}/bin/bash"|; \
		s|CLEARIMG|"${DATADIR}/scripts/clearimg"|g; \
		s|DISPLAYIMG|"${DATADIR}/scripts/displayimg"|g' \
		${WRKSRC}/cf.c
	@${REINPLACE_CMD} -E '\
		s|IMG "/usr/share|IMG "${PREFIX}/share|; \
		s|W3MIMGDISPLAY="/usr/lib/w3m/w3mimgdisplay"|W3MIMGDISPLAY="${LOCALBASE}/libexec/w3m/w3mimgdisplay"|' \
		${WRKSRC}/scripts/displayimg ${WRKSRC}/scripts/clearimg
	@${REINPLACE_CMD} -E '\
		s|IMG "/usr/share|IMG "${PREFIX}/share|' \
		${WRKSRC}/config.h

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/${PORTNAME} ${STAGEDIR}${PREFIX}/bin
	${MKDIR} ${STAGEDIR}${PREFIX}/share/cfiles/scripts
.for s in clearimg displayimg
	${INSTALL_SCRIPT} ${WRKSRC}/scripts/${s} ${STAGEDIR}${DATADIR}/scripts
.endfor
	${INSTALL_MAN} ${WRKSRC}/cfiles.1 ${STAGEDIR}${PREFIX}/share/man/man1

.include <bsd.port.pre.mk>

GOLANG_ONLY_FOR_ARCHS=	aarch64 amd64 armv6 armv7 i386

.if ${GOLANG_ONLY_FOR_ARCHS:M${ARCH}} # textproc/fzf isn't available on powerpc because go isn't available there
RUN_DEPENDS+=	fzf:textproc/fzf
.endif

.include <bsd.port.post.mk>
