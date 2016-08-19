#import <Foundation/Foundation.h>




typedef NS_ENUM(NSInteger, SCDSvgAspectRatio) {
SCDSvgAspectRatioMeet, SCDSvgAspectRatioSlice, SCDSvgAspectRatioNone};
typedef NS_ENUM(NSInteger, SCDSvgTextAnchor) {
SCDSvgTextAnchorStart, SCDSvgTextAnchorMiddle, SCDSvgTextAnchorEnd};
typedef NS_ENUM(NSInteger, SCDSvgMeasurement) {
SCDSvgMeasurementPixel, SCDSvgMeasurementPercentage};
typedef NS_ENUM(NSInteger, SCDSvgBoxAlignment) {
SCDSvgBoxAlignmentXmidymid, SCDSvgBoxAlignmentXminymin, SCDSvgBoxAlignmentXminymid, SCDSvgBoxAlignmentXminymax, SCDSvgBoxAlignmentXmidymin, SCDSvgBoxAlignmentXmidymax, SCDSvgBoxAlignmentXmaxymin, SCDSvgBoxAlignmentXmaxymid, SCDSvgBoxAlignmentXmaxymax};
typedef NS_ENUM(NSInteger, SCDSvgTextAlignmentBaseline) {
SCDSvgTextAlignmentBaselineAlphabetic, SCDSvgTextAlignmentBaselineHanging, SCDSvgTextAlignmentBaselineCentral};
typedef NS_ENUM(NSInteger, SCDSvgScrollType) {
SCDSvgScrollTypeVertical, SCDSvgScrollTypeHorizontal, SCDSvgScrollTypeAll};
typedef NS_ENUM(NSInteger, SCDSvgTextAlignment) {
SCDSvgTextAlignmentLeft, SCDSvgTextAlignmentCenter, SCDSvgTextAlignmentRight};




typedef NS_ENUM(NSInteger, SCDSvgLineJoin) {
SCDSvgLineJoinMitter, SCDSvgLineJoinRound, SCDSvgLineJoinBevel};
typedef NS_ENUM(NSInteger, SCDSvgFillRule) {
SCDSvgFillRuleNonzero, SCDSvgFillRuleEvenodd};
typedef NS_ENUM(NSInteger, SCDSvgFontStyle) {
SCDSvgFontStyleInherit, SCDSvgFontStyleNormal, SCDSvgFontStyleItalic};
typedef NS_ENUM(NSInteger, SCDSvgTextDecoration) {
SCDSvgTextDecorationInherit, SCDSvgTextDecorationNone, SCDSvgTextDecorationUnderline, SCDSvgTextDecorationThrough, SCDSvgTextDecorationUnderlinethrough};



typedef NS_ENUM(NSInteger, SCDSvgTouchEventPhase) {
SCDSvgTouchEventPhaseBegan, SCDSvgTouchEventPhaseMoved, SCDSvgTouchEventPhaseEnded, SCDSvgTouchEventPhaseCancelled};

typedef NS_ENUM(NSInteger, SCDSvgHDirection) {
SCDSvgHDirectionNone, SCDSvgHDirectionLeft, SCDSvgHDirectionRight, SCDSvgHDirectionBoth};
typedef NS_ENUM(NSInteger, SCDSvgVDirection) {
SCDSvgVDirectionNone, SCDSvgVDirectionUp, SCDSvgVDirectionDown, SCDSvgVDirectionBoth};


typedef NS_ENUM(NSInteger, SCDSvgTransformType) {
SCDSvgTransformTypeTranslate, SCDSvgTransformTypeScale, SCDSvgTransformTypeRotate};
typedef NS_ENUM(NSInteger, SCDSvgAttributeType) {
SCDSvgAttributeTypeX, SCDSvgAttributeTypeY, SCDSvgAttributeTypeWidth, SCDSvgAttributeTypeHeight, SCDSvgAttributeTypeOpacity, SCDSvgAttributeTypeBackgroundcolor, SCDSvgAttributeTypePosition, SCDSvgAttributeTypeSize, SCDSvgAttributeTypeScale, SCDSvgAttributeTypeTranslate, SCDSvgAttributeTypeRotate, SCDSvgAttributeTypeTransform};



#import <ScadeKit/SCDSvgElement.h>

#import <ScadeKit/SCDSvgStructuralElement.h>

#import <ScadeKit/SCDSvgContainerElement.h>


#import <ScadeKit/SCDSvgAlignmentElement.h>

#import <ScadeKit/SCDSvgDrawable.h>

#import <ScadeKit/SCDSvgDrawableGroup.h>

#import <ScadeKit/SCDSvgDrawableElement.h>

#import <ScadeKit/SCDSvgBox.h>

#import <ScadeKit/SCDSvgGroup.h>

#import <ScadeKit/SCDSvgShape.h>

#import <ScadeKit/SCDSvgPath.h>

#import <ScadeKit/SCDSvgLine.h>

#import <ScadeKit/SCDSvgRect.h>

#import <ScadeKit/SCDSvgCircle.h>

#import <ScadeKit/SCDSvgEllipse.h>

#import <ScadeKit/SCDSvgPolyline.h>

#import <ScadeKit/SCDSvgTSpan.h>

#import <ScadeKit/SCDSvgText.h>

#import <ScadeKit/SCDSvgUse.h>

#import <ScadeKit/SCDSvgImage.h>

#import <ScadeKit/SCDSvgSymbol.h>

#import <ScadeKit/SCDSvgPattern.h>

#import <ScadeKit/SCDSvgScrollGroup.h>

#import <ScadeKit/SCDSvgClipPath.h>


#import <ScadeKit/SCDSvgUnit.h>


#import <ScadeKit/SCDSvgPathElement.h>

#import <ScadeKit/SCDSvgPathMove.h>

#import <ScadeKit/SCDSvgPathLine.h>

#import <ScadeKit/SCDSvgPathHLine.h>

#import <ScadeKit/SCDSvgPathVLine.h>

#import <ScadeKit/SCDSvgPathCubic.h>

#import <ScadeKit/SCDSvgPathSCubic.h>

#import <ScadeKit/SCDSvgPathQuadratic.h>

#import <ScadeKit/SCDSvgPathSQuadratic.h>

#import <ScadeKit/SCDSvgPathElliptical.h>

#import <ScadeKit/SCDSvgPathClose.h>


#import <ScadeKit/SCDSvgStylable.h>

#import <ScadeKit/SCDSvgFontStyleable.h>


#import <ScadeKit/SCDSvgColor.h>

#import <ScadeKit/SCDSvgRGBColor.h>

#import <ScadeKit/SCDSvgNoneColor.h>

#import <ScadeKit/SCDSvgLinearGradient.h>

#import <ScadeKit/SCDSvgStop.h>



#import <ScadeKit/SCDSvgTransformable.h>

#import <ScadeKit/SCDSvgMatrix.h>


#import <ScadeKit/SCDSvgSvgResource.h>


#import <ScadeKit/SCDSvgHitEvent.h>

#import <ScadeKit/SCDSvgTouchEvent.h>

#import <ScadeKit/SCDSvgTapEvent.h>

#import <ScadeKit/SCDSvgTouchHandler.h>

#import <ScadeKit/SCDSvgTapHandler.h>

#import <ScadeKit/SCDSvgHitEventReceiver.h>


#import <ScadeKit/SCDSvgGestureRecognizer.h>

#import <ScadeKit/SCDSvgSwipeGestureRecognizer.h>


#import <ScadeKit/SCDSvgAnimation.h>

#import <ScadeKit/SCDSvgBaseAnimation.h>

#import <ScadeKit/SCDSvgGroupAnimation.h>

#import <ScadeKit/SCDSvgAnimatable.h>

#import <ScadeKit/SCDSvgElementAnimation.h>

#import <ScadeKit/SCDSvgFeatureAnimation.h>

#import <ScadeKit/SCDSvgTranslateAnimation.h>

#import <ScadeKit/SCDSvgRotateAnimation.h>

#import <ScadeKit/SCDSvgOnCompleteHandler.h>


#import <ScadeKit/SCDSvgTransformAnimation.h>

#import <ScadeKit/SCDSvgLayerAnimation.h>


#import <ScadeKit/SCDSvgConstraint.h>

#import <ScadeKit/SCDSvgMatrixConstraint.h>

#import <ScadeKit/SCDSvgDirectConstraint.h>

#import <ScadeKit/SCDSvgScrollSizeConstraint.h>

