
#import <Foundation/Foundation.h>

#import <ScadeKit/EObject.h>



@class SCDLatticeSizeChangedEvent;


/*PROTECTED REGION ID(scade::lattice::SCDLatticeSizeChangeHandler_pre) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/


@interface SCDLatticeSizeChangeHandler : EObject         

-(instancetype)initWithHandler:(void(^)(SCDLatticeSizeChangedEvent*))_;




-(void) invoke:(SCDLatticeSizeChangedEvent*)arg ;  
  

/*PROTECTED REGION ID(scade::lattice::SCDLatticeSizeChangeHandler) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

@end
