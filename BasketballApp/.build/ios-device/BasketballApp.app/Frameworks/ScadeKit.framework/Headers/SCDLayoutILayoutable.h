
#import <Foundation/Foundation.h>

#import <ScadeKit/EObject.h>


@protocol SCDLayoutNode;

@class SCDLayoutLayout;
@class SCDGraphicsDimension;


/*PROTECTED REGION ID(scade::ui::layout::SCDLayoutILayoutable_pre) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/


@protocol SCDLayoutILayoutable <EObject>     


@property (nonatomic) SCDLayoutLayout* layout;

@property (nonatomic) SCDGraphicsDimension* minArea;

@property (nonatomic) SCDGraphicsDimension* maxArea;



-(NSArray<id<SCDLayoutNode>>*) getWidgetsForLayout ;



/*PROTECTED REGION ID(scade::ui::layout::SCDLayoutILayoutable) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

@end
