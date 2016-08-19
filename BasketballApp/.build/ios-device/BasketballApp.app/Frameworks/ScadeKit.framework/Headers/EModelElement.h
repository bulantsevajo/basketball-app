
#import <Foundation/Foundation.h>

#import <ScadeKit/EObject.h>



@class EAnnotation;


/*PROTECTED REGION ID(scade::emf::ecore::EModelElement_pre) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/


@interface EModelElement : EObject         


@property (nonatomic) NSArray<EAnnotation*>* eAnnotations;



-(EAnnotation*) getEAnnotation:(NSString*)source  ;



/*PROTECTED REGION ID(scade::emf::ecore::EModelElement) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

@end
