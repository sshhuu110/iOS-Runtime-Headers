/* Generated by RuntimeBrowser on iPhone OS 4.2.1
   Image: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

@class UILabel, UIView;



@interface PLPolaroidImageView : PLImageView 
{
    UIView *_posterView;
    UILabel *_nameLabel;
    float _thinBorderWidth;
    BOOL _polaroidBorderVisible;
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    } _roi;
}

@property(retain) UIImage *posterImage;

+ (Class)layerClass;

- (void)setName:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)dealloc;
- (void)layoutSubviews;
- (float)_tunedProgress;
- (void)_adjustLabel;
- (void)_updatePolaroidFramePath:(BOOL)arg1;
- (struct CGSize { float x1; float x2; })sizeThatFits:(struct CGSize { float x1; float x2; })arg1 allowRounding:(BOOL)arg2;
- (void)setBorderVisible:(BOOL)arg1;
- (void)setPosterImage:(id)arg1 regionOfInterest:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2;
- (void)setTransitionProgress:(float)arg1;
- (void)renderSnapshotInContext:(struct CGContext { }*)arg1;
- (id)posterImage;
- (void)setPosterImage:(id)arg1;

@end