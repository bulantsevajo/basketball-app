
#import <Foundation/Foundation.h>

#import <ScadeKit/SCDModelDataSource.h>



@class SCDServiceInvocation;
@class SCDServiceResponse;
@class SCDServiceService;
@class SCDModelDataSource;


/*PROTECTED REGION ID(scade::data::model::SCDModelServiceSource_pre) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/


@interface SCDModelServiceSource : SCDModelDataSource         


@property (nonatomic) SCDServiceInvocation* invocation;

@property (nonatomic) SCDServiceResponse* cachedValue;

@property (nonatomic) SCDServiceService* service;





/*PROTECTED REGION ID(scade::data::model::SCDModelServiceSource) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

@end
