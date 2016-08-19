
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
@class SCDWidgetsListElement;
@class SCDWidgetsList;
@class SCDWidgetsWidget;


/*PROTECTED REGION ID(scade::ui::widgets::SCDWidgetsListTemplate_pre) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/


@interface SCDWidgetsListTemplate : SCDWidgetsWidget         


@property (nonatomic) SCDWidgetsListElement* element;

@property (nonatomic,readonly) SCDWidgetsList* list;





/*PROTECTED REGION ID(scade::ui::widgets::SCDWidgetsListTemplate) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

@end
