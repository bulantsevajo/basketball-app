
#import <Foundation/Foundation.h>

#import <ScadeKit/EObject.h>



@class SCDSvgTouchHandler;
@class SCDSvgTapHandler;
@class SCDSvgGestureRecognizer;


/*PROTECTED REGION ID(scade::svg::events::SCDSvgHitEventReceiver_pre) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/


@protocol SCDSvgHitEventReceiver <EObject>     


@property (nonatomic) NSArray<SCDSvgTouchHandler*>* OnTouch;

@property (nonatomic) NSArray<SCDSvgTapHandler*>* OnTap;

@property (nonatomic) NSArray<SCDSvgGestureRecognizer*>* gestures;





/*PROTECTED REGION ID(scade::svg::events::SCDSvgHitEventReceiver) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

@end
