
#import <Foundation/Foundation.h>

#import <ScadeKit/EObject.h>



@class SCDGraphicsPoint;
@class SCDGraphicsDimension;


/*PROTECTED REGION ID(scade::graphics::SCDGraphicsRectangle_pre) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/


@interface SCDGraphicsRectangle : EObject         


@property (nonatomic) SCDGraphicsPoint* location;

@property (nonatomic) SCDGraphicsDimension* bounds;



-(SCDGraphicsRectangle*) join:(SCDGraphicsRectangle*)rectangle  ;

-(SCDGraphicsRectangle*) unite:(SCDGraphicsRectangle*)rectangle  ;



/*PROTECTED REGION ID(scade::graphics::SCDGraphicsRectangle) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

@end
