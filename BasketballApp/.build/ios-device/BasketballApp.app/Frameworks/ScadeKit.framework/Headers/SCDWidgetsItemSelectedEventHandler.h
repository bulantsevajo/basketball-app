
#import <Foundation/Foundation.h>

#import <ScadeKit/EObject.h>



@class SCDWidgetsItemSelectedEvent;


/*PROTECTED REGION ID(scade::ui::widgets::events::SCDWidgetsItemSelectedEventHandler_pre) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/


@interface SCDWidgetsItemSelectedEventHandler : EObject         

-(instancetype)initWithHandler:(void(^)(SCDWidgetsItemSelectedEvent*))_;




-(void) invoke:(SCDWidgetsItemSelectedEvent*)arg ;  
  

/*PROTECTED REGION ID(scade::ui::widgets::events::SCDWidgetsItemSelectedEventHandler) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

@end
