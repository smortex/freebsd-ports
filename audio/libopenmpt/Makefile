# Created by: Emanuel Haupt <ehaupt@FreeBSD.org>
# $FreeBSD$

PORTNAME=	libopenmpt
PORTVERSION=	0.4.4
DISTVERSIONSUFFIX=	+release.autotools
CATEGORIES=	audio
MASTER_SITES=	https://lib.openmpt.org/files/libopenmpt/src/ \
		LOCAL/ehaupt

MAINTAINER=	ehaupt@FreeBSD.org
COMMENT=	Module music library based on OpenMPT

LICENSE=	BSD3CLAUSE
LICENSE_FILE=	${WRKSRC}/LICENSE

USES=		compiler:c++11-lang gmake libtool pkgconfig
USE_LDCONFIG=	yes

GNU_CONFIGURE=	yes

CONFIGURE_ARGS+=	--without-portaudiocpp

OPTIONS_DEFINE=	DOCS EXAMPLES FLAC MPG123 OGG PORTAUDIO SNDFILE VORBIS
OPTIONS_DEFAULT=FLAC MPG123 OGG PORTAUDIO SNDFILE VORBIS

FLAC_LIB_DEPENDS=	libFLAC.so:audio/flac
MPG123_LIB_DEPENDS=	libmpg123.so:audio/mpg123
OGG_LIB_DEPENDS=	libogg.so:audio/libogg
PORTAUDIO_LIB_DEPENDS=	libportaudio.so:audio/portaudio
SNDFILE_LIB_DEPENDS=	libsndfile.so:audio/libsndfile
VORBIS_LIB_DEPENDS=	libvorbis.so:audio/libvorbis

FLAC_CONFIGURE_WITH=		flac
MPG123_CONFIGURE_WITH=		mpg123
OGG_CONFIGURE_WITH=		ogg
PORTAUDIO_CONFIGURE_WITH=	portaudio
SNDFILE_CONFIGURE_WITH=		sndfile
VORBIS_CONFIGURE_WITH=		vorbis vorbisfile

post-install:
	${STRIP_CMD} ${STAGEDIR}${PREFIX}/lib/libopenmpt.so.*

post-install-DOCS-on:
	@${RM} ${STAGEDIR}${DOCSDIR}/LICENSE # do not install twice

post-install-EXAMPLES-on:
	@${MV} ${STAGEDIR}${DOCSDIR}/examples ${STAGEDIR}${EXAMPLESDIR}

.include <bsd.port.mk>
