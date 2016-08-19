
#import <Foundation/Foundation.h>

#import <ScadeKit/SCDWidgetsIStyle.h>


@protocol SCDWidgetsIStyle;

@class SCDGraphicsRGB;


/*PROTECTED REGION ID(scade::ui::widgets::style::SCDWidgetsFontStyle_pre) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/


@interface SCDWidgetsFontStyle : EObject <SCDWidgetsIStyle>           


@property (nonatomic) NSString* fontFamily;

@property (nonatomic) NSNumber* size;

@property (nonatomic,getter=isBold) BOOL bold;

@property (nonatomic,getter=isItalic) BOOL italic;

@property (nonatomic,getter=isLineThrough) BOOL lineThrough;

@property (nonatomic,getter=isUnderline) BOOL underline;

@property (nonatomic) SCDGraphicsRGB* color;





/*PROTECTED REGION ID(scade::ui::widgets::style::SCDWidgetsFontStyle) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

@end
