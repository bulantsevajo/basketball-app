
#import <Foundation/Foundation.h>

#import <ScadeKit/SCDWidgetsNativeWidget.h>


@protocol SCDSvgDrawable;
@protocol SCDWidgetsIStyle;
@protocol SCDWidgetsIContainer;
@protocol SCDLayoutNode;
@protocol SCDWidgetsIControl;
@protocol SCDWidgetsIVisualControl;
@protocol SCDWidgetsIStyledControl;

@class SCDLayoutLayoutData;
@class SCDGraphicsDimension;
@class SCDGraphicsPoint;
@class SCDWidgetsMapRegion;
@class SCDPlatformLocationCoordinate;
@class SCDWidgetsWidget;
@class SCDWidgetsNativeWidget;

typedef NS_ENUM(NSInteger, SCDWidgetsMapType);

/*PROTECTED REGION ID(scade::ui::widgets::native::SCDWidgetsMapWidget_pre) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/


@interface SCDWidgetsMapWidget : SCDWidgetsNativeWidget         


@property (nonatomic) SCDWidgetsMapType mapType;

@property (nonatomic) SCDWidgetsMapRegion* region;

@property (nonatomic,readonly) SCDPlatformLocationCoordinate* userLocation;

@property (nonatomic,getter=isShowUserLocation) BOOL showUserLocation;



-(void) moveToUserLocation ;



/*PROTECTED REGION ID(scade::ui::widgets::native::SCDWidgetsMapWidget) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

@end
