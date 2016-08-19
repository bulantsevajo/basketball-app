
#import <Foundation/Foundation.h>

#import <ScadeKit/EObject.h>


@protocol SCDSvgDrawable;

@class SCDGraphicsPointF;


/*PROTECTED REGION ID(scade::svg::events::SCDSvgHitEvent_pre) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/


@interface SCDSvgHitEvent : EObject         


@property (nonatomic) id<SCDSvgDrawable> target;

@property (nonatomic) SCDGraphicsPointF* location;





/*PROTECTED REGION ID(scade::svg::events::SCDSvgHitEvent) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

@end
