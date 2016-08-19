
#import <Foundation/Foundation.h>

#import <ScadeKit/EObject.h>




typedef NS_ENUM(NSInteger, SCDSvgAspectRatio);
typedef NS_ENUM(NSInteger, SCDSvgBoxAlignment);

/*PROTECTED REGION ID(scade::svg::draw::SCDSvgAlignmentElement_pre) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/


@protocol SCDSvgAlignmentElement <EObject>     


@property (nonatomic) SCDSvgAspectRatio preserveAspectRatio;

@property (nonatomic) SCDSvgBoxAlignment alignment;





/*PROTECTED REGION ID(scade::svg::draw::SCDSvgAlignmentElement) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

@end
