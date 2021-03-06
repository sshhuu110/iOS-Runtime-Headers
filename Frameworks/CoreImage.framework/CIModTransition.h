/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

@class CIImage, CIVector, NSNumber;

@interface CIModTransition : CIFilter {
    NSNumber *inputAngle;
    CIVector *inputCenter;
    NSNumber *inputCompression;
    CIImage *inputImage;
    NSNumber *inputRadius;
    CIImage *inputTargetImage;
    NSNumber *inputTime;
}

@property(retain) NSNumber * inputAngle;
@property(retain) CIVector * inputCenter;
@property(retain) NSNumber * inputCompression;
@property(retain) CIImage * inputImage;
@property(retain) NSNumber * inputRadius;
@property(retain) CIImage * inputTargetImage;
@property(retain) NSNumber * inputTime;

+ (id)customAttributes;

- (id)_kernel;
- (id)inputAngle;
- (id)inputCenter;
- (id)inputCompression;
- (id)inputImage;
- (id)inputRadius;
- (id)inputTargetImage;
- (id)inputTime;
- (id)outputImage;
- (void)setDefaults;
- (void)setInputAngle:(id)arg1;
- (void)setInputCenter:(id)arg1;
- (void)setInputCompression:(id)arg1;
- (void)setInputImage:(id)arg1;
- (void)setInputRadius:(id)arg1;
- (void)setInputTargetImage:(id)arg1;
- (void)setInputTime:(id)arg1;

@end
