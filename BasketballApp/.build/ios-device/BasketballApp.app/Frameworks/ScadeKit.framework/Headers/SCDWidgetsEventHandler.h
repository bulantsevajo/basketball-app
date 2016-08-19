
#import <Foundation/Foundation.h>

#import <ScadeKit/EObject.h>



@class SCDWidgetsEvent;


/*PROTECTED REGION ID(scade::ui::widgets::events::SCDWidgetsEventHandler_pre) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/


@interface SCDWidgetsEventHandler : EObject         

-(instancetype)initWithHandler:(void(^)(SCDWidgetsEvent*))_;




-(void) invoke:(SCDWidgetsEvent*)arg ;  
  

/*PROTECTED REGION ID(scade::ui::widgets::events::SCDWidgetsEventHandler) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

@end
