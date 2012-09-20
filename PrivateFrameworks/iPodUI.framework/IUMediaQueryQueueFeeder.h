/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iPodUI.framework/iPodUI
 */

@class MPMediaQueryShuffledItems, MPMediaLibraryConnectionAssertion, NSArray, MPMediaQuery, MPMediaItem;

@interface IUMediaQueryQueueFeeder : MPQueueFeeder  {
    MPMediaLibraryConnectionAssertion *_connectionAssertion;
    MPMediaQueryShuffledItems *_items;
    MPMediaQuery *_query;
    NSArray *_prefixMediaItems;
    MPMediaItem *_focusedItem;
    int _ignoreShuffleTypeChangesCount;
    unsigned int _itemsChanged : 1;
    unsigned int _hasPendingLibraryChanges : 1;
}

@property(copy) MPMediaQuery * query;
@property(retain) NSArray * prefixMediaItems;
@property(retain) MPMediaItem * focusedItem;

+ (id)imageCache;

- (void)_libraryDidChangeNotification:(id)arg1;
- (void)setQuery:(id)arg1;
- (void)archiveAVControllerPlaybackQueue:(id)arg1 toArchiver:(id)arg2;
- (unsigned int)realShuffleType;
- (unsigned int)realRepeatType;
- (BOOL)trackChangesCanEndPlayback;
- (unsigned int)itemTypeForIndex:(unsigned int)arg1;
- (BOOL)shouldBeginPlaybackOfItem:(id)arg1 error:(id*)arg2;
- (id)errorResolverForItem:(id)arg1;
- (void)shuffleItemsWithAnchor:(unsigned int*)arg1;
- (void)setSubsequenceFocused:(BOOL)arg1 currentItemIndex:(unsigned int)arg2;
- (unsigned int)initialPlaybackQueueDepth;
- (void)restoreAVControllerPlaybackQueue:(id)arg1 fromUnarchiver:(id)arg2;
- (Class)itemClass;
- (BOOL)reloadWithDataSource:(id)arg1 keepPlayingCurrentItemIfPossible:(BOOL)arg2;
- (id)playbackInfoAtIndex:(unsigned int)arg1;
- (id)copyRawItemAtIndex:(unsigned int)arg1;
- (unsigned int)itemCount;
- (unsigned int)nonRepeatingItemCount;
- (void)dealloc;
- (id)init;
- (void)_applicationWillEnterForeground:(id)arg1;
- (id)preferredLanguages;
- (id)query;
- (void)setFocusedItem:(id)arg1;
- (id)focusedItem;
- (unsigned int)unshuffledIndexOfAVItem:(id)arg1;
- (id)prefixMediaItems;
- (void)_performWhileIgnoringShuffleChanges:(id)arg1;
- (void)setPrefixMediaItems:(id)arg1;
- (unsigned int)_shuffleItemsInFeederQueryWithShuffleType:(unsigned int)arg1 initialIndex:(unsigned int)arg2;
- (BOOL)_reloadWithDataSource:(id)arg1 keepPlayingCurrentItemIfPossible:(BOOL)arg2 force:(BOOL)arg3;
- (unsigned int)indexOfMediaItem:(id)arg1;
- (id)mediaItemAtIndex:(unsigned int)arg1;
- (void)_handleMediaLibraryDidChange;
- (id)pathAtIndex:(unsigned int)arg1;

@end