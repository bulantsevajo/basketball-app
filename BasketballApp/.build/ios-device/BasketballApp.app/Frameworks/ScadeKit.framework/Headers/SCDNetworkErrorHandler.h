
#import <Foundation/Foundation.h>

#import <ScadeKit/EObject.h>



@class SCDNetworkResponseError;


/*PROTECTED REGION ID(scade::network::http::SCDNetworkErrorHandler_pre) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/


@interface SCDNetworkErrorHandler : EObject         

-(instancetype)initWithHandler:(void(^)(SCDNetworkResponseError*))_;




-(void) invoke:(SCDNetworkResponseError*)arg ;  
  

/*PROTECTED REGION ID(scade::network::http::SCDNetworkErrorHandler) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

@end
