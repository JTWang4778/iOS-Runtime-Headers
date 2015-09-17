/* Generated by RuntimeBrowser.
 */

@protocol MusicEntityContentDescriptorViewConfiguring <NSObject>

@required

+ (float)maximumHeightForContentDescriptor:(MusicEntityViewContentDescriptor *)arg1 width:(float)arg2 traitCollection:(UITraitCollection *)arg3;

- (MusicEntityViewContentDescriptor *)contentDescriptor;
- (<MusicEntityValueProviding> *)entityValueProvider;
- (void)setContentDescriptor:(MusicEntityViewContentDescriptor *)arg1;
- (void)setEntityValueProvider:(id <MusicEntityValueProviding>)arg1;

@optional

- (void)setEntityDisabled:(BOOL)arg1;

@end