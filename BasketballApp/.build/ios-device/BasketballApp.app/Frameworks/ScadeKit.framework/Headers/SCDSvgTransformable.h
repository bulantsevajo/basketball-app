
#import <Foundation/Foundation.h>

#import <ScadeKit/EObject.h>



@class SCDSvgMatrix;


/*PROTECTED REGION ID(scade::svg::transform::SCDSvgTransformable_pre) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/


@protocol SCDSvgTransformable <EObject>     


@property (nonatomic) SCDSvgMatrix* matrix;



-(void) setIdentity ;

-(void) scale:(NSNumber*)x y:(NSNumber*)y ;

-(void) translate:(NSNumber*)x y:(NSNumber*)y ;

-(void) rotate:(NSNumber*)angle  ;

-(void) rotateAround:(NSNumber*)angle x:(NSNumber*)x y:(NSNumber*)y ;



/*PROTECTED REGION ID(scade::svg::transform::SCDSvgTransformable) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

@end
