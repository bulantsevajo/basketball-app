
#import <Foundation/Foundation.h>

#import <ScadeKit/EDataType.h>



@class EAnnotation;
@class EPackage;
@class ETypeParameter;
@class EEnumLiteral;
@class EModelElement;
@class ENamedElement;
@class EClassifier;
@class EDataType;


/*PROTECTED REGION ID(scade::emf::ecore::EEnum_pre) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/


@interface EEnum : EDataType         


@property (nonatomic) NSArray<EEnumLiteral*>* eLiterals;



-(EEnumLiteral*) getEEnumLiteralWithName:(NSString*)name  NS_SWIFT_NAME(getEEnumLiteral(name:));

-(EEnumLiteral*) getEEnumLiteralWithValue:(NSNumber*)value  NS_SWIFT_NAME(getEEnumLiteral(value:));

-(EEnumLiteral*) getEEnumLiteralByLiteral:(NSString*)literal  ;



/*PROTECTED REGION ID(scade::emf::ecore::EEnum) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

@end
