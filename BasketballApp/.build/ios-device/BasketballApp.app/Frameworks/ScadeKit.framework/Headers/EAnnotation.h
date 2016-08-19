
#import <Foundation/Foundation.h>

#import <ScadeKit/EModelElement.h>



@class EModelElement;
@class EObject;


/*PROTECTED REGION ID(scade::emf::ecore::EAnnotation_pre) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/


@interface EAnnotation : EModelElement         


@property (nonatomic) NSString* source;

@property (nonatomic,readonly) EModelElement* eModelElement;

@property (nonatomic) NSArray<EObject*>* contents;

@property (nonatomic) NSArray<EObject*>* references;





/*PROTECTED REGION ID(scade::emf::ecore::EAnnotation) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

@end
