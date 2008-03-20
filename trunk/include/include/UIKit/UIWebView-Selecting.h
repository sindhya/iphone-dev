/*
 *     Generated by class-dump 3.1.1.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2006 by Steve Nygard.
 */

#import <UIKit/UIWebView.h>

@interface UIWebView (Selecting)
+ (id)textLoupeWindow;	// IMP=0x3243d71c
- (BOOL)autocorrectPromptCapturedMouseDown:(struct __GSEvent *)fp8;	// IMP=0x3243dd2c
- (void)cancelAutoscroll;	// IMP=0x3243cffc
- (struct CGPoint)constrainedPoint:(struct CGPoint)fp8;	// IMP=0x3243ce4c
- (void)createTextLoupeIfNeeded;	// IMP=0x3243d958
- (void)fadeTextLoupe;	// IMP=0x3243dcc4
- (BOOL)mouseEventsChangeSelection;	// IMP=0x3243cd38
- (void)removeTextLoupe;	// IMP=0x3243dc2c
- (void)selectionMouseDown:(struct __GSEvent *)fp8;	// IMP=0x3243d0f0
- (void)selectionMouseDragged:(struct __GSEvent *)fp8;	// IMP=0x3243d22c
- (void)selectionMouseUp:(struct __GSEvent *)fp8;	// IMP=0x3243d41c
- (void)setTextLoupeActive:(BOOL)fp8;	// IMP=0x3243d940
- (BOOL)shouldChangeSelectionForEvent:(struct __GSEvent *)fp8;	// IMP=0x3243cd48
- (void)startAutoscroll:(struct CGPoint)fp8;	// IMP=0x3243de2c
- (id)textLoupe;	// IMP=0x3243da98
- (BOOL)textLoupeActive;	// IMP=0x3243d934
- (void)textLoupeTimerAction;	// IMP=0x3243d044
- (void)updateTextLoupe:(struct CGPoint)fp8;	// IMP=0x3243dadc
- (struct CGRect)visibleRectForSelecting;	// IMP=0x3243cd50
@end
