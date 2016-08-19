
#import <Foundation/Foundation.h>

#import <ScadeKit/EObject.h>



@class SCDModelNamedVariable;


/*PROTECTED REGION ID(scade::data::model::SCDModelDataModel_pre) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/


@interface SCDModelDataModel : EObject         


@property (nonatomic) NSArray<SCDModelNamedVariable*>* variables;

@property (nonatomic) NSString* name;



-(SCDModelNamedVariable*) getVariable:(NSString*)name  ;



/*PROTECTED REGION ID(scade::data::model::SCDModelDataModel) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

@end
