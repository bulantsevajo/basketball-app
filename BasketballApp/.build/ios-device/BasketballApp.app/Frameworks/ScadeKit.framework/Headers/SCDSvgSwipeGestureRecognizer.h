
#import <Foundation/Foundation.h>

#import <ScadeKit/SCDSvgGestureRecognizer.h>



@class SCDSvgGestureRecognizer;
@class SCDSvgTouchEvent;

typedef NS_ENUM(NSInteger, SCDSvgHDirection);
typedef NS_ENUM(NSInteger, SCDSvgVDirection);

/*PROTECTED REGION ID(scade::svg::events::gesture::SCDSvgSwipeGestureRecognizer_pre) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/


@interface SCDSvgSwipeGestureRecognizer : SCDSvgGestureRecognizer         


@property (nonatomic) SCDSvgHDirection hDirection;

@property (nonatomic) SCDSvgVDirection vDirection;

@property (nonatomic) SCDSvgHDirection matchedHDirection;

@property (nonatomic) SCDSvgVDirection matchedVDirection;





/*PROTECTED REGION ID(scade::svg::events::gesture::SCDSvgSwipeGestureRecognizer) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

@end
