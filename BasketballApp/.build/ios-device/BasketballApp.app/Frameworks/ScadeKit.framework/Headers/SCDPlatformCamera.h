
#import <Foundation/Foundation.h>

#import <ScadeKit/EObject.h>



@class SCDPlatformCameraPopoverHandle;
@class SCDPlatformCameraSuccessHandler;
@class SCDPlatformCameraErrorHandler;
@class SCDPlatformCameraOptions;


/*PROTECTED REGION ID(scade::platform::camera::SCDPlatformCamera_pre) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/


@interface SCDPlatformCamera : EObject         




-(SCDPlatformCameraPopoverHandle*) getPicture:(SCDPlatformCameraSuccessHandler*)successHandler errorHandler:(SCDPlatformCameraErrorHandler*)errorHandler cameraOptions:(SCDPlatformCameraOptions*)cameraOptions ;

-(void) cleanUp:(SCDPlatformCameraSuccessHandler*)successHandler errorHandler:(SCDPlatformCameraErrorHandler*)errorHandler ;



/*PROTECTED REGION ID(scade::platform::camera::SCDPlatformCamera) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

@end
