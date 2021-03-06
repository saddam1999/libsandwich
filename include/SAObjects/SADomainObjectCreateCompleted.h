/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SAServerBoundCommand.h"
#import "SADomainObjectCommand.h"
#import "SABaseCommand.h"

@class NSString, NSURL;

@interface SADomainObjectCreateCompleted : SABaseCommand <SAServerBoundCommand, SADomainObjectCommand> {
}
@property(copy, nonatomic) NSString* aceId;
@property(copy, nonatomic) NSString* refId;
@property(copy, nonatomic) NSURL* identifier;
+ (id)domainObjectCreateCompleted;
+ (id)domainObjectCreateCompletedWithDictionary:(id)dictionary context:(id)context;
- (id)encodedClassName;
- (id)groupIdentifier;
@end

