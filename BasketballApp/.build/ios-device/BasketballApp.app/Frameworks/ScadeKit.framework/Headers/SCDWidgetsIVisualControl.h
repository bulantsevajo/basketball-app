
#import <Foundation/Foundation.h>

#import <ScadeKit/SCDWidgetsIControl.h>


@protocol SCDSvgDrawable;
@protocol SCDWidgetsIControl;



/*PROTECTED REGION ID(scade::ui::widgets::SCDWidgetsIVisualControl_pre) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/


@protocol SCDWidgetsIVisualControl <SCDWidgetsIControl>


@property (nonatomic) id<SCDSvgDrawable> drawing;





/*PROTECTED REGION ID(scade::ui::widgets::SCDWidgetsIVisualControl) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

@end
