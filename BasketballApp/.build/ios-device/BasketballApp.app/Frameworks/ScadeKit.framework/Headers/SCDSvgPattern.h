
#import <Foundation/Foundation.h>

#import <ScadeKit/SCDSvgDrawableGroup.h>
#import <ScadeKit/SCDSvgTransformable.h>
#import <ScadeKit/SCDSvgAlignmentElement.h>


@protocol SCDSvgDrawable;
@protocol SCDSvgElement;
@protocol SCDSvgHitEventReceiver;
@protocol SCDLayoutNode;
@protocol SCDSvgAnimatable;
@protocol SCDSvgDrawableGroup;
@protocol SCDSvgTransformable;
@protocol SCDSvgAlignmentElement;

@class SCDSvgConstraint;
@class SCDSvgTouchHandler;
@class SCDSvgTapHandler;
@class SCDSvgGestureRecognizer;
@class SCDLayoutLayoutData;
@class SCDGraphicsDimension;
@class SCDGraphicsPoint;
@class SCDSvgAnimation;
@class SCDSvgMatrix;
@class SCDSvgUnit;

typedef NS_ENUM(NSInteger, SCDSvgAspectRatio);
typedef NS_ENUM(NSInteger, SCDSvgBoxAlignment);

/*PROTECTED REGION ID(scade::svg::draw::SCDSvgPattern_pre) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/


@interface SCDSvgPattern : EObject <SCDSvgDrawableGroup, SCDSvgTransformable, SCDSvgAlignmentElement>           


@property (nonatomic) SCDSvgUnit* width;

@property (nonatomic) SCDSvgUnit* height;

@property (nonatomic) SCDSvgUnit* x;

@property (nonatomic) SCDSvgUnit* y;

@property (nonatomic) NSString* viewBox;

@property (nonatomic,getter=isUserSpace) BOOL userSpace;

@property (nonatomic,getter=isContentUserSpace) BOOL contentUserSpace;





/*PROTECTED REGION ID(scade::svg::draw::SCDSvgPattern) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

@end
