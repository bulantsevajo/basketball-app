
#import <Foundation/Foundation.h>

#import <ScadeKit/SCDWidgetsIContainer.h>


@protocol SCDSvgDrawable;
@protocol SCDWidgetsIStyle;
@protocol SCDWidgetsIControl;
@protocol SCDWidgetsIVisualControl;
@protocol SCDWidgetsIStyledControl;
@protocol SCDLayoutILayoutable;
@protocol SCDWidgetsLayoutable;
@protocol SCDWidgetsClickable;
@protocol SCDWidgetsIContainer;

@class SCDLayoutLayout;
@class SCDGraphicsDimension;
@class SCDWidgetsEventHandler;
@class SCDWidgetsWidget;
@class SCDWidgetsEnterEventHandler;
@class SCDWidgetsExitEventHandler;
@class EObject;


/*PROTECTED REGION ID(scade::ui::widgets::SCDWidgetsPage_pre) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/


@interface SCDWidgetsPage : EObject <SCDWidgetsIContainer>           


@property (nonatomic) NSArray<SCDWidgetsEnterEventHandler*>* OnEnter;

@property (nonatomic) NSArray<SCDWidgetsExitEventHandler*>* OnExit;

@property (nonatomic) NSString* platform;

@property (nonatomic) NSString* skin;

@property (nonatomic) EObject* adapter;



-(NSArray<SCDWidgetsWidget*>*) getAllWidgets ;



/*PROTECTED REGION ID(scade::ui::widgets::SCDWidgetsPage) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

@end
