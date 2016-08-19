
#import <Foundation/Foundation.h>

#import <ScadeKit/SCDSvgConstraint.h>



@class EStructuralFeature;
@class SCDExprExpression;
@class SCDSvgConstraint;


/*PROTECTED REGION ID(scade::svg::constraints::SCDSvgMatrixConstraint_pre) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/


@interface SCDSvgMatrixConstraint : SCDSvgConstraint         


@property (nonatomic) SCDExprExpression* scaleX;

@property (nonatomic) SCDExprExpression* skewX;

@property (nonatomic) SCDExprExpression* translateX;

@property (nonatomic) SCDExprExpression* skewY;

@property (nonatomic) SCDExprExpression* scaleY;

@property (nonatomic) SCDExprExpression* translateY;





/*PROTECTED REGION ID(scade::svg::constraints::SCDSvgMatrixConstraint) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

@end
