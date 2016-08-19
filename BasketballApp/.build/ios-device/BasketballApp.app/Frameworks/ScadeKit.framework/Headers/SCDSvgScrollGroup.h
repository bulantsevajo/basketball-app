
#import <Foundation/Foundation.h>

#import <ScadeKit/SCDSvgGroup.h>


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
@class SCDSvgGroup;

typedef NS_ENUM(NSInteger, SCDSvgLineJoin);
typedef NS_ENUM(NSInteger, SCDSvgFillRule);
typedef NS_ENUM(NSInteger, SCDSvgFontStyle);
typedef NS_ENUM(NSInteger, SCDSvgTextDecoration);
typedef NS_ENUM(NSInteger, SCDSvgScrollType);

/*PROTECTED REGION ID(scade::svg::draw::SCDSvgScrollGroup_pre) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/


@interface SCDSvgScrollGroup : SCDSvgGroup         


@property (nonatomic) NSNumber* width;

@property (nonatomic) NSNumber* height;

@property (nonatomic) SCDSvgScrollType type;



-(SCDGraphicsDimension*) getContentSize ;

-(SCDGraphicsPoint*) getPosition ;

-(void) scrollTo:(NSNumber*)x y:(NSNumber*)y ;



/*PROTECTED REGION ID(scade::svg::draw::SCDSvgScrollGroup) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

@end
