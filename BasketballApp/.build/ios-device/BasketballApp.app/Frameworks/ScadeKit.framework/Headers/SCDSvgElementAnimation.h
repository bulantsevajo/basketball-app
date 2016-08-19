
#import <Foundation/Foundation.h>

#import <ScadeKit/SCDSvgElement.h>
#import <ScadeKit/SCDSvgBaseAnimation.h>


@protocol SCDSvgAnimatable;
@protocol SCDSvgElement;

@class SCDSvgConstraint;
@class SCDSvgOnCompleteHandler;
@class SCDSvgAnimation;
@class SCDSvgBaseAnimation;


/*PROTECTED REGION ID(scade::svg::animations::SCDSvgElementAnimation_pre) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/


@interface SCDSvgElementAnimation : SCDSvgBaseAnimation <SCDSvgElement>           


@property (nonatomic) NSArray<NSNumber*>* from;

@property (nonatomic) NSArray<NSNumber*>* by;

@property (nonatomic) NSArray<NSNumber*>* to;





/*PROTECTED REGION ID(scade::svg::animations::SCDSvgElementAnimation) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

@end
