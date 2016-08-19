
#import <Foundation/Foundation.h>

#import <ScadeKit/SCDLatticePoint.h>



@class SCDLatticeChanel;
@class SCDLatticePoint;


/*PROTECTED REGION ID(scade::lattice::navigation::SCDLatticeEntryPoint_pre) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/


@interface SCDLatticeEntryPoint : SCDLatticePoint         


@property (nonatomic) SCDLatticeChanel* incoming;



-(void) back NS_SWIFT_NAME(back());

-(void) backWithData:(id)data  NS_SWIFT_NAME(back(data:));



/*PROTECTED REGION ID(scade::lattice::navigation::SCDLatticeEntryPoint) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

@end
