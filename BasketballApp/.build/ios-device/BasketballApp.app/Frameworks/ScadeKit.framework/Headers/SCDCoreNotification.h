
#import <Foundation/Foundation.h>

#import <ScadeKit/EObject.h>



@class EObject;
@class EStructuralFeature;

typedef NS_ENUM(NSInteger, SCDCoreNotificationType);

/*PROTECTED REGION ID(scade::emf::core::notify::SCDCoreNotification_pre) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/


@interface SCDCoreNotification : EObject         


@property (nonatomic) SCDCoreNotificationType type;

@property (nonatomic) EObject* notifier;

@property (nonatomic) EStructuralFeature* feature;

@property (nonatomic) id newValue;

@property (nonatomic) id oldValue;

@property (nonatomic) NSNumber* position;





/*PROTECTED REGION ID(scade::emf::core::notify::SCDCoreNotification) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

@end
