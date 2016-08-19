
#import <Foundation/Foundation.h>

#import <ScadeKit/SCDSvgPathElement.h>



@class SCDSvgPathElement;


/*PROTECTED REGION ID(scade::svg::draw::attributes::path::SCDSvgPathElliptical_pre) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/


@interface SCDSvgPathElliptical : SCDSvgPathElement         


@property (nonatomic) NSNumber* rx;

@property (nonatomic) NSNumber* ry;

@property (nonatomic) NSNumber* angle;

@property (nonatomic,getter=isLargeArc) BOOL largeArc;

@property (nonatomic,getter=isSweep) BOOL sweep;

@property (nonatomic) NSNumber* x;

@property (nonatomic) NSNumber* y;





/*PROTECTED REGION ID(scade::svg::draw::attributes::path::SCDSvgPathElliptical) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

@end
