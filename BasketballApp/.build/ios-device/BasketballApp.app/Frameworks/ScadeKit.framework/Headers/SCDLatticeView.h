
#import <Foundation/Foundation.h>

#import <ScadeKit/EObject.h>



@class SCDGraphicsRectangle;
@class SCDLatticeSizeChangeHandler;
@class SCDWidgetsPage;


/*PROTECTED REGION ID(scade::lattice::SCDLatticeView_pre) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/


@interface SCDLatticeView : EObject         


@property (nonatomic) SCDGraphicsRectangle* viewBox;

@property (nonatomic) NSArray<SCDLatticeSizeChangeHandler*>* OnSizeChanged;



-(void) show:(SCDWidgetsPage*)page  ;

-(void) hideKeyboard ;



/*PROTECTED REGION ID(scade::lattice::SCDLatticeView) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

@end
