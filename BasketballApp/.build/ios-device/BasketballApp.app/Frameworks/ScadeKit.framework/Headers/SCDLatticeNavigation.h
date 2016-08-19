
#import <Foundation/Foundation.h>

#import <ScadeKit/EObject.h>



@class SCDWidgetsPage;
@class SCDLatticeEntryPoint;
@class SCDLatticeExitPoint;


/*PROTECTED REGION ID(scade::lattice::navigation::SCDLatticeNavigation_pre) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/


@interface SCDLatticeNavigation : EObject         


@property (nonatomic) SCDWidgetsPage* page;

@property (nonatomic) NSArray<SCDLatticeEntryPoint*>* entryPoints;

@property (nonatomic) NSArray<SCDLatticeExitPoint*>* exitPoints;



-(void) go:(NSString*)page  ;

-(void) go:(NSString*)page transition:(NSString*)transition ;

-(void) goWith:(NSString*)page data:(id)data ;

-(void) goWith:(NSString*)page data:(id)data transition:(NSString*)transition ;

-(SCDLatticeEntryPoint*) getEntryPoint:(NSString*)name  ;

-(SCDLatticeExitPoint*) getExitPoint:(NSString*)name  ;



/*PROTECTED REGION ID(scade::lattice::navigation::SCDLatticeNavigation) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

@end
