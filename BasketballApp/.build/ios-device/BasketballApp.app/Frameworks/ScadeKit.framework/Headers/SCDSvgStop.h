
#import <Foundation/Foundation.h>

#import <ScadeKit/SCDSvgElement.h>


@protocol SCDSvgElement;

@class SCDSvgConstraint;
@class SCDSvgColor;


/*PROTECTED REGION ID(scade::svg::style::color::SCDSvgStop_pre) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/


@interface SCDSvgStop : EObject <SCDSvgElement>           


@property (nonatomic) NSNumber* offset;

@property (nonatomic) NSNumber* opacity;

@property (nonatomic) SCDSvgColor* color;





/*PROTECTED REGION ID(scade::svg::style::color::SCDSvgStop) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

@end
