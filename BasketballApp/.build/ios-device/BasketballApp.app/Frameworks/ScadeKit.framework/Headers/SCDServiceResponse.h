
#import <Foundation/Foundation.h>

#import <ScadeKit/EObject.h>




typedef NS_ENUM(NSInteger, SCDServiceResponseType);

/*PROTECTED REGION ID(scade::data::service::SCDServiceResponse_pre) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/


@interface SCDServiceResponse : EObject         


@property (nonatomic) SCDServiceResponseType type;

@property (nonatomic) NSString* content;





/*PROTECTED REGION ID(scade::data::service::SCDServiceResponse) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

@end
