PORTNAME=	pyosf
DISTVERSIONPREFIX=	v
DISTVERSION=	1.0.5
PORTREVISION=	1
CATEGORIES=	science python
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	yuri@FreeBSD.org
COMMENT=	Python library for synching with OpenScienceFramework projects
WWW=		https://github.com/psychopy/pyosf

LICENSE=	MIT

BUILD_DEPENDS=	${PYTHON_PKGNAMEPREFIX}requests>=0:www/py-requests@${PY_FLAVOR}
RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}requests>=0:www/py-requests@${PY_FLAVOR}

USES=		python
USE_GITHUB=	yes
GH_ACCOUNT=	psychopy
USE_PYTHON=	distutils autoplist
NO_ARCH=	yes

.include <bsd.port.mk>
