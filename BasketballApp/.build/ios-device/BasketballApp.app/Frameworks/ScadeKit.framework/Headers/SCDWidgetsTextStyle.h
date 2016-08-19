
#import <Foundation/Foundation.h>

#import <ScadeKit/SCDWidgetsIStyle.h>


@protocol SCDWidgetsIStyle;


typedef NS_ENUM(NSInteger, SCDLayoutHorizontalAlignment);
typedef NS_ENUM(NSInteger, SCDWidgetsBaselineAlignment);
typedef NS_ENUM(NSInteger, SCDLayoutVerticalAlignment);

/*PROTECTED REGION ID(scade::ui::widgets::style::SCDWidgetsTextStyle_pre) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/


@interface SCDWidgetsTextStyle : EObject <SCDWidgetsIStyle>           


@property (nonatomic) SCDLayoutHorizontalAlignment horizontalAlignment;

@property (nonatomic) SCDWidgetsBaselineAlignment baselineAlignment;

@property (nonatomic) SCDLayoutVerticalAlignment verticalAlignment;





/*PROTECTED REGION ID(scade::ui::widgets::style::SCDWidgetsTextStyle) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

@end
