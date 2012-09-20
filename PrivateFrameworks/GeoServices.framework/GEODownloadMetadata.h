/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@class NSString;

@interface GEODownloadMetadata : PBCodable  {
    double _timestamp;
    NSString *_etag;
}

@property double timestamp;
@property(readonly) BOOL hasEtag;
@property(retain) NSString * etag;


- (double)timestamp;
- (void)setTimestamp:(double)arg1;
- (id)description;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)dealloc;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (id)etag;
- (BOOL)hasEtag;
- (void)setEtag:(id)arg1;
- (BOOL)readFrom:(id)arg1;

@end