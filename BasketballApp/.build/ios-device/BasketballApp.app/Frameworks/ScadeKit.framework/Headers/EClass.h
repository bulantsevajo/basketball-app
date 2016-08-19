
#import <Foundation/Foundation.h>

#import <ScadeKit/EClassifier.h>



@class EAnnotation;
@class EPackage;
@class ETypeParameter;
@class EOperation;
@class EAttribute;
@class EReference;
@class EStructuralFeature;
@class EGenericType;
@class EModelElement;
@class ENamedElement;
@class EClassifier;


/*PROTECTED REGION ID(scade::emf::ecore::EClass_pre) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/


@interface EClass : EClassifier         


@property (nonatomic,getter=isAbstract) BOOL abstract;

@property (nonatomic,getter=isInterface) BOOL _interface;

@property (nonatomic) NSArray<EClass*>* eSuperTypes;

@property (nonatomic) NSArray<EOperation*>* eOperations;

@property (nonatomic,readonly) NSArray<EAttribute*>* eAllAttributes;

@property (nonatomic,readonly) NSArray<EReference*>* eAllReferences;

@property (nonatomic,readonly) NSArray<EReference*>* eReferences;

@property (nonatomic,readonly) NSArray<EAttribute*>* eAttributes;

@property (nonatomic,readonly) NSArray<EReference*>* eAllContainments;

@property (nonatomic,readonly) NSArray<EOperation*>* eAllOperations;

@property (nonatomic,readonly) NSArray<EStructuralFeature*>* eAllStructuralFeatures;

@property (nonatomic,readonly) NSArray<EClass*>* eAllSuperTypes;

@property (nonatomic,readonly) EAttribute* eIDAttribute;

@property (nonatomic) NSArray<EStructuralFeature*>* eStructuralFeatures;

@property (nonatomic) NSArray<EGenericType*>* eGenericSuperTypes;

@property (nonatomic,readonly) NSArray<EGenericType*>* eAllGenericSuperTypes;



-(BOOL) isSuperTypeOf:(EClass*)someClass  ;

-(NSNumber*) getFeatureID:(EStructuralFeature*)feature  ;

-(EStructuralFeature*) getEStructuralFeatureWithFeatureID:(NSNumber*)featureID  NS_SWIFT_NAME(getEStructuralFeature(featureID:));

-(EStructuralFeature*) getEStructuralFeatureWithFeatureName:(NSString*)featureName  NS_SWIFT_NAME(getEStructuralFeature(featureName:));

-(NSNumber*) getFeatureCount ;

-(NSNumber*) getOperationID:(EOperation*)operation  ;

-(EOperation*) getEOperationWithOperationID:(NSNumber*)operationID  NS_SWIFT_NAME(getEOperation(operationID:));

-(EOperation*) getEOperationWithOperationName:(NSString*)operationName  NS_SWIFT_NAME(getEOperation(operationName:));

-(NSNumber*) getOperationCount ;

-(EOperation*) getOverride:(EOperation*)operation  ;



/*PROTECTED REGION ID(scade::emf::ecore::EClass) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

@end
