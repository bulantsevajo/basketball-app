
#import <Foundation/Foundation.h>

#import <ScadeKit/EObject.h>



@class SCDPlatformCameraPopoverOptions;


/*PROTECTED REGION ID(scade::platform::camera::SCDPlatformCameraOptions_pre) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/


@interface SCDPlatformCameraOptions : EObject         


@property (nonatomic) NSString* destinationType;

@property (nonatomic) NSString* sourceType;

@property (nonatomic,getter=isAllowEdit) BOOL allowEdit;

@property (nonatomic) NSString* encodingType;

@property (nonatomic) NSNumber* targetWidth;

@property (nonatomic) NSNumber* targetHeight;

@property (nonatomic) NSString* mediaType;

@property (nonatomic,getter=isCorrectOrientation) BOOL correctOrientation;

@property (nonatomic,getter=isSavePhotoToAlbum) BOOL savePhotoToAlbum;

@property (nonatomic) NSString* cameraDirection;

@property (nonatomic) NSNumber* quality;

@property (nonatomic) SCDPlatformCameraPopoverOptions* cameraPopoverOptions;





/*PROTECTED REGION ID(scade::platform::camera::SCDPlatformCameraOptions) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

@end
