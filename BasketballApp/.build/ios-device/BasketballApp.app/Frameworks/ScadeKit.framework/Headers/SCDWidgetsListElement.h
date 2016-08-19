
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
@class SCDWidgetsContainer;


/*PROTECTED REGION ID(scade::ui::widgets::SCDWidgetsListElement_pre) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/


@interface SCDWidgetsListElement : SCDWidgetsContainer         


@property (nonatomic) id<SCDWidgetsIContainer> leftBar;

@property (nonatomic) id<SCDWidgetsIContainer> rightBar;

@property (nonatomic,getter=isSelectable) BOOL selectable;





/*PROTECTED REGION ID(scade::ui::widgets::SCDWidgetsListElement) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

@end
