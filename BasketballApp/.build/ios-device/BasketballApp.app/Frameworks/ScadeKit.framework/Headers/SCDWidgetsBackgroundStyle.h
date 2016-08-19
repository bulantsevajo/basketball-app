
#import <Foundation/Foundation.h>

#import <ScadeKit/SCDWidgetsIStyle.h>


@protocol SCDWidgetsIStyle;

@class SCDGraphicsRGB;

typedef NS_ENUM(NSInteger, SCDWidgetsBackgroundType);

/*PROTECTED REGION ID(scade::ui::widgets::style::SCDWidgetsBackgroundStyle_pre) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/


@interface SCDWidgetsBackgroundStyle : EObject <SCDWidgetsIStyle>           


@property (nonatomic) SCDGraphicsRGB* color;

@property (nonatomic) NSString* image;

@property (nonatomic) SCDWidgetsBackgroundType type;





/*PROTECTED REGION ID(scade::ui::widgets::style::SCDWidgetsBackgroundStyle) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

@end
