
#import <Foundation/Foundation.h>

#import <ScadeKit/EObject.h>



@class SCDWidgetsSlideEvent;


/*PROTECTED REGION ID(scade::ui::widgets::events::SCDWidgetsSlideEventHandler_pre) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/


@interface SCDWidgetsSlideEventHandler : EObject         

-(instancetype)initWithHandler:(void(^)(SCDWidgetsSlideEvent*))_;




-(void) invoke:(SCDWidgetsSlideEvent*)arg ;  
  

/*PROTECTED REGION ID(scade::ui::widgets::events::SCDWidgetsSlideEventHandler) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

@end
