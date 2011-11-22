/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SAAceView.h"

@class NSArray;

@interface SAUISnippetList : SAAceView {
}
@property(copy, nonatomic) NSArray* items;
@property(retain, nonatomic) SAAceView* headerView;
+ (id)snippetList;
+ (id)snippetListWithDictionary:(id)dictionary context:(id)context;
- (id)encodedClassName;
- (id)groupIdentifier;
@end
