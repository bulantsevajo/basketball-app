
#import <Foundation/Foundation.h>

#import <ScadeKit/SCDWidgetsButton.h>


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
@class SCDWidgetsTextWidget;
@class SCDWidgetsButton;

typedef NS_ENUM(NSInteger, SCDWidgetsNavigationBarButtonType);

/*PROTECTED REGION ID(scade::ui::widgets::SCDWidgetsNavigationBarButton_pre) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/


@interface SCDWidgetsNavigationBarButton : SCDWidgetsButton         


@property (nonatomic) SCDWidgetsNavigationBarButtonType type;





/*PROTECTED REGION ID(scade::ui::widgets::SCDWidgetsNavigationBarButton) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

@end
