
#import <Foundation/Foundation.h>

#import <ScadeKit/EObject.h>



@class SCDPlatformContact;
@class SCDPlatformContactSearchResult;


/*PROTECTED REGION ID(scade::platform::contacts::SCDPlatformContacts_pre) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/


@interface SCDPlatformContacts : EObject         




-(SCDPlatformContact*) create ;

-(SCDPlatformContactSearchResult*) findAll ;

-(SCDPlatformContactSearchResult*) findByName:(NSString*)name  ;



/*PROTECTED REGION ID(scade::platform::contacts::SCDPlatformContacts) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

@end
