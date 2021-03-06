/* Generated by RuntimeBrowser
   Image: /usr/lib/libAWDSupportFramework.dylib
 */

@interface AWDCoreRoutineLocationAwarenessLocationTimeHistograms : PBCodable <NSCopying> {
    AWDCoreRoutineLocationAwarenessBasicHistogram * _anyPositiveHistogram;
    unsigned long long  _duration;
    struct { 
        unsigned int duration : 1; 
        unsigned int timestamp : 1; 
    }  _has;
    AWDCoreRoutineLocationAwarenessBasicHistogram * _lessThan10mHistogram;
    AWDCoreRoutineLocationAwarenessBasicHistogram * _lessThan200mHistogram;
    AWDCoreRoutineLocationAwarenessBasicHistogram * _lessThan20mHistogram;
    AWDCoreRoutineLocationAwarenessBasicHistogram * _lessThan55mHistogram;
    unsigned long long  _timestamp;
}

@property (nonatomic, retain) AWDCoreRoutineLocationAwarenessBasicHistogram *anyPositiveHistogram;
@property (nonatomic) unsigned long long duration;
@property (nonatomic, readonly) BOOL hasAnyPositiveHistogram;
@property (nonatomic) BOOL hasDuration;
@property (nonatomic, readonly) BOOL hasLessThan10mHistogram;
@property (nonatomic, readonly) BOOL hasLessThan200mHistogram;
@property (nonatomic, readonly) BOOL hasLessThan20mHistogram;
@property (nonatomic, readonly) BOOL hasLessThan55mHistogram;
@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic, retain) AWDCoreRoutineLocationAwarenessBasicHistogram *lessThan10mHistogram;
@property (nonatomic, retain) AWDCoreRoutineLocationAwarenessBasicHistogram *lessThan200mHistogram;
@property (nonatomic, retain) AWDCoreRoutineLocationAwarenessBasicHistogram *lessThan20mHistogram;
@property (nonatomic, retain) AWDCoreRoutineLocationAwarenessBasicHistogram *lessThan55mHistogram;
@property (nonatomic) unsigned long long timestamp;

- (id)anyPositiveHistogram;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)duration;
- (BOOL)hasAnyPositiveHistogram;
- (BOOL)hasDuration;
- (BOOL)hasLessThan10mHistogram;
- (BOOL)hasLessThan200mHistogram;
- (BOOL)hasLessThan20mHistogram;
- (BOOL)hasLessThan55mHistogram;
- (BOOL)hasTimestamp;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (id)lessThan10mHistogram;
- (id)lessThan200mHistogram;
- (id)lessThan20mHistogram;
- (id)lessThan55mHistogram;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)setAnyPositiveHistogram:(id)arg1;
- (void)setDuration:(unsigned long long)arg1;
- (void)setHasDuration:(BOOL)arg1;
- (void)setHasTimestamp:(BOOL)arg1;
- (void)setLessThan10mHistogram:(id)arg1;
- (void)setLessThan200mHistogram:(id)arg1;
- (void)setLessThan20mHistogram:(id)arg1;
- (void)setLessThan55mHistogram:(id)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (unsigned long long)timestamp;
- (void)writeTo:(id)arg1;

@end
