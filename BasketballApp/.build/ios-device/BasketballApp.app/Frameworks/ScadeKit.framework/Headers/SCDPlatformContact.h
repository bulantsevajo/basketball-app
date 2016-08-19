
#import <Foundation/Foundation.h>

#import <ScadeKit/EObject.h>



@class SCDPlatformContactPhone;
@class SCDPlatformContactEmail;
@class SCDPlatformContactIM;
@class SCDPlatformContactUrl;
@class SCDPlatformContactAddress;


/*PROTECTED REGION ID(scade::platform::contacts::SCDPlatformContact_pre) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/


@interface SCDPlatformContact : EObject         


@property (nonatomic) NSString* id;

@property (nonatomic) NSString* note;

@property (nonatomic) NSArray<SCDPlatformContactPhone*>* phoneNumbers;

@property (nonatomic) NSArray<SCDPlatformContactEmail*>* emails;

@property (nonatomic) NSArray<SCDPlatformContactIM*>* ims;

@property (nonatomic) NSArray<SCDPlatformContactUrl*>* urls;

@property (nonatomic) NSArray<SCDPlatformContactAddress*>* addresses;

@property (nonatomic) NSString* familyName;

@property (nonatomic) NSString* givenName;

@property (nonatomic) NSString* middleName;

@property (nonatomic) NSString* prefix;

@property (nonatomic) NSString* sufix;

@property (nonatomic) NSString* organizationName;

@property (nonatomic) NSString* departmentName;

@property (nonatomic) NSString* jobTitle;



-(void) save ;

-(void) remove ;

-(SCDPlatformContact*) clone ;



/*PROTECTED REGION ID(scade::platform::contacts::SCDPlatformContact) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

@end
