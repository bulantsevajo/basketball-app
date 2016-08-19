
#import <Foundation/Foundation.h>

#import <ScadeKit/ENamedElement.h>



@class EAnnotation;
@class EFactory;
@class EClassifier;
@class EModelElement;
@class ENamedElement;


/*PROTECTED REGION ID(scade::emf::ecore::EPackage_pre) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/


@interface EPackage : ENamedElement         


@property (nonatomic) NSString* nsURI;

@property (nonatomic) NSString* nsPrefix;

@property (nonatomic) EFactory* eFactoryInstance;

@property (nonatomic) NSArray<EClassifier*>* eClassifiers;

@property (nonatomic) NSArray<EPackage*>* eSubpackages;

@property (nonatomic,readonly) EPackage* eSuperPackage;



-(EClassifier*) getEClassifier:(NSString*)name  ;



/*PROTECTED REGION ID(scade::emf::ecore::EPackage) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

@end
