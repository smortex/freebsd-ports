# Created by: Rainer Hurling <rhurlin@gwdg.de>
# $FreeBSD$

PORTNAME=	nlopt
DISTVERSIONPREFIX=	v
DISTVERSION=	2.6.1
CATEGORIES=	math

MAINTAINER=	rhurlin@gwdg.de
COMMENT=	Nonlinear optimization library

LICENSE=	LGPL21 MIT
LICENSE_COMB=	multi
LICENSE_FILE=	${WRKSRC}/COPYING

BROKEN_armv6=		fails to package: Unable to access file site-packages/_nlopt.a:No such file or directory
BROKEN_armv7=		fails to package: Unable to access file site-packages/_nlopt.a:No such file or directory

BUILD_DEPENDS=	swig3.0:devel/swig30 \
		${PYTHON_PKGNAMEPREFIX}numpy>=1.16.1:math/py-numpy@${PY_FLAVOR}
RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}numpy>=1.16.1:math/py-numpy@${PY_FLAVOR}
LIB_DEPENDS=	libgmp.so:math/gmp \
		libguile-2.0.so:lang/guile2

USES=		cmake compiler:features pathfix pkgconfig python
USE_LDCONFIG=	yes

USE_GITHUB=	yes
GH_ACCOUNT=	stevengj

# Needed to find gmp.h
CFLAGS+=	-I${LOCALBASE}/include

.include <bsd.port.mk>
