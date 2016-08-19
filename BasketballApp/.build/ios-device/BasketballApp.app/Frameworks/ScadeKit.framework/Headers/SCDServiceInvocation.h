
#import <Foundation/Foundation.h>

#import <ScadeKit/EObject.h>



@class SCDServiceRequest;
@class SCDServiceParamBinding;
@class SCDServiceResponse;


/*PROTECTED REGION ID(scade::data::service::SCDServiceInvocation_pre) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/


@interface SCDServiceInvocation : EObject         


@property (nonatomic) SCDServiceRequest* request;

@property (nonatomic) NSArray<SCDServiceParamBinding*>* bindings;

@property (nonatomic) SCDServiceResponse* response;

@property (nonatomic) NSString* url;





/*PROTECTED REGION ID(scade::data::service::SCDServiceInvocation) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

@end
