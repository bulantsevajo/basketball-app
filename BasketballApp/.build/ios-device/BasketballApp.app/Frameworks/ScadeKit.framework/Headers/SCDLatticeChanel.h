
#import <Foundation/Foundation.h>

#import <ScadeKit/EObject.h>



@class SCDLatticeExitPoint;
@class SCDLatticeEntryPoint;


/*PROTECTED REGION ID(scade::lattice::navigation::SCDLatticeChanel_pre) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/


@interface SCDLatticeChanel : EObject         


@property (nonatomic) SCDLatticeExitPoint* src;

@property (nonatomic) SCDLatticeEntryPoint* dst;

@property (nonatomic) NSString* name;





/*PROTECTED REGION ID(scade::lattice::navigation::SCDLatticeChanel) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

@end
