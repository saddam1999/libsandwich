/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SAReminderTrigger.h"

@class NSURL, NSString, SALocation;

@interface SAReminderLocationTrigger : SAReminderTrigger {
}
@property(copy, nonatomic) NSString* timing;
@property(retain, nonatomic) SALocation* location;
@property(copy, nonatomic) NSURL* contactIdentifier;
+ (id)locationTrigger;
+ (id)locationTriggerWithDictionary:(id)dictionary context:(id)context;
- (id)encodedClassName;
- (id)groupIdentifier;
@end

