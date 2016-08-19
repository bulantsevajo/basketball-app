
#import <Foundation/Foundation.h>

#import <ScadeKit/SCDWidgetsIStyledControl.h>
#import <ScadeKit/SCDWidgetsLayoutable.h>
#import <ScadeKit/SCDWidgetsClickable.h>


@protocol SCDSvgDrawable;
@protocol SCDWidgetsIStyle;
@protocol SCDWidgetsIControl;
@protocol SCDWidgetsIVisualControl;
@protocol SCDWidgetsIStyledControl;
@protocol SCDLayoutILayoutable;
@protocol SCDWidgetsLayoutable;
@protocol SCDWidgetsClickable;
@protocol SCDLayoutNode;

@class SCDLayoutLayout;
@class SCDGraphicsDimension;
@class SCDWidgetsEventHandler;
@class SCDWidgetsWidget;


/*PROTECTED REGION ID(scade::ui::widgets::SCDWidgetsIContainer_pre) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/


@protocol SCDWidgetsIContainer <SCDWidgetsIStyledControl, SCDWidgetsLayoutable, SCDWidgetsClickable>


@property (nonatomic) NSArray<SCDWidgetsWidget*>* children;



-(SCDWidgetsWidget*) getWidgetByName:(NSString*)name  ;



/*PROTECTED REGION ID(scade::ui::widgets::SCDWidgetsIContainer) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

@end
