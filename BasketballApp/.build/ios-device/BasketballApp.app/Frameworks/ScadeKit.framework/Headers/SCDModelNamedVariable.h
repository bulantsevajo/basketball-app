
#import <Foundation/Foundation.h>

#import <ScadeKit/EObject.h>



@class SCDModelDataSource;


/*PROTECTED REGION ID(scade::data::model::SCDModelNamedVariable_pre) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/


@interface SCDModelNamedVariable : EObject         


@property (nonatomic) NSString* name;

@property (nonatomic) id value;

@property (nonatomic) SCDModelDataSource* source;



-(BOOL) hasCorrectTypes ;



/*PROTECTED REGION ID(scade::data::model::SCDModelNamedVariable) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

@end
