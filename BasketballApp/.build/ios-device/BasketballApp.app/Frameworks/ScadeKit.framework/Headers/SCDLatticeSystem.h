
#import <Foundation/Foundation.h>

#import <ScadeKit/EObject.h>



@class SCDGraphicsDimension;


/*PROTECTED REGION ID(scade::lattice::system::SCDLatticeSystem_pre) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/


@interface SCDLatticeSystem : EObject         




-(NSString*) pathForResource:(NSString*)resourceName  ;

-(NSString*) getCurrentDirectory ;

-(SCDGraphicsDimension*) getScreenSize ;

-(NSString*) pathForDocument:(NSString*)resourceName  ;

-(void) openUrl:(NSString*)url  ;

-(void) exit ;



/*PROTECTED REGION ID(scade::lattice::system::SCDLatticeSystem) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

@end
