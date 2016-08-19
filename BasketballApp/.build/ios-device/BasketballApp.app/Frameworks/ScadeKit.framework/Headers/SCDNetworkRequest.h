
#import <Foundation/Foundation.h>

#import <ScadeKit/EObject.h>



@class SCDNetworkContentPart;
@class SCDNetworkAuth;
@class SCDNetworkErrorHandler;
@class SCDNetworkResponse;
@class SCDNetworkAsyncCallback;

typedef NS_ENUM(NSInteger, SCDNetworkMethod);

/*PROTECTED REGION ID(scade::network::http::SCDNetworkRequest_pre) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/


@interface SCDNetworkRequest : EObject         


@property (nonatomic) SCDNetworkMethod method;

@property (nonatomic) NSString* url;

@property (nonatomic) NSDictionary<NSString*,NSString*>* params;

@property (nonatomic) NSDictionary<NSString*,NSString*>* headers;

@property (nonatomic) NSArray<SCDNetworkContentPart*>* contents;

@property (nonatomic) SCDNetworkAuth* auth;

@property (nonatomic) SCDNetworkErrorHandler* OnError;

@property (nonatomic) NSNumber* timeout;



-(void) addContent:(NSString*)content type:(NSString*)type ;

-(void) addJsonContent:(NSString*)content  ;

-(void) addXmlContent:(NSString*)content  ;

-(void) addTextContent:(NSString*)content  ;

-(void) addFormContent:(NSString*)content  ;

-(SCDNetworkResponse*) call ;

-(void) asyncCall:(SCDNetworkAsyncCallback*)callback  ;

-(void) addHeader:(NSString*)name value:(NSString*)value ;

-(void) removeHeader:(NSString*)name  ;



/*PROTECTED REGION ID(scade::network::http::SCDNetworkRequest) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

@end
