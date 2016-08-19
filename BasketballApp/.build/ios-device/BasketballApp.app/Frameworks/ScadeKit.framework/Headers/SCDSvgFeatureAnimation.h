
#import <Foundation/Foundation.h>

#import <ScadeKit/SCDSvgElementAnimation.h>


@protocol SCDSvgAnimatable;
@protocol SCDSvgElement;

@class SCDSvgConstraint;
@class SCDSvgOnCompleteHandler;
@class EStructuralFeature;
@class SCDSvgAnimation;
@class SCDSvgBaseAnimation;
@class SCDSvgElementAnimation;


/*PROTECTED REGION ID(scade::svg::animations::SCDSvgFeatureAnimation_pre) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/


@interface SCDSvgFeatureAnimation : SCDSvgElementAnimation         


@property (nonatomic) EStructuralFeature* feature;





/*PROTECTED REGION ID(scade::svg::animations::SCDSvgFeatureAnimation) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

@end
