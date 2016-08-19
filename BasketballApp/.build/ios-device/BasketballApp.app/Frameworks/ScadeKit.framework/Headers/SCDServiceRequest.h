
#import <Foundation/Foundation.h>

#import <ScadeKit/EOperation.h>



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

typedef NS_ENUM(NSInteger, SCDServiceResponseType);

/*PROTECTED REGION ID(scade::data::service::SCDServiceRequest_pre) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/


@interface SCDServiceRequest : EOperation         


@property (nonatomic) SCDServiceResponseType responseType;





/*PROTECTED REGION ID(scade::data::service::SCDServiceRequest) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

@end
