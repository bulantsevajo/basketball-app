
#import <Foundation/Foundation.h>

#import <ScadeKit/SCDWidgetsTextWidget.h>


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
@class SCDWidgetsTextChangeEventHandler;
@class SCDWidgetsEditFinishEventHandler;
@class SCDWidgetsWidget;
@class SCDWidgetsTextWidget;

typedef NS_ENUM(NSInteger, SCDWidgetsKeyboard);

/*PROTECTED REGION ID(scade::ui::widgets::SCDWidgetsTextbox_pre) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/


@interface SCDWidgetsTextbox : SCDWidgetsTextWidget         


@property (nonatomic) NSString* placeholder;

@property (nonatomic) NSArray<SCDWidgetsTextChangeEventHandler*>* OnTextChange;

@property (nonatomic) NSNumber* tabIndex;

@property (nonatomic) SCDWidgetsKeyboard keyboard;

@property (nonatomic) NSArray<SCDWidgetsEditFinishEventHandler*>* OnEditFinish;



-(void) setFocus ;



/*PROTECTED REGION ID(scade::ui::widgets::SCDWidgetsTextbox) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

@end
