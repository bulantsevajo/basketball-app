
#import <Foundation/Foundation.h>

#import <ScadeKit/SCDLayoutNode.h>
#import <ScadeKit/SCDWidgetsIStyledControl.h>


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


/*PROTECTED REGION ID(scade::ui::widgets::SCDWidgetsWidget_pre) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/


@interface SCDWidgetsWidget : EObject <SCDLayoutNode, SCDWidgetsIStyledControl>           


@property (nonatomic,readonly) id<SCDWidgetsIContainer> parent;

@property (nonatomic,getter=isVisible) BOOL visible;

@property (nonatomic,getter=isEnable) BOOL enable;



-(BOOL) isPersistent ;



/*PROTECTED REGION ID(scade::ui::widgets::SCDWidgetsWidget) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

@end
