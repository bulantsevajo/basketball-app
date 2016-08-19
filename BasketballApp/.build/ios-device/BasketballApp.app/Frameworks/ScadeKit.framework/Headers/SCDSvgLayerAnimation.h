
#import <Foundation/Foundation.h>

#import <ScadeKit/SCDSvgBaseAnimation.h>


@protocol SCDSvgAnimatable;

@class SCDSvgOnCompleteHandler;
@class SCDSvgAnimation;
@class SCDSvgBaseAnimation;

typedef NS_ENUM(NSInteger, SCDSvgAttributeType);

/*PROTECTED REGION ID(scade::svg::animations::internal::SCDSvgLayerAnimation_pre) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/


@interface SCDSvgLayerAnimation : SCDSvgBaseAnimation         


@property (nonatomic) NSArray<NSNumber*>* from;

@property (nonatomic) NSArray<NSNumber*>* by;

@property (nonatomic) NSArray<NSNumber*>* to;

@property (nonatomic) SCDSvgAttributeType type;

@property (nonatomic) NSString* key;





/*PROTECTED REGION ID(scade::svg::animations::internal::SCDSvgLayerAnimation) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

@end
