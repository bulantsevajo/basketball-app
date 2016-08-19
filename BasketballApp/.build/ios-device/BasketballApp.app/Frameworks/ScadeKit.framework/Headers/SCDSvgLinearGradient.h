
#import <Foundation/Foundation.h>

#import <ScadeKit/SCDSvgColor.h>
#import <ScadeKit/SCDSvgElement.h>


@protocol SCDSvgElement;

@class SCDSvgConstraint;
@class SCDSvgStop;
@class SCDSvgUnit;
@class SCDSvgColor;


/*PROTECTED REGION ID(scade::svg::style::color::SCDSvgLinearGradient_pre) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/


@interface SCDSvgLinearGradient : SCDSvgColor <SCDSvgElement>           


@property (nonatomic,getter=isUserSpace) BOOL userSpace;

@property (nonatomic) NSArray<SCDSvgStop*>* stops;

@property (nonatomic) SCDSvgUnit* x1;

@property (nonatomic) SCDSvgUnit* y1;

@property (nonatomic) SCDSvgUnit* x2;

@property (nonatomic) SCDSvgUnit* y2;

@property (nonatomic) NSString* xhref;





/*PROTECTED REGION ID(scade::svg::style::color::SCDSvgLinearGradient) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

@end
