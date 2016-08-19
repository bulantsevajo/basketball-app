
#import <Foundation/Foundation.h>

#import <ScadeKit/SCDSvgShape.h>
#import <ScadeKit/SCDSvgTSpan.h>


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
@class SCDSvgUnit;
@class SCDSvgTSpan;
@class SCDSvgFontStyleable;

typedef NS_ENUM(NSInteger, SCDSvgLineJoin);
typedef NS_ENUM(NSInteger, SCDSvgFillRule);
typedef NS_ENUM(NSInteger, SCDSvgFontStyle);
typedef NS_ENUM(NSInteger, SCDSvgTextDecoration);
typedef NS_ENUM(NSInteger, SCDSvgTextAnchor);
typedef NS_ENUM(NSInteger, SCDSvgTextAlignmentBaseline);
typedef NS_ENUM(NSInteger, SCDSvgTextAlignment);

/*PROTECTED REGION ID(scade::svg::draw::SCDSvgText_pre) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/


@interface SCDSvgText : SCDSvgTSpan <SCDSvgShape>           


@property (nonatomic) NSArray<SCDSvgTSpan*>* spans;



-(SCDGraphicsDimension*) getTextBounds ;



/*PROTECTED REGION ID(scade::svg::draw::SCDSvgText) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

@end
