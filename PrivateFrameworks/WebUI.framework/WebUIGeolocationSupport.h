/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WebUI.framework/WebUI
 */

@class NSMutableDictionary, NSString;

@interface WebUIGeolocationSupport : NSObject {
    BOOL _allowed;
    int _challengeCount;
    NSString *_key;
    NSMutableDictionary *_sites;
}

+ (id)sharedWebUIGeolocationSupport;

- (void)alertView:(id)arg1 clickedButtonAtIndex:(int)arg2;
- (void)clear;
- (void)load;
- (void)save;
- (id)siteFile;
- (BOOL)webFrame:(id)arg1 decidePolicyForGeolocationRequestFromOrigin:(id)arg2;
- (void)webView:(id)arg1 decidePolicyForGeolocationRequestFromOrigin:(id)arg2 frame:(id)arg3 listener:(id)arg4;

@end