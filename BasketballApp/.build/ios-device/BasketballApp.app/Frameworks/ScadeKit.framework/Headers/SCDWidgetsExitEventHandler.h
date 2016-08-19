
#import <Foundation/Foundation.h>

#import <ScadeKit/EObject.h>



@class SCDWidgetsExitEvent;


/*PROTECTED REGION ID(scade::ui::widgets::events::SCDWidgetsExitEventHandler_pre) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/


@interface SCDWidgetsExitEventHandler : EObject         

-(instancetype)initWithHandler:(void(^)(SCDWidgetsExitEvent*))_;




-(void) invoke:(SCDWidgetsExitEvent*)arg ;  
  

/*PROTECTED REGION ID(scade::ui::widgets::events::SCDWidgetsExitEventHandler) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

@end
