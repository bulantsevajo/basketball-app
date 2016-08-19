
#import <Foundation/Foundation.h>

#import <ScadeKit/EObject.h>



@class SCDSvgTapEvent;


/*PROTECTED REGION ID(scade::svg::events::SCDSvgTapHandler_pre) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/


@interface SCDSvgTapHandler : EObject         

-(instancetype)initWithHandler:(BOOL(^)(SCDSvgTapEvent*))_;




-(BOOL) invoke:(SCDSvgTapEvent*)arg ;  
  

/*PROTECTED REGION ID(scade::svg::events::SCDSvgTapHandler) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

@end
