
#import <Foundation/Foundation.h>

#import <ScadeKit/EObject.h>



@class SCDWidgetsSlideLineEvent;


/*PROTECTED REGION ID(scade::ui::widgets::events::SCDWidgetsSlideLineEventHandler_pre) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/


@interface SCDWidgetsSlideLineEventHandler : EObject         

-(instancetype)initWithHandler:(void(^)(SCDWidgetsSlideLineEvent*))_;




-(void) invoke:(SCDWidgetsSlideLineEvent*)arg ;  
  

/*PROTECTED REGION ID(scade::ui::widgets::events::SCDWidgetsSlideLineEventHandler) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

@end
