
#import <Foundation/Foundation.h>

#import <ScadeKit/ETypedElement.h>



@class EAnnotation;
@class EClassifier;
@class EGenericType;
@class EClass;
@class EModelElement;
@class ENamedElement;
@class ETypedElement;


/*PROTECTED REGION ID(scade::emf::ecore::EStructuralFeature_pre) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/


@interface EStructuralFeature : ETypedElement         


@property (nonatomic,getter=isChangeable) BOOL changeable;

@property (nonatomic,getter=isVolatile) BOOL _volatile;

@property (nonatomic,getter=isTransient) BOOL transient;

@property (nonatomic) NSString* defaultValueLiteral;

@property (nonatomic,readonly) id defaultValue;

@property (nonatomic,getter=isUnsettable) BOOL unsettable;

@property (nonatomic,getter=isDerived) BOOL derived;

@property (nonatomic,readonly) EClass* eContainingClass;



-(NSNumber*) getFeatureID ;



/*PROTECTED REGION ID(scade::emf::ecore::EStructuralFeature) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

@end
