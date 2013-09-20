/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UIColor, _UIBackdropViewSettings;

@interface _UIBackdropColorSettings : NSObject {
    float _averageBrightness;
    float _averageHue;
    float _averageSaturation;
    float _contrast;
    _UIBackdropViewSettings *_parentSettings;
    float _previousAverageBrightness;
    float _previousAverageHue;
    float _previousAverageSaturation;
    float _previousContrast;
}

@property float averageBrightness;
@property float averageHue;
@property float averageSaturation;
@property(readonly) UIColor * color;
@property float contrast;
@property _UIBackdropViewSettings * parentSettings;
@property float previousAverageBrightness;
@property float previousAverageHue;
@property float previousAverageSaturation;
@property float previousContrast;

- (BOOL)applyCABackdropLayerStatistics:(id)arg1;
- (float)averageBrightness;
- (float)averageHue;
- (float)averageSaturation;
- (id)color;
- (float)contrast;
- (id)parentSettings;
- (float)previousAverageBrightness;
- (float)previousAverageHue;
- (float)previousAverageSaturation;
- (float)previousContrast;
- (void)setAverageBrightness:(float)arg1;
- (void)setAverageHue:(float)arg1;
- (void)setAverageSaturation:(float)arg1;
- (void)setContrast:(float)arg1;
- (void)setDefaultValues;
- (void)setParentSettings:(id)arg1;
- (void)setPreviousAverageBrightness:(float)arg1;
- (void)setPreviousAverageHue:(float)arg1;
- (void)setPreviousAverageSaturation:(float)arg1;
- (void)setPreviousContrast:(float)arg1;
- (void)setValuesFromModel:(id)arg1;

@end