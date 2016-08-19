
#import <Foundation/Foundation.h>

#import <ScadeKit/EObject.h>





/*PROTECTED REGION ID(scade::svg::transform::SCDSvgMatrix_pre) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/


@interface SCDSvgMatrix : EObject         


@property (nonatomic) NSNumber* scaleX;

@property (nonatomic) NSNumber* skewX;

@property (nonatomic) NSNumber* translateX;

@property (nonatomic) NSNumber* skewY;

@property (nonatomic) NSNumber* scaleY;

@property (nonatomic) NSNumber* translateY;



-(void) setIdentity ;

-(void) scale:(NSNumber*)x y:(NSNumber*)y ;

-(void) translate:(NSNumber*)x y:(NSNumber*)y ;

-(void) rotate:(NSNumber*)angle  ;

-(void) rotateAround:(NSNumber*)angle x:(NSNumber*)x y:(NSNumber*)y ;



/*PROTECTED REGION ID(scade::svg::transform::SCDSvgMatrix) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

@end
