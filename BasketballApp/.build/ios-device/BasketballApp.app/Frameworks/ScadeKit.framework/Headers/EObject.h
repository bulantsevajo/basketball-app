
#import <Foundation/Foundation.h>




@class EClass;
@class EStructuralFeature;
@class EReference;
@class EOperation;


/*PROTECTED REGION ID(scade::emf::ecore::EObject_pre) ENABLED START*/

@class SCDNotificationAdapter;

/*PROTECTED REGION END*/

@protocol EObject <NSObject>

@end

@interface EObject : NSObject <EObject>




-(EClass*) eClass ;

-(BOOL) eIsProxy ;

-(EObject*) eContainer ;

-(EStructuralFeature*) eContainingFeature ;

-(EReference*) eContainmentFeature ;

-(NSArray<EObject*>*) eContents ;

-(NSArray<EObject*>*) eCrossReferences ;

-(id) eGetWithFeature:(EStructuralFeature*)feature  NS_SWIFT_NAME(eGet(feature:));

-(id) eGetWithFeatureName:(NSString*)featureName  NS_SWIFT_NAME(eGet(featureName:));

-(id) eGet:(EStructuralFeature*)feature resolve:(BOOL)resolve ;

-(void) eSetWithFeature:(EStructuralFeature*)feature newValue:(id)newValue NS_SWIFT_NAME(eSet(feature:newValue:));

-(void) eSetWithFeatureName:(NSString*)featureName newValue:(id)newValue NS_SWIFT_NAME(eSet(featureName:newValue:));

-(BOOL) eIsSet:(EStructuralFeature*)feature  ;

-(void) eUnset:(EStructuralFeature*)feature  ;

-(id) eInvokeWithOperation:(EOperation*)operation arguments:(NSArray<id>*)arguments NS_SWIFT_NAME(eInvoke(operation:arguments:));

-(id) eInvokeWithOperationName:(NSString*)operationName arguments:(NSArray<id>*)arguments NS_SWIFT_NAME(eInvoke(operationName:arguments:));



/*PROTECTED REGION ID(scade::emf::ecore::EObject) ENABLED START*/

//TODO: fix this
//@property (nonatomic) NSArray<SCDNotificationAdapter*>* eAdapters;

/*PROTECTED REGION END*/

@end
