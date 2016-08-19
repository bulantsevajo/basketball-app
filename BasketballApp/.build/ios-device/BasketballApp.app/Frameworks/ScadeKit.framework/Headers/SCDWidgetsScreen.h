
#import <Foundation/Foundation.h>

#import <ScadeKit/EObject.h>



@class SCDGraphicsDimension;
@class SCDGraphicsPoint;

typedef NS_ENUM(NSInteger, SCDWidgetsScreenOrientation);
typedef NS_ENUM(NSInteger, SCDWidgetsScreenState);

/*PROTECTED REGION ID(scade::ui::widgets::style::SCDWidgetsScreen_pre) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/


@interface SCDWidgetsScreen : EObject         


@property (nonatomic) NSString* device;

@property (nonatomic) SCDGraphicsDimension* size;

@property (nonatomic) NSString* svg;

@property (nonatomic) SCDGraphicsPoint* location;

@property (nonatomic) SCDGraphicsPoint* landscapeLocation;

@property (nonatomic) SCDWidgetsScreenOrientation orientation;

@property (nonatomic) SCDWidgetsScreenState state;





/*PROTECTED REGION ID(scade::ui::widgets::style::SCDWidgetsScreen) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

@end
