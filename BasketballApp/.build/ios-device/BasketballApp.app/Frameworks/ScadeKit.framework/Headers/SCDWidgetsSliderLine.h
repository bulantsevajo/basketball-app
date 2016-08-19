
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
@class SCDWidgetsSlideLineEventHandler;
@class SCDWidgetsWidget;


/*PROTECTED REGION ID(scade::ui::widgets::SCDWidgetsSliderLine_pre) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/


@interface SCDWidgetsSliderLine : SCDWidgetsWidget         


@property (nonatomic) NSNumber* minValue;

@property (nonatomic) NSNumber* maxValue;

@property (nonatomic) NSNumber* stepSize;

@property (nonatomic) NSNumber* position;

@property (nonatomic) NSArray<SCDWidgetsSlideLineEventHandler*>* OnSlide;





/*PROTECTED REGION ID(scade::ui::widgets::SCDWidgetsSliderLine) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

@end
