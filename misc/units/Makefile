PORTNAME=	units
DISTVERSIONPREFIX=	v
DISTVERSION=	0.12.3
CATEGORIES=	misc
PKGNAMESUFFIX=	-library

MAINTAINER=	yuri@FreeBSD.org
COMMENT=	C++ library for working with units of measurement
WWW=		https://units.readthedocs.io/en/latest \
		https://github.com/LLNL/units

LICENSE=	BSD3CLAUSE
LICENSE_FILE=	${WRKSRC}/LICENSE

USES=		cmake:testing
USE_LDCONFIG=	yes

USE_GITHUB=	yes
GH_ACCOUNT=	LLNL
GH_TUPLE=	google:googletest:v1.15.2:googletest/ThirdParty/googletest # next release will have UNITS_USE_EXTERNAL_GTEST

CMAKE_ON=	UNITS_BUILD_OBJECT_LIBRARY \
		UNITS_BUILD_SHARED_LIBRARY
CMAKE_OFF=	UNITS_ENABLE_TESTS
CMAKE_TESTING_ON=	UNITS_ENABLE_TESTS # tests expect the googletest source tree, see https://github.com/LLNL/units/issues/340

# 100% tests passed, 0 tests failed out of 21

.include <bsd.port.mk>
