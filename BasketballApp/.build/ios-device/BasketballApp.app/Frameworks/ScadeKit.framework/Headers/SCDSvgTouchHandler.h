
#import <Foundation/Foundation.h>

#import <ScadeKit/EObject.h>



@class SCDSvgTouchEvent;


/*PROTECTED REGION ID(scade::svg::events::SCDSvgTouchHandler_pre) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/


@interface SCDSvgTouchHandler : EObject         

-(instancetype)initWithHandler:(BOOL(^)(SCDSvgTouchEvent*))_;




-(BOOL) invoke:(SCDSvgTouchEvent*)arg ;  
  

/*PROTECTED REGION ID(scade::svg::events::SCDSvgTouchHandler) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

@end
