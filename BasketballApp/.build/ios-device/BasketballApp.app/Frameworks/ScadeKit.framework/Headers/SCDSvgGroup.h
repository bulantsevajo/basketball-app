
#import <Foundation/Foundation.h>

#import <ScadeKit/SCDSvgContainerElement.h>
#import <ScadeKit/SCDSvgDrawableElement.h>
#import <ScadeKit/SCDSvgDrawableGroup.h>
#import <ScadeKit/SCDSvgFontStyleable.h>


@protocol SCDSvgElement;
@protocol SCDSvgDrawable;
@protocol SCDSvgContainerElement;
@protocol SCDSvgStylable;
@protocol SCDSvgTransformable;
@protocol SCDSvgHitEventReceiver;
@protocol SCDLayoutNode;
@protocol SCDSvgAnimatable;
@protocol SCDSvgDrawableElement;
@protocol SCDSvgDrawableGroup;

@class SCDSvgConstraint;
@class SCDSvgColor;
@class SCDSvgPattern;
@class SCDSvgClipPath;
@class SCDSvgMatrix;
@class SCDSvgTouchHandler;
@class SCDSvgTapHandler;
@class SCDSvgGestureRecognizer;
@class SCDLayoutLayoutData;
@class SCDGraphicsDimension;
@class SCDGraphicsPoint;
@class SCDSvgAnimation;
@class SCDSvgFontStyleable;

typedef NS_ENUM(NSInteger, SCDSvgLineJoin);
typedef NS_ENUM(NSInteger, SCDSvgFillRule);
typedef NS_ENUM(NSInteger, SCDSvgFontStyle);
typedef NS_ENUM(NSInteger, SCDSvgTextDecoration);

/*PROTECTED REGION ID(scade::svg::draw::SCDSvgGroup_pre) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/


@interface SCDSvgGroup : SCDSvgFontStyleable <SCDSvgContainerElement, SCDSvgDrawableElement, SCDSvgDrawableGroup>           






/*PROTECTED REGION ID(scade::svg::draw::SCDSvgGroup) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

@end
