/*
 *     Generated by class-dump 3.1.1.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2006 by Steve Nygard.
 */

#import <vmutils/NSMachOImage.h>

@interface NSMachOFileImage : NSMachOImage
{
}

+ (void)initialize;	// IMP=0x31883bd0
- (void)dealloc;	// IMP=0x31883cb4
- (void)finalize;	// IMP=0x31883da4
- (id)init;	// IMP=0x31883c3c
- (id)initWithHeader:(id)fp8;	// IMP=0x31883de4
- (id)initWithPath:(id)fp8 withCPUType:(int)fp12;	// IMP=0x31883e38
- (id)initWithSignature:(id)fp8;	// IMP=0x31883ec8
- (int)numberSegments;	// IMP=0x318842ec
- (void)readInSegments;	// IMP=0x31884380

@end

