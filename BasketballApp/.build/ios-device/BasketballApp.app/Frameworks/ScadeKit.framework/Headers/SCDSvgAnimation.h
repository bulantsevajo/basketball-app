
#import <Foundation/Foundation.h>

#import <ScadeKit/EObject.h>


@protocol SCDSvgAnimatable;

@class SCDSvgOnCompleteHandler;


/*PROTECTED REGION ID(scade::svg::animations::SCDSvgAnimation_pre) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/


@interface SCDSvgAnimation : EObject         


@property (nonatomic) NSNumber* begin;

@property (nonatomic) NSNumber* duration;

@property (nonatomic) NSNumber* repeatCount;

@property (nonatomic) SCDSvgOnCompleteHandler* onComplete;

@property (nonatomic) id<SCDSvgAnimatable> animatable;





/*PROTECTED REGION ID(scade::svg::animations::SCDSvgAnimation) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

@end
