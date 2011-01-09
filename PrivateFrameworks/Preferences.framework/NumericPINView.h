/* Generated by RuntimeBrowser on iPhone OS 4.2.1
   Image: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

@class UIPasscodeField;



@interface NumericPINView : PINView 
{
    UIPasscodeField *_passcodeField;
}


- (id)stringValue;
- (void)setStringValue:(id)arg1;
- (void)deleteLastCharacter;
- (void)appendString:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (void)hidePasscodeField:(BOOL)arg1;
- (void)showFailedAttempts:(NSInteger)arg1;

@end