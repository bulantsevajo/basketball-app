
#import <Foundation/Foundation.h>

#import <ScadeKit/SCDSvgStylable.h>
#import <ScadeKit/SCDSvgElement.h>
#import <ScadeKit/SCDSvgFontStyleable.h>


@protocol SCDSvgStylable;
@protocol SCDSvgElement;

@class SCDSvgColor;
@class SCDSvgPattern;
@class SCDSvgClipPath;
@class SCDSvgConstraint;
@class SCDSvgUnit;
@class SCDSvgFontStyleable;

typedef NS_ENUM(NSInteger, SCDSvgLineJoin);
typedef NS_ENUM(NSInteger, SCDSvgFillRule);
typedef NS_ENUM(NSInteger, SCDSvgFontStyle);
typedef NS_ENUM(NSInteger, SCDSvgTextDecoration);
typedef NS_ENUM(NSInteger, SCDSvgTextAnchor);
typedef NS_ENUM(NSInteger, SCDSvgTextAlignmentBaseline);
typedef NS_ENUM(NSInteger, SCDSvgTextAlignment);

/*PROTECTED REGION ID(scade::svg::draw::SCDSvgTSpan_pre) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/


@interface SCDSvgTSpan : SCDSvgFontStyleable <SCDSvgStylable, SCDSvgElement>           


@property (nonatomic) NSString* text;

@property (nonatomic) SCDSvgTextAnchor anchor;

@property (nonatomic) SCDSvgUnit* x;

@property (nonatomic) SCDSvgUnit* y;

@property (nonatomic) SCDSvgTextAlignmentBaseline alignmentBaseline;

@property (nonatomic) SCDSvgTextAlignment alignment;





/*PROTECTED REGION ID(scade::svg::draw::SCDSvgTSpan) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

@end
