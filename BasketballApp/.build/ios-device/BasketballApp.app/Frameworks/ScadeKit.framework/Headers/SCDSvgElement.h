
#import <Foundation/Foundation.h>

#import <ScadeKit/EObject.h>



@class SCDSvgConstraint;


/*PROTECTED REGION ID(scade::svg::SCDSvgElement_pre) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/


@protocol SCDSvgElement <EObject>     


@property (nonatomic) NSString* id;

@property (nonatomic) NSDictionary<NSString*,NSString*>* attributes;

@property (nonatomic) NSArray<SCDSvgConstraint*>* constraints;



-(id<SCDSvgElement>) findById:(NSString*)id  ;



/*PROTECTED REGION ID(scade::svg::SCDSvgElement) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

@end
