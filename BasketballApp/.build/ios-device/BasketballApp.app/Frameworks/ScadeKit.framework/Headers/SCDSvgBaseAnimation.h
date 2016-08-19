
#import <Foundation/Foundation.h>

#import <ScadeKit/SCDSvgAnimation.h>


@protocol SCDSvgAnimatable;

@class SCDSvgOnCompleteHandler;
@class SCDSvgAnimation;


/*PROTECTED REGION ID(scade::svg::animations::SCDSvgBaseAnimation_pre) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/


@interface SCDSvgBaseAnimation : SCDSvgAnimation         


@property (nonatomic,getter=isFreeze) BOOL freeze;

@property (nonatomic,getter=isAdditive) BOOL additive;





/*PROTECTED REGION ID(scade::svg::animations::SCDSvgBaseAnimation) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

@end
