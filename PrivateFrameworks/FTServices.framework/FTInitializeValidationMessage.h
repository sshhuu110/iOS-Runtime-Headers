/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/FTServices.framework/FTServices
 */

@class NSNumber, NSData;

@interface FTInitializeValidationMessage : FTMessage <NSCopying> {
    NSData *_sessionInfoRequest;
    NSData *_responseSessionInfo;
    NSNumber *_responseTTL;
    NSData *_pushToken;
}

@property(copy) NSData * sessionInfoRequest;
@property(copy) NSData * pushToken;
@property(copy) NSData * responseSessionInfo;
@property(copy) NSNumber * responseTTL;


- (id)messageBody;
- (int)command;
- (void)setPushToken:(id)arg1;
- (id)pushToken;
- (void)setSessionInfoRequest:(id)arg1;
- (id)responseTTL;
- (id)responseSessionInfo;
- (void)setResponseTTL:(id)arg1;
- (void)setResponseSessionInfo:(id)arg1;
- (id)sessionInfoRequest;
- (void)handleResponseDictionary:(id)arg1;
- (id)additionalMessageHeaders;
- (int)responseCommand;
- (BOOL)wantsBagKey;
- (BOOL)wantsHTTPHeaders;
- (BOOL)wantsCompressedBody;
- (id)requiredKeys;
- (BOOL)wantsBinaryPush;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)init;
- (void)dealloc;
- (id)bagKey;

@end