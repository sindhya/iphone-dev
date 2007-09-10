/*
 *     Generated by class-dump 3.1.1.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2006 by Steve Nygard.
 */

#import <UIKit/UITable.h>

@class UIPickerScrollAnimation;

@interface UIPickerTable : UITable
{
    struct CGRect _selectionBarRect;
    UIPickerScrollAnimation *_scrollAnimation;
    int _selectionBarRow;
    struct CGPoint _lastOffset;
    int _lastClickRow;
    unsigned int _allowSelectingCells:1;
    unsigned int _allowsMultipleSelection:1;
    unsigned int _lastShouldStick:1;
    unsigned int _reserved:29;
}

- (void)_didMoveFromWindow:(id)fp8 toWindow:(id)fp12;	// IMP=0x323ad6a4
- (void)_pickerScrollAnimationEnded;	// IMP=0x323ad670
- (void)_scrollSelectionBarRect:(struct CGRect)fp8 animated:(BOOL)fp24;	// IMP=0x323ad020
- (BOOL)allowsMultipleSelection;	// IMP=0x323acff8
- (void)animationSetOffset:(struct CGPoint)fp8;	// IMP=0x323ad508
- (BOOL)canHandleSwipes;	// IMP=0x323acfc8
- (void)contentMouseUpInView:(id)fp8 withEvent:(struct __GSEvent *)fp12;	// IMP=0x323ad258
- (BOOL)fixupCenterCellToSelectionBar;	// IMP=0x323ad970
- (id)initWithFrame:(struct CGRect)fp8;	// IMP=0x323acf14
- (int)lastClickRow;	// IMP=0x323acfd0
- (void)mouseDown:(struct __GSEvent *)fp8;	// IMP=0x323ad52c
- (void)mouseUp:(struct __GSEvent *)fp8;	// IMP=0x323ad5c8
- (struct CGPoint)newOffsetWithCenteredRectFromOffset:(struct CGPoint)fp8;	// IMP=0x323ad73c
- (void)removeFromSuperview;	// IMP=0x323ada64
- (BOOL)scrollCenterCellToSelectionBar;	// IMP=0x323ad8c8
- (void)selectCell:(id)fp8 inRow:(int)fp12 column:(int)fp16 withFade:(BOOL)fp20;	// IMP=0x323ad0dc
- (void)selectRow:(int)fp8 animated:(BOOL)fp12;	// IMP=0x323ad3f0
- (id)selectedTableCell;	// IMP=0x323ad3b0
- (struct CGRect)selectionBarRect;	// IMP=0x323ad4f0
- (int)selectionBarRow;	// IMP=0x323ad37c
- (void)setAllowsMultipleSelection:(BOOL)fp8;	// IMP=0x323acfe0
- (void)setAllowsSelectingRows:(BOOL)fp8;	// IMP=0x323ad008
- (void)setLastClickRow:(int)fp8;	// IMP=0x323acfd8
- (void)setRowHeight:(float)fp8;	// IMP=0x323ada18
- (void)setSelectionBarRect:(struct CGRect)fp8;	// IMP=0x323ad474
- (void)updateSelectionBarRow;	// IMP=0x323adaac

@end

