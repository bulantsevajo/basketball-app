
#import <Foundation/Foundation.h>

#import <ScadeKit/SCDWidgetsWidget.h>
#import <ScadeKit/SCDWidgetsLayoutable.h>


@protocol SCDSvgDrawable;
@protocol SCDWidgetsIStyle;
@protocol SCDWidgetsIContainer;
@protocol SCDLayoutNode;
@protocol SCDWidgetsIControl;
@protocol SCDWidgetsIVisualControl;
@protocol SCDWidgetsIStyledControl;
@protocol SCDLayoutILayoutable;
@protocol SCDWidgetsLayoutable;

@class SCDLayoutLayoutData;
@class SCDGraphicsDimension;
@class SCDGraphicsPoint;
@class SCDLayoutLayout;
@class SCDWidgetsTabButtonsPanel;
@class SCDWidgetsTabContentPanel;
@class SCDWidgetsTabButton;
@class SCDWidgetsWidget;


/*PROTECTED REGION ID(scade::ui::widgets::SCDWidgetsTabbedView_pre) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/


@interface SCDWidgetsTabbedView : SCDWidgetsWidget <SCDWidgetsLayoutable>           


@property (nonatomic) SCDWidgetsTabButtonsPanel* tabButtonsPanel;

@property (nonatomic) SCDWidgetsTabContentPanel* contentPanel;

@property (nonatomic) NSNumber* activeIndex;

@property (nonatomic,readonly) SCDWidgetsTabButton* activeButton;

@property (nonatomic,readonly) SCDWidgetsWidget* activeTab;

@property (nonatomic,getter=isButtonsOnTop) BOOL buttonsOnTop;

@property (nonatomic,getter=isSwitchOnSwipe) BOOL switchOnSwipe;

@property (nonatomic,getter=isShowButtons) BOOL showButtons;



-(SCDWidgetsWidget*) getTabFor:(NSNumber*)index  ;

-(SCDWidgetsWidget*) getTabForButton:(SCDWidgetsTabButton*)tabButton  ;



/*PROTECTED REGION ID(scade::ui::widgets::SCDWidgetsTabbedView) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

@end
