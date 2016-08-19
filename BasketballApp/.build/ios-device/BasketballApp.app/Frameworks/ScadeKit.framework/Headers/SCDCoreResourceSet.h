
#import <Foundation/Foundation.h>

#import <ScadeKit/EObject.h>



@class SCDCoreResource;
@class EObject;


/*PROTECTED REGION ID(scade::emf::core::resources::SCDCoreResourceSet_pre) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/


@interface SCDCoreResourceSet : EObject         


@property (nonatomic) NSArray<SCDCoreResource*>* resouces;



-(EObject*) getEObject:(NSString*)name  ;

-(SCDCoreResource*) loadResource:(NSString*)name  ;

-(SCDCoreResource*) createResource:(NSString*)name  ;



/*PROTECTED REGION ID(scade::emf::core::resources::SCDCoreResourceSet) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

@end
