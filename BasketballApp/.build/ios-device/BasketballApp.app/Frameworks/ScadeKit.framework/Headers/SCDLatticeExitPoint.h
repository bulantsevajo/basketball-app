
#import <Foundation/Foundation.h>

#import <ScadeKit/SCDLatticePoint.h>



@class SCDLatticeChanel;
@class SCDLatticePoint;


/*PROTECTED REGION ID(scade::lattice::navigation::SCDLatticeExitPoint_pre) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/


@interface SCDLatticeExitPoint : SCDLatticePoint         


@property (nonatomic) SCDLatticeChanel* outcoming;



-(void) go NS_SWIFT_NAME(go());

-(void) goWithData:(id)data  NS_SWIFT_NAME(go(data:));



/*PROTECTED REGION ID(scade::lattice::navigation::SCDLatticeExitPoint) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

@end
