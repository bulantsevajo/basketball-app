
#import <Foundation/Foundation.h>

#import <ScadeKit/EModelElement.h>



@class EAnnotation;
@class EPackage;
@class EModelElement;
@class EObject;
@class EClass;
@class EDataType;


/*PROTECTED REGION ID(scade::emf::ecore::EFactory_pre) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/


@interface EFactory : EModelElement         


@property (nonatomic) EPackage* ePackage;



-(EObject*) createWithEClass:(EClass*)eClass  NS_SWIFT_NAME(create(eClass:));

-(EObject*) createWithEClassName:(NSString*)eClassName  NS_SWIFT_NAME(create(eClassName:));

-(id) createFromString:(EDataType*)eDataType literalValue:(NSString*)literalValue ;

-(NSString*) convertToString:(EDataType*)eDataType instanceValue:(id)instanceValue ;



/*PROTECTED REGION ID(scade::emf::ecore::EFactory) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

@end
