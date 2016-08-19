
#import <Foundation/Foundation.h>

#import <ScadeKit/SCDLayoutLayoutData.h>



@class SCDLayoutLayoutData;

typedef NS_ENUM(NSInteger, SCDLayoutHorizontalAlignment);
typedef NS_ENUM(NSInteger, SCDLayoutVerticalAlignment);
typedef NS_ENUM(NSInteger, SCDLayoutLayoutSizeConstraint);

/*PROTECTED REGION ID(scade::ui::layout::SCDLayoutGridData_pre) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/


@interface SCDLayoutGridData : SCDLayoutLayoutData         


@property (nonatomic) NSNumber* column;

@property (nonatomic) NSNumber* row;

@property (nonatomic) SCDLayoutHorizontalAlignment horizontalAlignment;

@property (nonatomic) SCDLayoutVerticalAlignment verticalAlignment;

@property (nonatomic,getter=isGrabHorizontalSpace) BOOL grabHorizontalSpace;

@property (nonatomic,getter=isGrabVerticalSpace) BOOL grabVerticalSpace;

@property (nonatomic) SCDLayoutLayoutSizeConstraint widthConstraint;

@property (nonatomic) SCDLayoutLayoutSizeConstraint heightConstraint;

@property (nonatomic) NSNumber* horizontalIndent;

@property (nonatomic) NSNumber* verticalIndent;

@property (nonatomic) NSNumber* horizontalSpan;

@property (nonatomic) NSNumber* verticalSpan;

@property (nonatomic,getter=isExclude) BOOL exclude;





/*PROTECTED REGION ID(scade::ui::layout::SCDLayoutGridData) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

@end
