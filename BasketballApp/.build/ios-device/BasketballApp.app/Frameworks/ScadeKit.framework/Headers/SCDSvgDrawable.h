
#import <Foundation/Foundation.h>

#import <ScadeKit/SCDSvgElement.h>
#import <ScadeKit/SCDSvgHitEventReceiver.h>
#import <ScadeKit/SCDLayoutNode.h>
#import <ScadeKit/SCDSvgAnimatable.h>


@protocol SCDSvgElement;
@protocol SCDSvgHitEventReceiver;
@protocol SCDLayoutNode;
@protocol SCDSvgAnimatable;

@class SCDSvgConstraint;
@class SCDSvgTouchHandler;
@class SCDSvgTapHandler;
@class SCDSvgGestureRecognizer;
@class SCDLayoutLayoutData;
@class SCDGraphicsDimension;
@class SCDGraphicsPoint;
@class SCDSvgAnimation;
@class SCDGraphicsRectangle;


/*PROTECTED REGION ID(scade::svg::draw::SCDSvgDrawable_pre) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/


@protocol SCDSvgDrawable <SCDSvgElement, SCDSvgHitEventReceiver, SCDLayoutNode, SCDSvgAnimatable>


@property (nonatomic,getter=isVisible) BOOL visible;



-(SCDGraphicsRectangle*) getBoundingBox ;



/*PROTECTED REGION ID(scade::svg::draw::SCDSvgDrawable) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

@end
