
#import <Foundation/Foundation.h>

#import <ScadeKit/SCDServiceAuth.h>


@protocol SCDServiceAuth;

@class SCDServiceOAuthFlow;
@class SCDServiceOAuthCredential;
@class SCDServiceOAuthToken;


/*PROTECTED REGION ID(scade::data::service::SCDServiceOAuth_pre) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/


@interface SCDServiceOAuth : EObject <SCDServiceAuth>           


@property (nonatomic) SCDServiceOAuthFlow* flow;

@property (nonatomic) SCDServiceOAuthCredential* credential;

@property (nonatomic) SCDServiceOAuthToken* token;





/*PROTECTED REGION ID(scade::data::service::SCDServiceOAuth) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

@end
