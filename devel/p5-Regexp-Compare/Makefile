PORTNAME=	Regexp-Compare
PORTVERSION=	0.35
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	Partial ordering for regular expressions
WWW=		https://metacpan.org/release/Regexp-Compare

LICENSE=	ART10 GPLv1+
LICENSE_COMB=	dual

USES=		perl5
USE_PERL5=	configure

post-install:
	${STRIP_CMD} ${STAGEDIR}${PREFIX}/${SITE_ARCH_REL}/auto/Regexp/Compare/Compare.so

.include <bsd.port.pre.mk>

.if ${PERL_LEVEL} >= 503900
BROKEN=		only supports Perl 5.34 to 5.38
.endif

.include <bsd.port.post.mk>
