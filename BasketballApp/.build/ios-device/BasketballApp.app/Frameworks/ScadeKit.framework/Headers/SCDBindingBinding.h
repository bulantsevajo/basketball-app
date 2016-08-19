
#import <Foundation/Foundation.h>

#import <ScadeKit/EObject.h>



@class EObject;
@class SCDBindingBindingSyncPoint;


/*PROTECTED REGION ID(scade::data::binding::SCDBindingBinding_pre) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/


@interface SCDBindingBinding : EObject         


@property (nonatomic) EObject* src;

@property (nonatomic) EObject* dst;

@property (nonatomic) SCDBindingBindingSyncPoint* root;

@property (nonatomic,getter=isActive) BOOL active;



-(void) activate ;

-(void) deactivate ;



/*PROTECTED REGION ID(scade::data::binding::SCDBindingBinding) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

@end
