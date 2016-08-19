
#import <Foundation/Foundation.h>

#import <ScadeKit/SCDSvgDrawableElement.h>


@protocol SCDSvgDrawable;
@protocol SCDSvgStylable;
@protocol SCDSvgTransformable;
@protocol SCDSvgElement;
@protocol SCDSvgHitEventReceiver;
@protocol SCDLayoutNode;
@protocol SCDSvgAnimatable;
@protocol SCDSvgDrawableElement;

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
@class SCDSvgUnit;

typedef NS_ENUM(NSInteger, SCDSvgLineJoin);
typedef NS_ENUM(NSInteger, SCDSvgFillRule);

/*PROTECTED REGION ID(scade::svg::draw::SCDSvgUse_pre) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/


@interface SCDSvgUse : EObject <SCDSvgDrawableElement>           


@property (nonatomic) id<SCDSvgDrawable> reference;

@property (nonatomic) NSString* xhref;

@property (nonatomic) SCDSvgUnit* x;

@property (nonatomic) SCDSvgUnit* y;

@property (nonatomic) SCDSvgUnit* width;

@property (nonatomic) SCDSvgUnit* height;





/*PROTECTED REGION ID(scade::svg::draw::SCDSvgUse) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

@end
