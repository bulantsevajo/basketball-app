
#import <Foundation/Foundation.h>

#import <ScadeKit/SCDWidgetsWidget.h>
#import <ScadeKit/SCDWidgetsClickable.h>


@protocol SCDSvgDrawable;
@protocol SCDWidgetsIStyle;
@protocol SCDWidgetsIContainer;
@protocol SCDLayoutNode;
@protocol SCDWidgetsIControl;
@protocol SCDWidgetsIVisualControl;
@protocol SCDWidgetsIStyledControl;
@protocol SCDWidgetsClickable;

@class SCDLayoutLayoutData;
@class SCDGraphicsDimension;
@class SCDGraphicsPoint;
@class SCDWidgetsEventHandler;
@class SCDWidgetsWidget;


/*PROTECTED REGION ID(scade::ui::widgets::SCDWidgetsCheckbox_pre) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/


@interface SCDWidgetsCheckbox : SCDWidgetsWidget <SCDWidgetsClickable>           


@property (nonatomic,getter=isChecked) BOOL checked;





/*PROTECTED REGION ID(scade::ui::widgets::SCDWidgetsCheckbox) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

@end
