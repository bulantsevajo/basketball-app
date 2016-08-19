
#import <Foundation/Foundation.h>

#import <ScadeKit/EObject.h>



@class SCDWidgetsPage;
@class SCDLatticeView;
@class SCDLatticeNavigation;


/*PROTECTED REGION ID(scade::lattice::SCDLatticePageAdapter_pre) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/


@interface SCDLatticePageAdapter : EObject         


@property (nonatomic,readonly) SCDWidgetsPage* page;

@property (nonatomic,readonly) SCDLatticeView* view;

@property (nonatomic,readonly) SCDLatticeNavigation* navigation;



-(void) load:(NSString*)path  ;

-(void) activate:(SCDLatticeView*)view  ;

-(void) show:(SCDLatticeView*)view  ;

-(void) show:(SCDLatticeView*)view data:(id)data ;



/*PROTECTED REGION ID(scade::lattice::SCDLatticePageAdapter) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

@end
