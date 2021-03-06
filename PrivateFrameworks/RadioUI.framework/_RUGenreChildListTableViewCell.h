/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/RadioUI.framework/RadioUI
 */

@class NSString, RUAudioPreviewView, SKUICircleProgressIndicator, UIButton, UILabel, _RUAddGenreButton;

@interface _RUGenreChildListTableViewCell : _RUGenreListTableViewCell {
    SKUICircleProgressIndicator *_activityIndicator;
    _RUAddGenreButton *_addGenreButton;
    RUAudioPreviewView *_audioPreviewView;
    UILabel *_nowPlayingDescriptionLabel;
    BOOL _showActivityIndicator;
    BOOL _showGenreButton;
}

@property(readonly) UIButton * addGenreButton;
@property(retain) RUAudioPreviewView * audioPreviewView;
@property(copy) NSString * nowPlayingDescription;
@property BOOL showActivityIndicator;
@property BOOL showGenreButton;

- (void).cxx_destruct;
- (id)_audioPreviewAnimationForShowing:(BOOL)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_audioPreviewViewFrame;
- (id)addGenreButton;
- (id)audioPreviewView;
- (id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2;
- (void)layoutSubviews;
- (id)nowPlayingDescription;
- (void)setAudioPreviewView:(id)arg1 animated:(BOOL)arg2;
- (void)setAudioPreviewView:(id)arg1;
- (void)setNowPlayingDescription:(id)arg1;
- (void)setShowActivityIndicator:(BOOL)arg1;
- (void)setShowGenreButton:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setShowGenreButton:(BOOL)arg1;
- (BOOL)showActivityIndicator;
- (BOOL)showGenreButton;

@end
