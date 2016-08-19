
#import <Foundation/Foundation.h>

#import <ScadeKit/EObject.h>



@class EObject;


/*PROTECTED REGION ID(scade::emf::core::resources::SCDCoreResource_pre) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/


@interface SCDCoreResource : EObject         


@property (nonatomic) NSArray<EObject*>* contents;



-(EObject*) getEObject:(NSString*)name  ;

-(NSString*) getURI ;



/*PROTECTED REGION ID(scade::emf::core::resources::SCDCoreResource) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

@end
