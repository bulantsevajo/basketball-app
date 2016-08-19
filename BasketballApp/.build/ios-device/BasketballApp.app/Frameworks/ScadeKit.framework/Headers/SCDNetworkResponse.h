
#import <Foundation/Foundation.h>

#import <ScadeKit/EObject.h>





/*PROTECTED REGION ID(scade::network::http::SCDNetworkResponse_pre) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/


@interface SCDNetworkResponse : EObject         


@property (nonatomic) NSString* body;

@property (nonatomic) NSDictionary<NSString*,NSString*>* headers;

@property (nonatomic) NSNumber* statusCode;



-(BOOL) isOk ;



/*PROTECTED REGION ID(scade::network::http::SCDNetworkResponse) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

@end
