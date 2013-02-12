/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/EventKit.framework/EventKit
 */

@class EKCalendar, EKDaemonConnection, NSArray, NSMutableDictionary, NSMutableSet, NSNumber, NSString, NSTimeZone;

@interface EKEventStore : NSObject {
    struct dispatch_queue_s { } *_calendarQueue;
    NSMutableDictionary *_calendars;
    EKDaemonConnection *_database;
    struct dispatch_queue_s { } *_dbChangedQueue;
    NSNumber *_defaultAllDayAlarmOffset;
    NSNumber *_defaultTimedAlarmOffset;
    NSMutableSet *_deletedObjects;
    unsigned long _flags;
    NSMutableSet *_insertedObjects;
    NSMutableSet *_objectsPendingCommit;
    NSMutableDictionary *_publicRegisteredObjects;
    NSMutableDictionary *_registeredObjects;
    struct dispatch_queue_s { } *_registeredQueue;
    NSMutableDictionary *_sources;
    NSTimeZone *_timeZone;
    struct dispatch_queue_s { } *_unsavedChangesQueue;
    NSMutableSet *_updatedObjects;
}

@property(retain) NSMutableDictionary * _calendars;
@property(retain) NSMutableDictionary * _sources;
@property struct dispatch_queue_s { }* calendarQueue;
@property(readonly) NSArray * calendars;
@property(retain) EKDaemonConnection * database;
@property struct dispatch_queue_s { }* dbChangedQueue;
@property(retain) NSNumber * defaultAllDayAlarmOffset;
@property(readonly) EKCalendar * defaultCalendarForNewEvents;
@property(retain) NSNumber * defaultTimedAlarmOffset;
@property NSMutableSet * deletedObjects;
@property(readonly) NSString * eventStoreIdentifier;
@property unsigned long flags;
@property NSMutableSet * insertedObjects;
@property NSMutableSet * objectsPendingCommit;
@property NSMutableDictionary * publicRegisteredObjects;
@property NSMutableDictionary * registeredObjects;
@property struct dispatch_queue_s { }* registeredQueue;
@property(copy) NSTimeZone * timeZone;
@property struct dispatch_queue_s { }* unsavedChangesQueue;
@property NSMutableSet * updatedObjects;

+ (Class)classForEntityName:(id)arg1;
+ (Class)publicClassForEntityName:(id)arg1;
+ (id)storeWithOptions:(unsigned long)arg1 path:(id)arg2;

- (id)_addFetchedObjectWithID:(id)arg1;
- (void)_addObjectToPendingCommits:(id)arg1;
- (id)_allCalendars;
- (BOOL)_calendar:(id)arg1 supportsEntityType:(int)arg2;
- (id)_calendars;
- (void)_databaseChangedExternally;
- (void)_deleteObject:(id)arg1;
- (id)_eventWithURI:(id)arg1 checkValid:(BOOL)arg2;
- (void)_forgetRegisteredObjects;
- (void)_insertObject:(id)arg1;
- (void)_notifyStoreChanged;
- (BOOL)_parseURI:(id)arg1 expectedScheme:(id)arg2 identifier:(id*)arg3 options:(id*)arg4;
- (void)_performServerFunction:(id)arg1 replyHandler:(id)arg2;
- (id)_predicateForRemindersWithDate:(id)arg1 useAsCompletionDate:(BOOL)arg2 calendars:(id)arg3 limitToCompletedOrIncomplete:(BOOL)arg4 completed:(BOOL)arg5 includeDatesBefore:(BOOL)arg6 sortOrder:(int)arg7;
- (void)_protectedDataDidBecomeAvailable;
- (void)_protectedDataWillBecomeUnavailable;
- (void)_refreshCalendar:(id)arg1 accountsManager:(id)arg2 isUserRequested:(BOOL)arg3;
- (void)_refreshSource:(id)arg1 accountsManager:(id)arg2 isUserRequested:(BOOL)arg3;
- (void)_registerObject:(id)arg1;
- (void)_registerObjectImmediate:(id)arg1;
- (void)_reregisterObject:(id)arg1 oldID:(id)arg2;
- (void)_save;
- (void)_saveWithNotify:(BOOL)arg1;
- (id)_sources;
- (void)_trackModifiedObject:(id)arg1;
- (void)_unregisterObject:(id)arg1;
- (void)_validateObjectIDs:(id)arg1 completion:(id)arg2;
- (void)alarmOccurrencesBetweenStartDate:(id)arg1 endDate:(id)arg2 completion:(id)arg3;
- (id)alarmWithUUID:(id)arg1;
- (struct dispatch_queue_s { }*)calendarQueue;
- (id)calendarWithExternalURI:(id)arg1;
- (id)calendarWithID:(id)arg1;
- (id)calendarWithIdentifier:(id)arg1;
- (id)calendars;
- (void)cancelFetchRequest:(id)arg1;
- (id)changesSinceSequenceNumber:(int)arg1;
- (id)colorForCalendar:(id)arg1;
- (BOOL)commit:(id*)arg1;
- (id)connection;
- (struct CGColor { }*)copyCGColorForNewCalendar;
- (int)countOfRemindersMatchingPredicate:(id)arg1;
- (void)daemonRestarted;
- (id)database;
- (struct dispatch_queue_s { }*)dbChangedQueue;
- (void)dealloc;
- (id)defaultAllDayAlarm;
- (id)defaultAllDayAlarmOffset;
- (id)defaultCalendarColors;
- (id)defaultCalendarColorsInRainbowOrder;
- (id)defaultCalendarForNewEvents;
- (id)defaultCalendarForNewTasks;
- (id)defaultTimedAlarm;
- (id)defaultTimedAlarmOffset;
- (BOOL)deleteCalendar:(id)arg1 forEntityType:(int)arg2 error:(id*)arg3;
- (id)deletedObjects;
- (id)earliestExpiringUnreadEventEndDateAfterDate:(id)arg1 timeZone:(id)arg2;
- (void)enumerateEventsMatchingPredicate:(id)arg1 usingBlock:(id)arg2;
- (id)eventForUID:(id)arg1 occurrenceDate:(id)arg2;
- (id)eventStoreIdentifier;
- (id)eventWithIdentifier:(id)arg1;
- (id)eventWithUUID:(id)arg1;
- (id)eventWithUniqueId:(id)arg1;
- (id)eventsMatchingPredicate:(id)arg1;
- (id)fetchEventsMatchingPredicate:(id)arg1 resultHandler:(id)arg2;
- (void)fetchRemindersMatchingPredicate:(id)arg1 completion:(id)arg2;
- (unsigned long)flags;
- (id)importICS:(id)arg1 intoCalendar:(id)arg2 options:(unsigned int)arg3;
- (void)importICSData:(id)arg1 intoCalendar:(id)arg2 options:(unsigned int)arg3 completion:(id)arg4;
- (id)importICSData:(id)arg1 intoCalendar:(id)arg2 options:(unsigned int)arg3;
- (id)init;
- (id)initWithOptions:(unsigned long)arg1 path:(id)arg2;
- (id)insertNewEvent;
- (id)insertNewExceptionDateWithDate:(id)arg1;
- (id)insertNewReminder;
- (id)insertedObjects;
- (BOOL)isDataProtected;
- (id)localSource;
- (void)locationBasedAlarmOccurrencesWithCompletion:(id)arg1;
- (BOOL)markEventRead:(id)arg1 error:(id*)arg2;
- (BOOL)markEventsRead:(id)arg1 error:(id*)arg2;
- (id)objectWithObjectID:(id)arg1;
- (id)objectsPendingCommit;
- (id)predicateForAllRemindersDueBeforeOrOnDueDate:(id)arg1 calendars:(id)arg2;
- (id)predicateForAllRemindersWithDueDate:(id)arg1 calendars:(id)arg2;
- (id)predicateForCompletedRemindersWithCalendars:(id)arg1;
- (id)predicateForCompletedRemindersWithDueDate:(id)arg1 calendars:(id)arg2 sortOrder:(int)arg3;
- (id)predicateForCompletedRemindersWithDueDateOrCompletionDate:(id)arg1 calendars:(id)arg2 sortOrder:(int)arg3;
- (id)predicateForEventsWithStartDate:(id)arg1 endDate:(id)arg2 calendars:(id)arg3;
- (id)predicateForEventsWithStartDate:(id)arg1 endDate:(id)arg2 eventUUID:(id)arg3 calendars:(id)arg4;
- (id)predicateForIncompleteRemindersDueBeforeOrOnDueDate:(id)arg1 calendars:(id)arg2;
- (id)predicateForIncompleteRemindersWithDueDate:(id)arg1 calendars:(id)arg2;
- (id)predicateForRemindersWithSearchTerm:(id)arg1;
- (id)predicateForRemindersWithTitle:(id)arg1 calendars:(id)arg2;
- (id)predicateForRemindersWithTitle:(id)arg1 listTitle:(id)arg2 limitToCompletedOrIncomplete:(BOOL)arg3 completed:(BOOL)arg4 dueAfter:(id)arg5 dueBefore:(id)arg6 searchTerm:(id)arg7 sortOrder:(int)arg8;
- (id)predicateForUnacknowledgedEvents;
- (id)predicateForUnalertedEvents;
- (id)predicateForUpcomingEventsWithLimit:(int)arg1;
- (id)publicObjectWithObjectID:(id)arg1;
- (id)publicObjectWithPersistentObject:(id)arg1;
- (id)publicRegisteredObjects;
- (int)readWriteCalendarCountForEntityType:(int)arg1;
- (id)readWriteCalendarsForEntityType:(int)arg1;
- (void)refreshSourcesIfNecessary:(BOOL)arg1;
- (void)refreshSourcesIfNecessary;
- (id)registerFetchedObjectWithID:(id)arg1;
- (id)registeredObjects;
- (struct dispatch_queue_s { }*)registeredQueue;
- (oneway void)release;
- (id)reminderWithExternalURI:(id)arg1;
- (id)reminderWithUUID:(id)arg1;
- (id)remindersMatchingPredicate:(id)arg1;
- (BOOL)removeCalendar:(id)arg1 commit:(BOOL)arg2 error:(id*)arg3;
- (BOOL)removeCalendar:(id)arg1 error:(id*)arg2;
- (BOOL)removeEvent:(id)arg1 span:(int)arg2 commit:(BOOL)arg3 error:(id*)arg4;
- (BOOL)removeEvent:(id)arg1 span:(int)arg2 error:(id*)arg3;
- (BOOL)removeReminder:(id)arg1 commit:(BOOL)arg2 error:(id*)arg3;
- (BOOL)removeReminder:(id)arg1 error:(id*)arg2;
- (BOOL)removeSource:(id)arg1 error:(id*)arg2;
- (void)reset;
- (void)rollback;
- (BOOL)saveCalendar:(id)arg1 commit:(BOOL)arg2 error:(id*)arg3;
- (BOOL)saveCalendar:(id)arg1 error:(id*)arg2;
- (BOOL)saveEvent:(id)arg1 span:(int)arg2 commit:(BOOL)arg3 error:(id*)arg4;
- (BOOL)saveEvent:(id)arg1 span:(int)arg2 error:(id*)arg3;
- (BOOL)saveReminder:(id)arg1 commit:(BOOL)arg2 error:(id*)arg3;
- (BOOL)saveReminder:(id)arg1 error:(id*)arg2;
- (BOOL)saveSource:(id)arg1 error:(id*)arg2;
- (int)sequenceNumber;
- (unsigned int)serverPort;
- (void)setCalendarQueue:(struct dispatch_queue_s { }*)arg1;
- (void)setDatabase:(id)arg1;
- (void)setDbChangedQueue:(struct dispatch_queue_s { }*)arg1;
- (void)setDefaultAllDayAlarmOffset:(id)arg1;
- (void)setDefaultCalendarForNewEvents:(id)arg1;
- (void)setDefaultCalendarForNewTasks:(id)arg1;
- (void)setDefaultTimedAlarmOffset:(id)arg1;
- (void)setDeletedObjects:(id)arg1;
- (void)setEventsAlertedAndSave:(id)arg1;
- (void)setFlags:(unsigned long)arg1;
- (void)setInsertedObjects:(id)arg1;
- (void)setObjectsPendingCommit:(id)arg1;
- (void)setPublicRegisteredObjects:(id)arg1;
- (void)setRegisteredObjects:(id)arg1;
- (void)setRegisteredQueue:(struct dispatch_queue_s { }*)arg1;
- (void)setTimeZone:(id)arg1;
- (void)setUnsavedChangesQueue:(struct dispatch_queue_s { }*)arg1;
- (void)setUpdatedObjects:(id)arg1;
- (void)set_calendars:(id)arg1;
- (void)set_sources:(id)arg1;
- (id)sourceWithIdentifier:(id)arg1;
- (id)sources;
- (id)stringForColor:(id)arg1;
- (id)timeZone;
- (int)unacknowledgedEventCount;
- (int)unreadEventCount;
- (struct dispatch_queue_s { }*)unsavedChangesQueue;
- (id)updatedObjects;

@end