
#import <Foundation/Foundation.h>

#import <ScadeKit/EObject.h>



@class SCDWidgetsEnterEvent;


/*PROTECTED REGION ID(scade::ui::widgets::events::SCDWidgetsEnterEventHandler_pre) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/


@interface SCDWidgetsEnterEventHandler : EObject         

-(instancetype)initWithHandler:(void(^)(SCDWidgetsEnterEvent*))_;




-(void) invoke:(SCDWidgetsEnterEvent*)arg ;  
  

/*PROTECTED REGION ID(scade::ui::widgets::events::SCDWidgetsEnterEventHandler) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

@end
