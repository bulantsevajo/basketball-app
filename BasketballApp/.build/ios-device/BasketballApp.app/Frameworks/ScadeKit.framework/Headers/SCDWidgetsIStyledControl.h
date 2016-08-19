
#import <Foundation/Foundation.h>

#import <ScadeKit/SCDWidgetsIVisualControl.h>


@protocol SCDSvgDrawable;
@protocol SCDWidgetsIStyle;
@protocol SCDWidgetsIControl;
@protocol SCDWidgetsIVisualControl;

@class SCDWidgetsPage;
@class EClass;


/*PROTECTED REGION ID(scade::ui::widgets::SCDWidgetsIStyledControl_pre) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/


@protocol SCDWidgetsIStyledControl <SCDWidgetsIVisualControl>


@property (nonatomic) NSArray<id<SCDWidgetsIStyle>>* styles;



-(id<SCDWidgetsIStyle>) getStyle:(EClass*)style  ;

-(SCDWidgetsPage*) getPage ;



/*PROTECTED REGION ID(scade::ui::widgets::SCDWidgetsIStyledControl) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

@end
