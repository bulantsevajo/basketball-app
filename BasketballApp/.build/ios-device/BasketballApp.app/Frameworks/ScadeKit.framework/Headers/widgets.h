#import <Foundation/Foundation.h>


typedef NS_ENUM(NSInteger, SCDWidgetsNavigationBarButtonType) {
SCDWidgetsNavigationBarButtonTypeBack, SCDWidgetsNavigationBarButtonTypeExtra};
typedef NS_ENUM(NSInteger, SCDWidgetsDataWheelAlignment) {
SCDWidgetsDataWheelAlignmentStart, SCDWidgetsDataWheelAlignmentMiddle, SCDWidgetsDataWheelAlignmentEnd};
typedef NS_ENUM(NSInteger, SCDWidgetsKeyboard) {
SCDWidgetsKeyboardResize, SCDWidgetsKeyboardOntop};


typedef NS_ENUM(NSInteger, SCDWidgetsBackgroundType) {
SCDWidgetsBackgroundTypeDefault, SCDWidgetsBackgroundTypeColor, SCDWidgetsBackgroundTypeImage};
typedef NS_ENUM(NSInteger, SCDWidgetsBaselineAlignment) {
SCDWidgetsBaselineAlignmentMiddle, SCDWidgetsBaselineAlignmentAlphabetic, SCDWidgetsBaselineAlignmentHanging};
typedef NS_ENUM(NSInteger, SCDWidgetsScreenOrientation) {
SCDWidgetsScreenOrientationPortrait, SCDWidgetsScreenOrientationLandscape};
typedef NS_ENUM(NSInteger, SCDWidgetsScreenState) {
SCDWidgetsScreenStateNormal, SCDWidgetsScreenStateIncall};


typedef NS_ENUM(NSInteger, SCDWidgetsMapType) {
SCDWidgetsMapTypeStandard, SCDWidgetsMapTypeSatellite, SCDWidgetsMapTypeHybrid};


#import <ScadeKit/SCDWidgetsIControl.h>

#import <ScadeKit/SCDWidgetsIVisualControl.h>

#import <ScadeKit/SCDWidgetsIStyledControl.h>

#import <ScadeKit/SCDWidgetsLayoutable.h>

#import <ScadeKit/SCDWidgetsIContainer.h>

#import <ScadeKit/SCDWidgetsWidget.h>

#import <ScadeKit/SCDWidgetsContainer.h>

#import <ScadeKit/SCDWidgetsPage.h>

#import <ScadeKit/SCDWidgetsTextWidget.h>

#import <ScadeKit/SCDWidgetsButton.h>

#import <ScadeKit/SCDWidgetsLabel.h>

#import <ScadeKit/SCDWidgetsTextbox.h>

#import <ScadeKit/SCDWidgetsPasswordField.h>

#import <ScadeKit/SCDWidgetsSearchField.h>

#import <ScadeKit/SCDWidgetsCheckbox.h>

#import <ScadeKit/SCDWidgetsBitmap.h>

#import <ScadeKit/SCDWidgetsNavigationBar.h>

#import <ScadeKit/SCDWidgetsNavigationBarButton.h>

#import <ScadeKit/SCDWidgetsListView.h>

#import <ScadeKit/SCDWidgetsGridView.h>

#import <ScadeKit/SCDWidgetsTabbedView.h>

#import <ScadeKit/SCDWidgetsTabContentPanel.h>

#import <ScadeKit/SCDWidgetsToolBar.h>

#import <ScadeKit/SCDWidgetsTabButtonsPanel.h>

#import <ScadeKit/SCDWidgetsToolBarItem.h>

#import <ScadeKit/SCDWidgetsTabButton.h>

#import <ScadeKit/SCDWidgetsListElement.h>

#import <ScadeKit/SCDWidgetsList.h>

#import <ScadeKit/SCDWidgetsAlphabeticalList.h>

#import <ScadeKit/SCDWidgetsListTemplate.h>

#import <ScadeKit/SCDWidgetsDatePicker.h>

#import <ScadeKit/SCDWidgetsDataPicker.h>

#import <ScadeKit/SCDWidgetsDataWheel.h>

#import <ScadeKit/SCDWidgetsXYView.h>

#import <ScadeKit/SCDWidgetsRowView.h>

#import <ScadeKit/SCDWidgetsStringTransformer.h>

#import <ScadeKit/SCDWidgetsSlider.h>

#import <ScadeKit/SCDWidgetsSliderLine.h>

#import <ScadeKit/SCDWidgetsCustomWidget.h>


#import <ScadeKit/SCDWidgetsEvent.h>

#import <ScadeKit/SCDWidgetsEventHandler.h>

#import <ScadeKit/SCDWidgetsItemEvent.h>

#import <ScadeKit/SCDWidgetsItemSelectedEvent.h>

#import <ScadeKit/SCDWidgetsItemSelectedEventHandler.h>

#import <ScadeKit/SCDWidgetsNavigationEvent.h>

#import <ScadeKit/SCDWidgetsEnterEvent.h>

#import <ScadeKit/SCDWidgetsEnterEventHandler.h>

#import <ScadeKit/SCDWidgetsExitEvent.h>

#import <ScadeKit/SCDWidgetsExitEventHandler.h>

#import <ScadeKit/SCDWidgetsClickable.h>

#import <ScadeKit/SCDWidgetsTextChangeEvent.h>

#import <ScadeKit/SCDWidgetsTextChangeEventHandler.h>

#import <ScadeKit/SCDWidgetsSlideLineEvent.h>

#import <ScadeKit/SCDWidgetsSlideLineEventHandler.h>

#import <ScadeKit/SCDWidgetsSlideEvent.h>

#import <ScadeKit/SCDWidgetsSlideEventHandler.h>

#import <ScadeKit/SCDWidgetsEditFinishEvent.h>

#import <ScadeKit/SCDWidgetsEditFinishEventHandler.h>


#import <ScadeKit/SCDWidgetsIStyle.h>

#import <ScadeKit/SCDWidgetsWidgetStyle.h>

#import <ScadeKit/SCDWidgetsGridLayoutStyle.h>

#import <ScadeKit/SCDWidgetsPageStyle.h>

#import <ScadeKit/SCDWidgetsScreen.h>

#import <ScadeKit/SCDWidgetsFontStyle.h>

#import <ScadeKit/SCDWidgetsTextStyle.h>

#import <ScadeKit/SCDWidgetsBackgroundStyle.h>


#import <ScadeKit/SCDWidgetsTabbedViewLayout.h>

#import <ScadeKit/SCDWidgetsListLayout.h>

#import <ScadeKit/SCDWidgetsSliderLayout.h>


#import <ScadeKit/SCDWidgetsNativeWidget.h>

#import <ScadeKit/SCDWidgetsMapWidget.h>

#import <ScadeKit/SCDWidgetsMapRegion.h>

