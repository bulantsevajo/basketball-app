
#import <Foundation/Foundation.h>

#import <ScadeKit/ENamedElement.h>



@class EAnnotation;
@class EPackage;
@class ETypeParameter;
@class EModelElement;
@class ENamedElement;


/*PROTECTED REGION ID(scade::emf::ecore::EClassifier_pre) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/


@interface EClassifier : ENamedElement         


@property (nonatomic) NSString* instanceClassName;

@property (nonatomic,readonly) id defaultValue;

@property (nonatomic) NSString* instanceTypeName;

@property (nonatomic,readonly) EPackage* ePackage;

@property (nonatomic) NSArray<ETypeParameter*>* eTypeParameters;



-(BOOL) isInstance:(id)object  ;

-(NSNumber*) getClassifierID ;



/*PROTECTED REGION ID(scade::emf::ecore::EClassifier) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

@end
