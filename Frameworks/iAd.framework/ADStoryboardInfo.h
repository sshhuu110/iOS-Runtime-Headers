/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/iAd.framework/iAd
 */

@class NSString;

@interface ADStoryboardInfo : PBCodable {
    NSUInteger _backgroundColor;
    NSInteger _contentHeight;
    NSInteger _contentWidth;
    NSString *_externalWebArchiveURL;
    BOOL _hasBackgroundColor;
    BOOL _hasContentHeight;
    BOOL _hasContentWidth;
    BOOL _hasInitialStoryboardOrientation;
    BOOL _hasScrolling;
    BOOL _hasSupportedStoryboardOrientations;
    NSString *_humanReadableName;
    NSInteger _initialStoryboardOrientation;
    BOOL _scrolling;
    NSInteger _supportedStoryboardOrientations;
    NSString *_uniqueIdentifier;
}

@property(retain) NSString *externalWebArchiveURL;
@property(retain) NSString *humanReadableName;
@property(retain) NSString *uniqueIdentifier;
@property NSUInteger backgroundColor;
@property NSInteger contentHeight;
@property NSInteger contentWidth;
@property(readonly) BOOL hasBackgroundColor;
@property(readonly) BOOL hasContentHeight;
@property(readonly) BOOL hasContentWidth;
@property(readonly) BOOL hasExternalWebArchiveURL;
@property(readonly) BOOL hasHumanReadableName;
@property(readonly) BOOL hasInitialStoryboardOrientation;
@property(readonly) BOOL hasScrolling;
@property(readonly) BOOL hasSupportedStoryboardOrientations;
@property(readonly) BOOL hasUniqueIdentifier;
@property NSInteger initialStoryboardOrientation;
@property BOOL scrolling;
@property NSInteger supportedStoryboardOrientations;

- (NSUInteger)backgroundColor;
- (NSInteger)contentHeight;
- (NSInteger)contentWidth;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (id)externalWebArchiveURL;
- (BOOL)hasBackgroundColor;
- (BOOL)hasContentHeight;
- (BOOL)hasContentWidth;
- (BOOL)hasExternalWebArchiveURL;
- (BOOL)hasHumanReadableName;
- (BOOL)hasInitialStoryboardOrientation;
- (BOOL)hasScrolling;
- (BOOL)hasSupportedStoryboardOrientations;
- (BOOL)hasUniqueIdentifier;
- (id)humanReadableName;
- (id)init;
- (NSInteger)initialStoryboardOrientation;
- (BOOL)readFrom:(id)arg1;
- (BOOL)scrolling;
- (void)setBackgroundColor:(NSUInteger)arg1;
- (void)setContentHeight:(NSInteger)arg1;
- (void)setContentWidth:(NSInteger)arg1;
- (void)setExternalWebArchiveURL:(id)arg1;
- (void)setHumanReadableName:(id)arg1;
- (void)setInitialStoryboardOrientation:(NSInteger)arg1;
- (void)setScrolling:(BOOL)arg1;
- (void)setSupportedStoryboardOrientations:(NSInteger)arg1;
- (void)setUniqueIdentifier:(id)arg1;
- (NSInteger)supportedStoryboardOrientations;
- (id)uniqueIdentifier;
- (void)writeTo:(id)arg1;

@end