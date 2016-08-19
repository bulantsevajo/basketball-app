
#import <Foundation/Foundation.h>

#import <ScadeKit/ENamedElement.h>



@class EAnnotation;
@class EClassifier;
@class EGenericType;
@class EModelElement;
@class ENamedElement;


/*PROTECTED REGION ID(scade::emf::ecore::ETypedElement_pre) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/


@interface ETypedElement : ENamedElement         


@property (nonatomic,getter=isOrdered) BOOL ordered;

@property (nonatomic,getter=isUnique) BOOL unique;

@property (nonatomic) NSNumber* lowerBound;

@property (nonatomic) NSNumber* upperBound;

@property (nonatomic,readonly,getter=isMany) BOOL many;

@property (nonatomic,readonly,getter=isRequired) BOOL required;

@property (nonatomic) EClassifier* eType;

@property (nonatomic) EGenericType* eGenericType;





/*PROTECTED REGION ID(scade::emf::ecore::ETypedElement) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

@end
