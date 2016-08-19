
#import <Foundation/Foundation.h>

#import <ScadeKit/SCDSvgContainerElement.h>
#import <ScadeKit/SCDSvgDrawableGroup.h>
#import <ScadeKit/SCDSvgTransformable.h>
#import <ScadeKit/SCDSvgAlignmentElement.h>


@protocol SCDSvgElement;
@protocol SCDSvgDrawable;
@protocol SCDSvgContainerElement;
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

/*PROTECTED REGION ID(scade::svg::draw::SCDSvgBox_pre) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/


@interface SCDSvgBox : EObject <SCDSvgContainerElement, SCDSvgDrawableGroup, SCDSvgTransformable, SCDSvgAlignmentElement>           


@property (nonatomic) NSString* viewBox;

@property (nonatomic) SCDSvgUnit* x;

@property (nonatomic) SCDSvgUnit* y;

@property (nonatomic) SCDSvgUnit* width;

@property (nonatomic) SCDSvgUnit* height;





/*PROTECTED REGION ID(scade::svg::draw::SCDSvgBox) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

@end
