
#import <Foundation/Foundation.h>

#import <ScadeKit/SCDSvgElement.h>
#import <ScadeKit/SCDSvgDrawable.h>
#import <ScadeKit/SCDSvgTransformable.h>
#import <ScadeKit/SCDSvgAlignmentElement.h>


@protocol SCDSvgElement;
@protocol SCDSvgHitEventReceiver;
@protocol SCDLayoutNode;
@protocol SCDSvgAnimatable;
@protocol SCDSvgDrawable;
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

/*PROTECTED REGION ID(scade::svg::draw::SCDSvgImage_pre) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/


@interface SCDSvgImage : EObject <SCDSvgElement, SCDSvgDrawable, SCDSvgTransformable, SCDSvgAlignmentElement>           


@property (nonatomic) NSString* xhref;

@property (nonatomic) SCDSvgUnit* x;

@property (nonatomic) SCDSvgUnit* y;

@property (nonatomic) SCDSvgUnit* width;

@property (nonatomic) SCDSvgUnit* height;

@property (nonatomic) NSString* content;





/*PROTECTED REGION ID(scade::svg::draw::SCDSvgImage) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

@end
