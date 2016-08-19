
#import <Foundation/Foundation.h>

#import <ScadeKit/ENamedElement.h>



@class EAnnotation;
@class EEnum;
@class EModelElement;
@class ENamedElement;


/*PROTECTED REGION ID(scade::emf::ecore::EEnumLiteral_pre) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/


@interface EEnumLiteral : ENamedElement         


@property (nonatomic) NSNumber* value;

@property (nonatomic) NSString* literal;

@property (nonatomic,readonly) EEnum* eEnum;





/*PROTECTED REGION ID(scade::emf::ecore::EEnumLiteral) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

@end
