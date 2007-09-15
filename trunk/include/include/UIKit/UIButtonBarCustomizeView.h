/*
 *     Generated by class-dump 3.1.1.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2006 by Steve Nygard.
 */

#import <UIKit/UIView.h>

@class NSArray, NSMutableArray, UIButtonBar, UIImageView;

@interface UIButtonBarCustomizeView : UIView
{
    UIButtonBar *_buttonBar;
    NSArray *_availableButtons;
    NSArray *_currentButtons;
    NSMutableArray *_fixedButtons;
    UIView *_draggingView;
    UIImageView *_ghostView;
    UIImageView *_replacementGlow;
    UIView *_replaceButton;
    struct CGPoint _startPoint;
}

- (void)_finishCustomizeMouseUpChangeAnimation:(id)fp8 finished:(id)fp12 context:(id)fp16;	// IMP=0x3242105c
- (void)adjustDragImage:(struct __GSEvent *)fp8;	// IMP=0x32425dc8
- (id)buttonAtEvent:(struct __GSEvent *)fp8;	// IMP=0x32426b74
- (void)buttonBarMouseDown:(struct __GSEvent *)fp8;	// IMP=0x32420c64
- (void)buttonBarMouseDragged:(struct __GSEvent *)fp8;	// IMP=0x32420d34
- (void)buttonBarMouseUp:(struct __GSEvent *)fp8;	// IMP=0x32420e9c
- (BOOL)canHandleSwipes;	// IMP=0x32420c5c
- (void)dealloc;	// IMP=0x324202ac
- (void)layoutSubviews;	// IMP=0x32427378
- (void)mouseDown:(struct __GSEvent *)fp8;	// IMP=0x32426d14
- (void)mouseDragged:(struct __GSEvent *)fp8;	// IMP=0x32426888
- (void)mouseUp:(struct __GSEvent *)fp8;	// IMP=0x32420578
- (void)setButtonBar:(id)fp8 currentButtons:(id)fp12 availableButtons:(id)fp16;	// IMP=0x32420344

@end
