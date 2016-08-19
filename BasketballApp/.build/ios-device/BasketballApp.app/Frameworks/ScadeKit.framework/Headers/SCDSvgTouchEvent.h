
#import <Foundation/Foundation.h>

#import <ScadeKit/SCDSvgHitEvent.h>


@protocol SCDSvgDrawable;

@class SCDGraphicsPointF;
@class SCDSvgHitEvent;

typedef NS_ENUM(NSInteger, SCDSvgTouchEventPhase);

/*PROTECTED REGION ID(scade::svg::events::SCDSvgTouchEvent_pre) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/


@interface SCDSvgTouchEvent : SCDSvgHitEvent         


@property (nonatomic) SCDSvgTouchEventPhase phase;

@property (nonatomic) SCDGraphicsPointF* startLocation;





/*PROTECTED REGION ID(scade::svg::events::SCDSvgTouchEvent) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

@end
