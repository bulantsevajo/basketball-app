
#import <Foundation/Foundation.h>

#import <ScadeKit/SCDSvgShape.h>


@protocol SCDSvgStylable;
@protocol SCDSvgTransformable;
@protocol SCDSvgElement;
@protocol SCDSvgHitEventReceiver;
@protocol SCDLayoutNode;
@protocol SCDSvgAnimatable;
@protocol SCDSvgDrawable;
@protocol SCDSvgDrawableElement;
@protocol SCDSvgShape;

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

/*PROTECTED REGION ID(scade::svg::draw::SCDSvgPolyline_pre) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/


@interface SCDSvgPolyline : EObject <SCDSvgShape>           


@property (nonatomic) NSArray<NSNumber*>* points;

@property (nonatomic,getter=isClosed) BOOL closed;





/*PROTECTED REGION ID(scade::svg::draw::SCDSvgPolyline) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

@end
