
#import <Foundation/Foundation.h>

#import <ScadeKit/EStructuralFeature.h>



@class EAnnotation;
@class EClassifier;
@class EGenericType;
@class EClass;
@class EAttribute;
@class EModelElement;
@class ENamedElement;
@class ETypedElement;
@class EStructuralFeature;


/*PROTECTED REGION ID(scade::emf::ecore::EReference_pre) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/


@interface EReference : EStructuralFeature         


@property (nonatomic,getter=isContainment) BOOL containment;

@property (nonatomic,readonly,getter=isContainer) BOOL container;

@property (nonatomic,getter=isResolveProxies) BOOL resolveProxies;

@property (nonatomic) EReference* eOpposite;

@property (nonatomic,readonly) EClass* eReferenceType;

@property (nonatomic) NSArray<EAttribute*>* eKeys;





/*PROTECTED REGION ID(scade::emf::ecore::EReference) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

@end
