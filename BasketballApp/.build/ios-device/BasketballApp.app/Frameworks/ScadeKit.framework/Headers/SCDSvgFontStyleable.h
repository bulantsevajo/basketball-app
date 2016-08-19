
#import <Foundation/Foundation.h>

#import <ScadeKit/EObject.h>




typedef NS_ENUM(NSInteger, SCDSvgFontStyle);
typedef NS_ENUM(NSInteger, SCDSvgTextDecoration);

/*PROTECTED REGION ID(scade::svg::style::SCDSvgFontStyleable_pre) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/


@interface SCDSvgFontStyleable : EObject         


@property (nonatomic) NSNumber* fontSize;

@property (nonatomic) NSString* fontName;

@property (nonatomic) SCDSvgFontStyle style;

@property (nonatomic) NSNumber* weight;

@property (nonatomic) SCDSvgTextDecoration decoration;





/*PROTECTED REGION ID(scade::svg::style::SCDSvgFontStyleable) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

@end
