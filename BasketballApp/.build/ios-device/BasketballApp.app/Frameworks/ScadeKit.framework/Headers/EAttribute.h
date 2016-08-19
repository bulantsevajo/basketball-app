
#import <Foundation/Foundation.h>

#import <ScadeKit/EStructuralFeature.h>



@class EAnnotation;
@class EClassifier;
@class EGenericType;
@class EClass;
@class EDataType;
@class EModelElement;
@class ENamedElement;
@class ETypedElement;
@class EStructuralFeature;


/*PROTECTED REGION ID(scade::emf::ecore::EAttribute_pre) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/


@interface EAttribute : EStructuralFeature         


@property (nonatomic,getter=isID) BOOL iD;

@property (nonatomic,readonly) EDataType* eAttributeType;





/*PROTECTED REGION ID(scade::emf::ecore::EAttribute) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

@end
