#import <Foundation/Foundation.h>


typedef NS_ENUM(NSInteger, SCDServiceResponseType) {
SCDServiceResponseTypeAuto, SCDServiceResponseTypeJson, SCDServiceResponseTypeText};
typedef NS_ENUM(NSInteger, SCDServiceHttpMethod) {
SCDServiceHttpMethodGet, SCDServiceHttpMethodPost, SCDServiceHttpMethodPut, SCDServiceHttpMethodDelete};


#import <ScadeKit/SCDServiceService.h>

#import <ScadeKit/SCDServiceRequest.h>

#import <ScadeKit/SCDServiceHttpRequest.h>

#import <ScadeKit/SCDServiceParam.h>

#import <ScadeKit/SCDServiceUrlParam.h>

#import <ScadeKit/SCDServiceContentParam.h>

#import <ScadeKit/SCDServiceHeaderParam.h>

#import <ScadeKit/SCDServiceInvocation.h>

#import <ScadeKit/SCDServiceResponse.h>

#import <ScadeKit/SCDServiceParamBinding.h>

#import <ScadeKit/SCDServiceAuth.h>

#import <ScadeKit/SCDServiceNoAuth.h>

#import <ScadeKit/SCDServiceHttpBasicAuth.h>

#import <ScadeKit/SCDServiceHttpCredential.h>

#import <ScadeKit/SCDServiceOAuth.h>

#import <ScadeKit/SCDServiceOAuthFlow.h>

#import <ScadeKit/SCDServiceOAuth1Flow.h>

#import <ScadeKit/SCDServiceOAuth2Flow.h>

#import <ScadeKit/SCDServiceOAuthCredential.h>

#import <ScadeKit/SCDServiceOAuthToken.h>

