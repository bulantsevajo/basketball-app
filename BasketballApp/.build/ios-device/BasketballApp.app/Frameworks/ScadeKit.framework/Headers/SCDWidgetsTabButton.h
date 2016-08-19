
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
@class SCDWidgetsTabButtonsPanel;
@class SCDWidgetsTabbedView;
@class SCDWidgetsWidget;


/*PROTECTED REGION ID(scade::ui::widgets::SCDWidgetsTabButton_pre) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/


@interface SCDWidgetsTabButton : SCDWidgetsWidget         


@property (nonatomic,readonly,getter=isActive) BOOL active;

@property (nonatomic,readonly) SCDWidgetsTabButtonsPanel* tabButtonsPanel;

@property (nonatomic,readonly) SCDWidgetsTabbedView* tabbedView;

@property (nonatomic) NSString* text;



-(NSNumber*) getButtonIndex ;



/*PROTECTED REGION ID(scade::ui::widgets::SCDWidgetsTabButton) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

@end
