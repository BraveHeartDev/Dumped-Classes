@interface CKTranscriptDataRow : NSObject
{
	BOOL _hasTail;
	id _guid;
	id _object;
	id _message;
	struct _frame;
}

+ cellClass
+ attributeForKey:
+ dealloc
+ size
+ setFrame:
+ frame
+ isEqual:
+ description
+ isEditable
+ message
+ object
+ setMessage:
+ setObject:
+ rowSize
+ setHasTail:
+ hasTail
+ textAlignmentInsets
+ contentAlignmentInsets
+ containsHyperlink
+ wantsDrawerLayout
+ cellIdentifier
+ wantsPrewarmForDisplay
+ prewarmForDisplay
+ transcriptOrientation
+ transcriptUsesTextAlignmentInsets
+ contactImage
+ wantsContactImageLayout
+ removeAttributes
+ displayDuringSend
+ removeSize
+ initWithObject:forMessage:
+ removeAttributeForKey:
+ rowAttributes
+ attributedTimestamp
+ guid
+ setAttribute:forKey:
+ isTypingIndicator
- cellClass
- attributeForKey:
- dealloc
- size
- setFrame:
- frame
- isEqual:
- description
- isEditable
- message
- object
- setMessage:
- setObject:
- rowSize
- setHasTail:
- hasTail
- textAlignmentInsets
- contentAlignmentInsets
- containsHyperlink
- wantsDrawerLayout
- cellIdentifier
- wantsPrewarmForDisplay
- prewarmForDisplay
- transcriptOrientation
- transcriptUsesTextAlignmentInsets
- contactImage
- wantsContactImageLayout
- removeAttributes
- displayDuringSend
- removeSize
- initWithObject:forMessage:
- removeAttributeForKey:
- rowAttributes
- attributedTimestamp
- guid
- setAttribute:forKey:
- isTypingIndicator
@end