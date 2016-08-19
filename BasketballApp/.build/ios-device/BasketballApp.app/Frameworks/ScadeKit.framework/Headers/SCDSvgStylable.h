
#import <Foundation/Foundation.h>

#import <ScadeKit/EObject.h>



@class SCDSvgColor;
@class SCDSvgPattern;
@class SCDSvgClipPath;

typedef NS_ENUM(NSInteger, SCDSvgLineJoin);
typedef NS_ENUM(NSInteger, SCDSvgFillRule);

/*PROTECTED REGION ID(scade::svg::style::SCDSvgStylable_pre) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/


@protocol SCDSvgStylable <EObject>     


@property (nonatomic) SCDSvgColor* fill;

@property (nonatomic) SCDSvgColor* stroke;

@property (nonatomic) NSNumber* strokeWidth;

@property (nonatomic) NSNumber* opacity;

@property (nonatomic) NSNumber* fillOpacity;

@property (nonatomic) NSNumber* strokeOpacity;

@property (nonatomic) SCDSvgLineJoin strokeLineJoin;

@property (nonatomic) SCDSvgFillRule fillRule;

@property (nonatomic) SCDSvgColor* fillObject;

@property (nonatomic) SCDSvgPattern* pattern;

@property (nonatomic) SCDSvgClipPath* clipPath;





/*PROTECTED REGION ID(scade::svg::style::SCDSvgStylable) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

@end
