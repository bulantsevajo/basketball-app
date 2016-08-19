
#import <Foundation/Foundation.h>

#import <ScadeKit/EObject.h>



@class EClassifier;
@class ETypeParameter;


/*PROTECTED REGION ID(scade::emf::ecore::EGenericType_pre) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/


@interface EGenericType : EObject         


@property (nonatomic) EGenericType* eUpperBound;

@property (nonatomic) NSArray<EGenericType*>* eTypeArguments;

@property (nonatomic,readonly) EClassifier* eRawType;

@property (nonatomic) EGenericType* eLowerBound;

@property (nonatomic) ETypeParameter* eTypeParameter;

@property (nonatomic) EClassifier* eClassifier;





/*PROTECTED REGION ID(scade::emf::ecore::EGenericType) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

@end
