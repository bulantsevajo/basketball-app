
#import <Foundation/Foundation.h>

#import <ScadeKit/EObject.h>



@class SCDWidgetsTextChangeEvent;


/*PROTECTED REGION ID(scade::ui::widgets::events::SCDWidgetsTextChangeEventHandler_pre) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/


@interface SCDWidgetsTextChangeEventHandler : EObject         

-(instancetype)initWithHandler:(void(^)(SCDWidgetsTextChangeEvent*))_;




-(void) invoke:(SCDWidgetsTextChangeEvent*)arg ;  
  

/*PROTECTED REGION ID(scade::ui::widgets::events::SCDWidgetsTextChangeEventHandler) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

@end
