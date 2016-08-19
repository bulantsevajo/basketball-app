
#import <Foundation/Foundation.h>

#import <ScadeKit/SCDSvgElementAnimation.h>


@protocol SCDSvgAnimatable;
@protocol SCDSvgElement;

@class SCDSvgConstraint;
@class SCDSvgOnCompleteHandler;
@class SCDSvgAnimation;
@class SCDSvgBaseAnimation;
@class SCDSvgElementAnimation;

typedef NS_ENUM(NSInteger, SCDSvgTransformType);

/*PROTECTED REGION ID(scade::svg::animations::internal::SCDSvgTransformAnimation_pre) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/


@interface SCDSvgTransformAnimation : SCDSvgElementAnimation         


@property (nonatomic) SCDSvgTransformType type;





/*PROTECTED REGION ID(scade::svg::animations::internal::SCDSvgTransformAnimation) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

@end
