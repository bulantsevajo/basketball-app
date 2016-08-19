
#import <Foundation/Foundation.h>

#import <ScadeKit/SCDSvgStylable.h>
#import <ScadeKit/SCDSvgTransformable.h>
#import <ScadeKit/SCDSvgDrawable.h>


@protocol SCDSvgStylable;
@protocol SCDSvgTransformable;
@protocol SCDSvgElement;
@protocol SCDSvgHitEventReceiver;
@protocol SCDLayoutNode;
@protocol SCDSvgAnimatable;
@protocol SCDSvgDrawable;

@class SCDSvgColor;
@class SCDSvgPattern;
@class SCDSvgClipPath;
@class SCDSvgMatrix;
@class SCDSvgConstraint;
@class SCDSvgTouchHandler;
@class SCDSvgTapHandler;
@class SCDSvgGestureRecognizer;
@class SCDLayoutLayoutData;
@class SCDGraphicsDimension;
@class SCDGraphicsPoint;
@class SCDSvgAnimation;

typedef NS_ENUM(NSInteger, SCDSvgLineJoin);
typedef NS_ENUM(NSInteger, SCDSvgFillRule);

/*PROTECTED REGION ID(scade::svg::draw::SCDSvgDrawableElement_pre) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/


@protocol SCDSvgDrawableElement <SCDSvgStylable, SCDSvgTransformable, SCDSvgDrawable>






/*PROTECTED REGION ID(scade::svg::draw::SCDSvgDrawableElement) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

@end
