
#import <Foundation/Foundation.h>

#import <ScadeKit/EObject.h>



@class SCDSvgTouchEvent;


/*PROTECTED REGION ID(scade::svg::events::gesture::SCDSvgGestureRecognizer_pre) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/


@interface SCDSvgGestureRecognizer : EObject         

-(instancetype)initWithHandler:(void(^)(SCDSvgGestureRecognizer*))_;



-(BOOL) match:(SCDSvgTouchEvent*)event  ;


-(void) invoke:(SCDSvgGestureRecognizer*)arg ;  
  

/*PROTECTED REGION ID(scade::svg::events::gesture::SCDSvgGestureRecognizer) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

@end
