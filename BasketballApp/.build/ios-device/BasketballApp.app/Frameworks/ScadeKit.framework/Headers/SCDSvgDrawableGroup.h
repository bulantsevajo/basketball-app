
#import <Foundation/Foundation.h>

#import <ScadeKit/SCDSvgDrawable.h>


@protocol SCDSvgDrawable;
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


/*PROTECTED REGION ID(scade::svg::draw::SCDSvgDrawableGroup_pre) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/


@protocol SCDSvgDrawableGroup <SCDSvgDrawable>


@property (nonatomic) NSArray<id<SCDSvgDrawable>>* drawableChilds;





/*PROTECTED REGION ID(scade::svg::draw::SCDSvgDrawableGroup) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

@end
