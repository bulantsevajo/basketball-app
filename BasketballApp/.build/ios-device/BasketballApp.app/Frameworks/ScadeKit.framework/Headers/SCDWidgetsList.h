
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
@class SCDWidgetsListTemplate;
@class SCDWidgetsListElement;
@class SCDWidgetsItemSelectedEventHandler;
@class SCDWidgetsWidget;


/*PROTECTED REGION ID(scade::ui::widgets::SCDWidgetsList_pre) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/


@interface SCDWidgetsList : SCDWidgetsWidget <SCDWidgetsLayoutable>           


@property (nonatomic) SCDWidgetsListTemplate* _template;

@property (nonatomic) NSArray<SCDWidgetsListElement*>* elements;

@property (nonatomic) NSArray<id>* items;

@property (nonatomic) NSArray<SCDWidgetsItemSelectedEventHandler*>* OnItemSelected;





/*PROTECTED REGION ID(scade::ui::widgets::SCDWidgetsList) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

@end
