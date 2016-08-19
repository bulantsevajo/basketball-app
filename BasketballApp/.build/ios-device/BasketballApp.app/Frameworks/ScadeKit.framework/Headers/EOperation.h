
#import <Foundation/Foundation.h>

#import <ScadeKit/ETypedElement.h>



@class EAnnotation;
@class EClassifier;
@class EGenericType;
@class EClass;
@class ETypeParameter;
@class EParameter;
@class EModelElement;
@class ENamedElement;
@class ETypedElement;


/*PROTECTED REGION ID(scade::emf::ecore::EOperation_pre) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/


@interface EOperation : ETypedElement         


@property (nonatomic,readonly) EClass* eContainingClass;

@property (nonatomic) NSArray<ETypeParameter*>* eTypeParameters;

@property (nonatomic) NSArray<EParameter*>* eParameters;

@property (nonatomic) NSArray<EClassifier*>* eExceptions;

@property (nonatomic) NSArray<EGenericType*>* eGenericExceptions;



-(NSNumber*) getOperationID ;

-(BOOL) isOverrideOf:(EOperation*)someOperation  ;



/*PROTECTED REGION ID(scade::emf::ecore::EOperation) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

@end
