
#import <Foundation/Foundation.h>

#import <ScadeKit/EClass.h>


@protocol SCDServiceAuth;

@class EAnnotation;
@class EPackage;
@class ETypeParameter;
@class EClass;
@class EOperation;
@class EAttribute;
@class EReference;
@class EStructuralFeature;
@class EGenericType;
@class SCDServiceInvocation;
@class EObject;
@class EModelElement;
@class ENamedElement;
@class EClassifier;


/*PROTECTED REGION ID(scade::data::service::SCDServiceService_pre) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/


@interface SCDServiceService : EClass         


@property (nonatomic) id<SCDServiceAuth> auth;

@property (nonatomic) NSArray<SCDServiceInvocation*>* invocations;

@property (nonatomic) NSArray<EObject*>* contents;





/*PROTECTED REGION ID(scade::data::service::SCDServiceService) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

@end
