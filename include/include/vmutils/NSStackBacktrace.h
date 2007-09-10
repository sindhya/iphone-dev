/*
 *     Generated by class-dump 3.1.1.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2006 by Steve Nygard.
 */

#import "NSObject.h"

@class NSData;

@interface NSStackBacktrace : NSObject
{
    NSData *_backtrace;	// 4 = 0x4
    int _count;	// 8 = 0x8
    unsigned int _thread;	// 12 = 0xc
    unsigned int _task;	// 16 = 0x10
    BOOL _threadState;	// 20 = 0x14
}

- (void)_fixupStack:(id)fp8 memoryCache:(id)fp12;	// IMP=0x318a87f0
- (unsigned int *)backtrace;	// IMP=0x318a86b0
- (unsigned int)backtraceCount;	// IMP=0x318a86d0
- (int)compare:(id)fp8;	// IMP=0x318a8998
- (void)dealloc;	// IMP=0x318a8c98
- (id)description;	// IMP=0x318a86e0
- (id)descriptionWithSymbols:(id)fp8;	// IMP=0x318a884c
- (BOOL)executingInRange:(struct _NSRange)fp8;	// IMP=0x318a8b9c
- (BOOL)executingInRangeArray:(id)fp8;	// IMP=0x318a8c00
- (void)finalize;	// IMP=0x318a8cf0
- (id)initWithBacktrace:(unsigned int *)fp8 count:(int)fp12 task:(unsigned int)fp16 thread:(unsigned int)fp20;	// IMP=0x318a8648
- (id)initWithNullTerminatedBacktrace:(unsigned int *)fp8;	// IMP=0x318a8a98
- (BOOL)isNull;	// IMP=0x318a8b80
- (void)setLength:(int)fp8;	// IMP=0x318a8a90
- (void)setThreadState:(int)fp8;	// IMP=0x318a8c88
- (unsigned int)stackFrame:(int)fp8 inverted:(BOOL)fp12;	// IMP=0x318a8b30
- (unsigned int)thread;	// IMP=0x318a86d8
- (BOOL)threadState;	// IMP=0x318a8c90

@end

