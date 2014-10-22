@interface UITextView : UIScrollView
{
	id _private;
	id _textStorage;
	id _textContainer;
	id _layoutManager;
	id _containerView;
	id _inputDelegate;
	id _tokenizer;
	id _inputController;
	id _interactionAssistant;
	id _textInputTraits;
	id _autoscroll;
	struct _tvFlags;
	id _linkInteractionItem;
	id _scrollTarget;
	struct _scrollTargetOffset;
	usigned long long _dataDetectorTypes;
	double _preferredMaxLayoutWidth;
	id _inputAccessoryView;
	BOOL _clearsOnInsertion;
	id _inputView;
}

+ mightHaveLinks
+ tapLinkAtPoint:
+ isInteractingWithLink
+ startInteractionWithLinkAtPoint:
+ updateInteractionWithLinkAtPoint:
+ validateInteractionWithLinkAtPoint:
+ cancelInteractionWithLink
+ startLongInteractionWithLinkAtPoint:
+ willInteractWithLinkAtPoint:
+ _interactableItemAtPoint:
+ _highlightLinkAtPoint:
+ _resetLinkInteraction
+ _presentationRectForLinkAtRange:
+ _finishHandlingInteraction:
+ encodeRestorableStateWithCoder:
+ decodeRestorableStateWithCoder:
+ _setDrawsDebugBaselines:
+ _drawsDebugBaselines
+ _printFormatterClass
+ drawRect:forViewPrintFormatter:
+ isAccessibilityElementByDefault
+ isElementAccessibilityExposedToInterfaceBuilder
+ dd_newOperation
+ initWithFrame:
+ dealloc
+ initWithCoder:
+ _populateArchivedSubviews:
+ encodeWithCoder:
+ hitTest:withEvent:
+ _intrinsicSizeWithinSize:
+ respondsToSelector:
+ setFrame:
+ layoutSubviews
+ setBounds:
+ sizeThatFits:
+ canPerformAction:withSender:
+ undoManager
+ resignFirstResponder
+ methodSignatureForSelector:
+ increaseSize:
+ decreaseSize:
+ becomeFirstResponder
+ _isDisplayingShortcutViewController
+ isEditable
+ lineHeight
+ canBecomeFirstResponder
+ tintColorDidChange
+ text
+ setScrollEnabled:
+ _scrollViewAnimationEnded:finished:
+ setFont:
+ font
+ intrinsicContentSize
+ setAttributedText:
+ setTextColor:
+ setText:
+ attributedText
+ setTextAlignment:
+ isEditing
+ layoutManager
+ _textStorageDidProcessEditing:
+ textStorage
+ interactionAssistant
+ selectionView
+ keyboardInput:shouldInsertText:isMarkedText:
+ keyboardInput:shouldReplaceTextInRange:replacementText:
+ keyboardInputShouldDelete:
+ keyboardInputChanged:
+ keyboardInputChangedSelection:
+ scrollSelectionToVisible:
+ textColor
+ cancelAutoscroll
+ textInputView
+ selectedRange
+ setTypingAttributes:
+ _textInputTraits
+ textAlignment
+ typingAttributes
+ beginningOfDocument
+ endOfDocument
+ textRangeFromPosition:toPosition:
+ textInRange:
+ inputDelegate
+ setSelectedRange:
+ addTextAlternativesDisplayStyleToRange:
+ caretRectForPosition:
+ _scrollRangeToVisible:animated:
+ hasText
+ insertText:
+ deleteBackward
+ replaceRange:withText:
+ replaceRangeWithTextWithoutClosingTyping:replacementText:
+ selectedTextRange
+ setSelectedTextRange:
+ markedTextRange
+ markedTextStyle
+ setMarkedTextStyle:
+ setMarkedText:selectedRange:
+ unmarkText
+ positionFromPosition:offset:
+ positionFromPosition:inDirection:offset:
+ comparePosition:toPosition:
+ offsetFromPosition:toPosition:
+ positionWithinRange:farthestInDirection:
+ characterRangeByExtendingPosition:inDirection:
+ setInputDelegate:
+ tokenizer
+ baseWritingDirectionForPosition:inDirection:
+ setBaseWritingDirection:forRange:
+ firstRectForRange:
+ selectionRectsForRange:
+ closestPositionToPoint:
+ closestPositionToPoint:withinRange:
+ characterRangeAtPoint:
+ insertDictationResult:withCorrectionIdentifier:
+ insertDictationResultPlaceholder
+ frameForDictationResultPlaceholder:
+ removeDictationResultPlaceholder:willInsertResult:
+ rangeWithTextAlternatives:atPosition:
+ metadataDictionariesForDictationResults
+ beginSelectionChange
+ endSelectionChange
+ forwardingTargetForSelector:
+ textInput:shouldChangeCharactersInRange:replacementText:
+ textInputDidChange:
+ textInputDidChangeSelection:
+ visibleRect
+ textContainerInset
+ textContainer
+ linkTextAttributes
+ textStylingAtPosition:inDirection:
+ selectionAffinity
+ startAutoscroll:
+ updateConstraints
+ _containerView
+ canResignFirstResponder
+ inputView
+ inputAccessoryView
+ setAllowsEditingTextAttributes:
+ setEditable:
+ setLineHeight:
+ setDataDetectorTypes:
+ allowsEditingTextAttributes
+ dataDetectorTypes
+ webView
+ setInputView:
+ setInputAccessoryView:
+ selectAll:
+ visibleTextRect
+ setClearsOnInsertion:
+ makeTextWritingDirectionRightToLeft:
+ makeTextWritingDirectionLeftToRight:
+ replace:
+ cut:
+ copy:
+ paste:
+ _define:
+ _addShortcut:
+ toggleBoldface:
+ toggleItalics:
+ toggleUnderline:
+ _showTextStyleOptions:
+ setContentToHTMLString:
+ initWithFrame:font:
+ _setDictationResult:withCorrectionIdentifier:
+ clearsOnInsertion
+ disableClearsOnInsertion
+ updateSelection
+ selectedText
+ select:
+ _promptForReplace:
+ setBecomesEditableWithGestures:
+ marginTop
+ setMarginTop:
+ scrollRangeToVisible:
+ automaticallySelectedOverlay
+ _isDisplayingReferenceLibraryViewController
+ _preferredMaxLayoutWidth
+ _needsDoubleUpdateConstraintsPass
+ nsis_valueOfVariable:didChangeInEngine:
+ _prepareForFirstIntrinsicContentSizeCalculation
+ _prepareForSecondIntrinsicContentSizeCalculationWithEngine:
+ _setInSecondConstraintsPass:
+ setContinuousSpellCheckingEnabled:
+ _insertAttributedTextWithoutClosingTyping:
+ _textInputViewForAddingGestureRecognizers
+ _isInteractiveTextSelectionDisabled
+ initWithFrame:textContainer:
+ _setInteractiveTextSelectionDisabled:
+ _observedTextViewDidChange:
+ setSelectable:
+ _commonInitWithTextContainer:isDecoding:isEditable:isSelectable:
+ setUsesTiledViews:
+ isSelectable
+ _shouldStartDataDetectors
+ _startDataDetectors
+ _totalNumberOfTextViewsInLayoutManager
+ _visibleRangeWithLayout:
+ _contentOffsetForScrollToVisible:
+ _setScrollTarget:
+ visibleRectIgnoringKeyboard
+ _resyncContainerFrameForNonAutolayout
+ _ensureSelectionVisible
+ _shouldScrollEnclosingScrollView
+ _scrollSelectionToVisibleInContainingScrollView
+ _currentPreferredMaxLayoutWidth
+ _rectForScrollToVisible:
+ _resetDataDetectorsResults
+ usesTiledViews
+ _restoreScrollPosition:animated:
+ setTextContainerInset:
+ setLinkTextAttributes:
+ _selectionMayChange:
+ _registerUndoOperationForReplacementWithActionName:replacementText:
+ _effectiveDataDetectorTypes
+ initReadonlyAndUnselectableWithFrame:textContainer:
+ _setPreferredMaxLayoutWidth:
+ _restorableScrollPosition
+ _mightHaveSelection
+ _cancelDataDetectors
- mightHaveLinks
- tapLinkAtPoint:
- isInteractingWithLink
- startInteractionWithLinkAtPoint:
- updateInteractionWithLinkAtPoint:
- validateInteractionWithLinkAtPoint:
- cancelInteractionWithLink
- startLongInteractionWithLinkAtPoint:
- willInteractWithLinkAtPoint:
- _interactableItemAtPoint:
- _highlightLinkAtPoint:
- _resetLinkInteraction
- _presentationRectForLinkAtRange:
- _finishHandlingInteraction:
- encodeRestorableStateWithCoder:
- decodeRestorableStateWithCoder:
- _setDrawsDebugBaselines:
- _drawsDebugBaselines
- _printFormatterClass
- drawRect:forViewPrintFormatter:
- isAccessibilityElementByDefault
- isElementAccessibilityExposedToInterfaceBuilder
- dd_newOperation
- initWithFrame:
- dealloc
- initWithCoder:
- _populateArchivedSubviews:
- encodeWithCoder:
- hitTest:withEvent:
- _intrinsicSizeWithinSize:
- respondsToSelector:
- setFrame:
- layoutSubviews
- setBounds:
- sizeThatFits:
- canPerformAction:withSender:
- undoManager
- resignFirstResponder
- methodSignatureForSelector:
- increaseSize:
- decreaseSize:
- becomeFirstResponder
- _isDisplayingShortcutViewController
- isEditable
- lineHeight
- canBecomeFirstResponder
- tintColorDidChange
- text
- setScrollEnabled:
- _scrollViewAnimationEnded:finished:
- setFont:
- font
- intrinsicContentSize
- setAttributedText:
- setTextColor:
- setText:
- attributedText
- setTextAlignment:
- isEditing
- layoutManager
- _textStorageDidProcessEditing:
- textStorage
- interactionAssistant
- selectionView
- keyboardInput:shouldInsertText:isMarkedText:
- keyboardInput:shouldReplaceTextInRange:replacementText:
- keyboardInputShouldDelete:
- keyboardInputChanged:
- keyboardInputChangedSelection:
- scrollSelectionToVisible:
- textColor
- cancelAutoscroll
- textInputView
- selectedRange
- setTypingAttributes:
- _textInputTraits
- textAlignment
- typingAttributes
- beginningOfDocument
- endOfDocument
- textRangeFromPosition:toPosition:
- textInRange:
- inputDelegate
- setSelectedRange:
- addTextAlternativesDisplayStyleToRange:
- caretRectForPosition:
- _scrollRangeToVisible:animated:
- hasText
- insertText:
- deleteBackward
- replaceRange:withText:
- replaceRangeWithTextWithoutClosingTyping:replacementText:
- selectedTextRange
- setSelectedTextRange:
- markedTextRange
- markedTextStyle
- setMarkedTextStyle:
- setMarkedText:selectedRange:
- unmarkText
- positionFromPosition:offset:
- positionFromPosition:inDirection:offset:
- comparePosition:toPosition:
- offsetFromPosition:toPosition:
- positionWithinRange:farthestInDirection:
- characterRangeByExtendingPosition:inDirection:
- setInputDelegate:
- tokenizer
- baseWritingDirectionForPosition:inDirection:
- setBaseWritingDirection:forRange:
- firstRectForRange:
- selectionRectsForRange:
- closestPositionToPoint:
- closestPositionToPoint:withinRange:
- characterRangeAtPoint:
- insertDictationResult:withCorrectionIdentifier:
- insertDictationResultPlaceholder
- frameForDictationResultPlaceholder:
- removeDictationResultPlaceholder:willInsertResult:
- rangeWithTextAlternatives:atPosition:
- metadataDictionariesForDictationResults
- beginSelectionChange
- endSelectionChange
- forwardingTargetForSelector:
- textInput:shouldChangeCharactersInRange:replacementText:
- textInputDidChange:
- textInputDidChangeSelection:
- visibleRect
- textContainerInset
- textContainer
- linkTextAttributes
- textStylingAtPosition:inDirection:
- selectionAffinity
- startAutoscroll:
- updateConstraints
- _containerView
- canResignFirstResponder
- inputView
- inputAccessoryView
- setAllowsEditingTextAttributes:
- setEditable:
- setLineHeight:
- setDataDetectorTypes:
- allowsEditingTextAttributes
- dataDetectorTypes
- webView
- setInputView:
- setInputAccessoryView:
- selectAll:
- visibleTextRect
- setClearsOnInsertion:
- makeTextWritingDirectionRightToLeft:
- makeTextWritingDirectionLeftToRight:
- replace:
- cut:
- copy:
- paste:
- _define:
- _addShortcut:
- toggleBoldface:
- toggleItalics:
- toggleUnderline:
- _showTextStyleOptions:
- setContentToHTMLString:
- initWithFrame:font:
- _setDictationResult:withCorrectionIdentifier:
- clearsOnInsertion
- disableClearsOnInsertion
- updateSelection
- selectedText
- select:
- _promptForReplace:
- setBecomesEditableWithGestures:
- marginTop
- setMarginTop:
- scrollRangeToVisible:
- automaticallySelectedOverlay
- _isDisplayingReferenceLibraryViewController
- _preferredMaxLayoutWidth
- _needsDoubleUpdateConstraintsPass
- nsis_valueOfVariable:didChangeInEngine:
- _prepareForFirstIntrinsicContentSizeCalculation
- _prepareForSecondIntrinsicContentSizeCalculationWithEngine:
- _setInSecondConstraintsPass:
- setContinuousSpellCheckingEnabled:
- _insertAttributedTextWithoutClosingTyping:
- _textInputViewForAddingGestureRecognizers
- _isInteractiveTextSelectionDisabled
- initWithFrame:textContainer:
- _setInteractiveTextSelectionDisabled:
- _observedTextViewDidChange:
- setSelectable:
- _commonInitWithTextContainer:isDecoding:isEditable:isSelectable:
- setUsesTiledViews:
- isSelectable
- _shouldStartDataDetectors
- _startDataDetectors
- _totalNumberOfTextViewsInLayoutManager
- _visibleRangeWithLayout:
- _contentOffsetForScrollToVisible:
- _setScrollTarget:
- visibleRectIgnoringKeyboard
- _resyncContainerFrameForNonAutolayout
- _ensureSelectionVisible
- _shouldScrollEnclosingScrollView
- _scrollSelectionToVisibleInContainingScrollView
- _currentPreferredMaxLayoutWidth
- _rectForScrollToVisible:
- _resetDataDetectorsResults
- usesTiledViews
- _restoreScrollPosition:animated:
- setTextContainerInset:
- setLinkTextAttributes:
- _selectionMayChange:
- _registerUndoOperationForReplacementWithActionName:replacementText:
- _effectiveDataDetectorTypes
- initReadonlyAndUnselectableWithFrame:textContainer:
- _setPreferredMaxLayoutWidth:
- _restorableScrollPosition
- _mightHaveSelection
- _cancelDataDetectors
@end