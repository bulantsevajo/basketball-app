
#import <Foundation/Foundation.h>

#import <ScadeKit/SCDServiceRequest.h>



@class EAnnotation;
@class EClassifier;
@class EGenericType;
@class EClass;
@class ETypeParameter;
@class EParameter;
@class EModelElement;
@class ENamedElement;
@class ETypedElement;
@class EOperation;
@class SCDServiceRequest;
@class SCDNetworkRequest;

typedef NS_ENUM(NSInteger, SCDServiceResponseType);
typedef NS_ENUM(NSInteger, SCDServiceHttpMethod);

/*PROTECTED REGION ID(scade::data::service::SCDServiceHttpRequest_pre) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/


@interface SCDServiceHttpRequest : SCDServiceRequest         


@property (nonatomic) SCDServiceHttpMethod method;

@property (nonatomic) NSString* url;

@property (nonatomic) NSNumber* timeout;



-(SCDNetworkRequest*) getRequest:(NSArray<id>*)args  ;



/*PROTECTED REGION ID(scade::data::service::SCDServiceHttpRequest) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

@end
