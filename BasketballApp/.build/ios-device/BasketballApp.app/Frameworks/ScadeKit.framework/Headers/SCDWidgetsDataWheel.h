
#import <Foundation/Foundation.h>

#import <ScadeKit/SCDWidgetsWidget.h>


@protocol SCDSvgDrawable;
@protocol SCDWidgetsIStyle;
@protocol SCDWidgetsIContainer;
@protocol SCDLayoutNode;
@protocol SCDWidgetsIControl;
@protocol SCDWidgetsIVisualControl;
@protocol SCDWidgetsIStyledControl;

@class SCDLayoutLayoutData;
@class SCDGraphicsDimension;
@class SCDGraphicsPoint;
@class SCDWidgetsWidget;

typedef NS_ENUM(NSInteger, SCDWidgetsDataWheelAlignment);

/*PROTECTED REGION ID(scade::ui::widgets::SCDWidgetsDataWheel_pre) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/


@interface SCDWidgetsDataWheel : SCDWidgetsWidget         


@property (nonatomic) NSArray<NSString*>* data;

@property (nonatomic) NSNumber* width;

@property (nonatomic) SCDWidgetsDataWheelAlignment alignment;

@property (nonatomic,getter=isCycle) BOOL cycle;

@property (nonatomic) NSString* selected;



-(NSNumber*) textLocation ;



/*PROTECTED REGION ID(scade::ui::widgets::SCDWidgetsDataWheel) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

@end
