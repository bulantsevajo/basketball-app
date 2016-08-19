
#import <Foundation/Foundation.h>

#import <ScadeKit/SCDPlatformContactLabel.h>



@class SCDPlatformContactLabel;

typedef NS_ENUM(NSInteger, SCDPlatformContactLabelKey);

/*PROTECTED REGION ID(scade::platform::contacts::SCDPlatformContactAddress_pre) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/


@interface SCDPlatformContactAddress : SCDPlatformContactLabel         


@property (nonatomic) NSString* street;

@property (nonatomic) NSString* city;

@property (nonatomic) NSString* region;

@property (nonatomic) NSString* postalCode;

@property (nonatomic) NSString* country;





/*PROTECTED REGION ID(scade::platform::contacts::SCDPlatformContactAddress) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

@end
