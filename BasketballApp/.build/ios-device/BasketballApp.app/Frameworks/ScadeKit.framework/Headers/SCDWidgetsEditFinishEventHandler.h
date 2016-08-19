
#import <Foundation/Foundation.h>

#import <ScadeKit/EObject.h>



@class SCDWidgetsEditFinishEvent;


/*PROTECTED REGION ID(scade::ui::widgets::events::SCDWidgetsEditFinishEventHandler_pre) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/


@interface SCDWidgetsEditFinishEventHandler : EObject         

-(instancetype)initWithHandler:(void(^)(SCDWidgetsEditFinishEvent*))_;




-(void) invoke:(SCDWidgetsEditFinishEvent*)arg ;  
  

/*PROTECTED REGION ID(scade::ui::widgets::events::SCDWidgetsEditFinishEventHandler) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

@end
