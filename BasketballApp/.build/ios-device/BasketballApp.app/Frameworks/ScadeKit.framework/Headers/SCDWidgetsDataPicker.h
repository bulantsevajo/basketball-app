
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
@class SCDWidgetsDataWheel;
@class SCDWidgetsWidget;


/*PROTECTED REGION ID(scade::ui::widgets::SCDWidgetsDataPicker_pre) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/


@interface SCDWidgetsDataPicker : SCDWidgetsWidget         


@property (nonatomic) NSArray<SCDWidgetsDataWheel*>* wheels;

@property (nonatomic) NSNumber* spacing;





/*PROTECTED REGION ID(scade::ui::widgets::SCDWidgetsDataPicker) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

@end
