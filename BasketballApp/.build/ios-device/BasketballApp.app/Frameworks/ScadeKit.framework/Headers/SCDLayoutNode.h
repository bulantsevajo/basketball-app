
#import <Foundation/Foundation.h>

#import <ScadeKit/EObject.h>



@class SCDLayoutLayoutData;
@class SCDGraphicsDimension;
@class SCDGraphicsPoint;


/*PROTECTED REGION ID(scade::ui::layout::SCDLayoutNode_pre) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/


@protocol SCDLayoutNode <EObject>     


@property (nonatomic) SCDLayoutLayoutData* layoutData;

@property (nonatomic) SCDGraphicsDimension* size;

@property (nonatomic) SCDGraphicsPoint* location;





/*PROTECTED REGION ID(scade::ui::layout::SCDLayoutNode) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

@end
