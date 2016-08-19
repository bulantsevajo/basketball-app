
#import <Foundation/Foundation.h>

#import <ScadeKit/SCDLayoutLayout.h>


@protocol SCDLayoutILayoutable;

@class SCDLayoutLayout;


/*PROTECTED REGION ID(scade::ui::layout::SCDLayoutGridLayout_pre) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/


@interface SCDLayoutGridLayout : SCDLayoutLayout         


@property (nonatomic) NSNumber* columns;

@property (nonatomic) NSNumber* rows;

@property (nonatomic) NSNumber* verticalSpacing;

@property (nonatomic) NSNumber* horizontalSpacing;

@property (nonatomic) NSNumber* marginTop;

@property (nonatomic) NSNumber* marginBottom;

@property (nonatomic) NSNumber* marginLeft;

@property (nonatomic) NSNumber* marginRight;





/*PROTECTED REGION ID(scade::ui::layout::SCDLayoutGridLayout) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

@end
