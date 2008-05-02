/*
 *     Generated by class-dump 3.1.1.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2006 by Steve Nygard.
 */

#import <Message/Connection.h>

@class NSData, NSMutableData, NSString;

@interface POP3Connection : Connection
{
    NSMutableData *_sendBuffer;
    struct __CFDictionary *_listResults;
    struct __CFDictionary *_messageIdsByNumber;
    struct __CFDictionary *_numbersByMessageId;
    NSData *_apopTimeStamp;
    id _delegate;
    unsigned int _numberOfMessagesAvailable:24;
    unsigned int _state:4;
    unsigned int _delegateRespondsToReceivedNumberOfBytes:1;
    unsigned int _delegateRespondsToWillRetrieveMessageNumber:1;
    unsigned int _delegateRespondsToDidRetrieveMessageNumber:1;
    unsigned int _hidingPassword:1;
    NSString *_accountURL;
}

- (BOOL)_doBasicConnectionWithAccount:(id)fp8;	// IMP=0x30b5ae6d
- (int)_getListResults;	// IMP=0x30b592c5
- (int)_getUidlResults;	// IMP=0x30b59415
- (int)_retrieveMessage:(unsigned long)fp8 ofSize:(unsigned int)fp12 informDelegate:(BOOL)fp16 consumer:(id)fp20;	// IMP=0x30b59889
- (BOOL)authenticateUsingAccount:(id)fp8;	// IMP=0x30b58cc5
- (BOOL)authenticateUsingAccount:(id)fp8 authenticator:(id)fp12;	// IMP=0x30b5abe5
- (id)authenticationMechanisms;	// IMP=0x30b5afa1
- (id)capabilities;	// IMP=0x30b589c1
- (BOOL)connectUsingAccount:(id)fp8;	// IMP=0x30b58bed
- (void)dealloc;	// IMP=0x30b58959
- (int)dele:(unsigned long)fp8;	// IMP=0x30b599e9
- (id)delegate;	// IMP=0x30b59ef5
- (int)deleteMessagesOnServer:(struct __CFArray *)fp8;	// IMP=0x30b59db5
- (void)disableAPOP;	// IMP=0x30b59127
- (int)doStat;	// IMP=0x30b59145
- (int)fetchMessages:(struct __CFArray *)fp8;	// IMP=0x30b59d99
- (int)fetchMessages:(struct __CFArray *)fp8 intoQueue:(id)fp12 serverIDsByNumber:(struct __CFDictionary *)fp16;	// IMP=0x30b59b39
- (int)getMessageNumbers:(const struct __CFArray **)fp8 andMessageIdsByNumber:(const struct __CFDictionary **)fp12;	// IMP=0x30b59735
- (int)getMessageNumbers:(const struct __CFArray **)fp8 messageIdsByNumber:(const struct __CFDictionary **)fp12 numbersByMessageId:(const struct __CFDictionary **)fp16;	// IMP=0x30b59609
- (void)getTopOfMessageNumber:(unsigned long)fp8 intoMutableData:(id)fp12;	// IMP=0x30b59ac9
- (id)idForMessageNumber:(int)fp8;	// IMP=0x30b59751
- (id)init;	// IMP=0x30b5890d
- (int)list:(int)fp8;	// IMP=0x30b59239
- (BOOL)messagesAvailable;	// IMP=0x30b59b15
- (unsigned int)numberOfMessagesAvailable;	// IMP=0x30b59b31
- (int)quit;	// IMP=0x30b590b5
- (id)retainedMessageHeaderForMessageNumber:(unsigned long)fp8;	// IMP=0x30b59a41
- (int)retr:(unsigned long)fp8 consumer:(id)fp12 intoQueue:(id)fp16 idsByNumber:(struct __CFDictionary *)fp20 allowIncomplete:(BOOL)fp24 queueStatus:(char *)fp28;	// IMP=0x30b5a8fd
- (int)retr:(unsigned long)fp8 data:(id *)fp12;	// IMP=0x30b59921
- (int)retr:(unsigned long)fp8 dataConsumer:(id)fp12;	// IMP=0x30b599c5
- (unsigned int)serverMessageCount;	// IMP=0x30b596d9
- (void)setDelegate:(id)fp8;	// IMP=0x30b59e6d
- (unsigned long)sizeOfMessageNumber:(unsigned long)fp8;	// IMP=0x30b59ae9
- (BOOL)startTLSForAccount:(id)fp8;	// IMP=0x30b59ef9
- (BOOL)supportsAPOP;	// IMP=0x30b59119

@end
