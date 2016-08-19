
#import <Foundation/Foundation.h>

#import <ScadeKit/EObject.h>



@class SCDNetworkResponse;


/*PROTECTED REGION ID(scade::network::http::SCDNetworkAsyncCallback_pre) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/


@interface SCDNetworkAsyncCallback : EObject         

-(instancetype)initWithHandler:(void(^)(SCDNetworkResponse*))_;




-(void) invoke:(SCDNetworkResponse*)arg ;  
  

/*PROTECTED REGION ID(scade::network::http::SCDNetworkAsyncCallback) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

@end
