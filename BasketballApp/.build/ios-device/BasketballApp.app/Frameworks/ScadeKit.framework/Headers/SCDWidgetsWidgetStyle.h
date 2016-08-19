
#import <Foundation/Foundation.h>

#import <ScadeKit/SCDWidgetsIStyle.h>


@protocol SCDWidgetsIStyle;

@class SCDGraphicsDimension;


/*PROTECTED REGION ID(scade::ui::widgets::style::SCDWidgetsWidgetStyle_pre) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/


@interface SCDWidgetsWidgetStyle : EObject <SCDWidgetsIStyle>           


@property (nonatomic) SCDGraphicsDimension* minSize;

@property (nonatomic) SCDGraphicsDimension* maxSize;





/*PROTECTED REGION ID(scade::ui::widgets::style::SCDWidgetsWidgetStyle) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

@end
