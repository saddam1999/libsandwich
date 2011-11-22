/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "assistantd-Structs.h"

@class NSMutableData;

__attribute__((visibility("hidden")))
@interface ADAceInputData : XXUnknownSuperclass {
	NSMutableData* _pendingData;
	unsigned _currentIndex;
	BOOL _error;
	BOOL _readHeader;
	BOOL _complete;
	BOOL _compressed;
	z_stream_s _z;
	unsigned char _zbuffer[8192];
}
@property(readonly, assign) BOOL complete;
@property(readonly, assign) BOOL error;
- (BOOL)getParsedPacket:(ADAceParsedPacket*)packet withError:(id*)error context:(id)context;
- (BOOL)parseHeaderWithError:(id*)error;
- (unsigned)remainingLength;
- (BOOL)appendData:(id)data error:(id*)error;
- (void)dealloc;
- (id)init;
@end
