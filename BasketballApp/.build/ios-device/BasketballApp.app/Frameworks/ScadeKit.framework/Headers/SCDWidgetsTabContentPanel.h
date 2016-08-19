
#import <Foundation/Foundation.h>

#import <ScadeKit/SCDWidgetsContainer.h>


@protocol SCDSvgDrawable;
@protocol SCDWidgetsIStyle;
@protocol SCDWidgetsIContainer;
@protocol SCDLayoutNode;
@protocol SCDWidgetsIControl;
@protocol SCDWidgetsIVisualControl;
@protocol SCDWidgetsIStyledControl;
@protocol SCDLayoutILayoutable;
@protocol SCDWidgetsLayoutable;
@protocol SCDWidgetsClickable;

@class SCDLayoutLayoutData;
@class SCDGraphicsDimension;
@class SCDGraphicsPoint;
@class SCDLayoutLayout;
@class SCDWidgetsEventHandler;
@class SCDWidgetsWidget;
@class SCDWidgetsTabbedView;
@class SCDWidgetsTabButtonsPanel;
@class SCDWidgetsContainer;


/*PROTECTED REGION ID(scade::ui::widgets::SCDWidgetsTabContentPanel_pre) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/


@interface SCDWidgetsTabContentPanel : SCDWidgetsContainer         


@property (nonatomic,readonly) SCDWidgetsTabbedView* ownerView;

@property (nonatomic,readonly) SCDWidgetsTabButtonsPanel* tabButtonsPanel;





/*PROTECTED REGION ID(scade::ui::widgets::SCDWidgetsTabContentPanel) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

@end