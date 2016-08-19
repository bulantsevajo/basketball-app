
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
@class SCDWidgetsWidget;
@class SCDWidgetsSlideEventHandler;


/*PROTECTED REGION ID(scade::ui::widgets::SCDWidgetsSlider_pre) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/


@interface SCDWidgetsSlider : SCDWidgetsWidget <SCDWidgetsLayoutable>           


@property (nonatomic) NSArray<SCDWidgetsWidget*>* elements;

@property (nonatomic) SCDWidgetsWidget* _template;

@property (nonatomic) NSArray<id>* items;

@property (nonatomic) NSArray<SCDWidgetsSlideEventHandler*>* OnSlide;

@property (nonatomic) NSNumber* selected;





/*PROTECTED REGION ID(scade::ui::widgets::SCDWidgetsSlider) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

@end
