@interface UITableViewCellLayoutManager : NSObject
{

}

+ _backgroundRectForCell:forIndentedState:
+ _adjustedBackgroundRectForCell:forIndentedState:
+ _adjustedBackgroundContentRectForCell:forIndentedState:
+ _reorderSeparatorRectForCell:offscreen:
+ _reorderControlRectForCell:offscreen:
+ _editingAccessoryRectForCell:offscreen:
+ _accessoryRectForCell:offscreen:
+ _editControlRectForCell:offscreen:
+ _contentRectForCell:forEditingState:showingDeleteConfirmation:
+ contentRectForCell:forState:
+ layoutSubviewsOfCell:
+ textLabelForCell:
+ detailTextLabelForCell:
+ editableTextFieldForCell:
+ imageViewForCell:
+ badgeForCell:
+ contentEndingRectForCell:forNewEditingState:
+ cell:willTransitionToState:
+ cell:didTransitionToState:
+ backgroundEndingRectForCell:forNewEditingState:
+ selectedBackgroundEndingRectForCell:forNewEditingState:
+ backgroundStartingRectForCell:forNewEditingState:
+ accessoryShouldAppearForCell:
+ editingAccessoryShouldAppearForCell:
+ reorderSeparatorShouldAppearForCell:
+ reorderControlShouldAppearForCell:
+ editControlShouldAppearForCell:
+ deleteConfirmationRectForCell:
+ defaultTextLabelFontSizeForCell:
+ defaultTextLabelFontForCell:
+ defaultLabelForCell:ofClass:
+ defaultImageViewForCell:
+ defaultLabelForCell:
+ defaultBadgeForCell:
+ editControlEndingRectForCell:forNewEditingState:
+ editControlShouldFadeForCell:
+ reorderControlEndingRectForCell:forNewEditingState:showingDeleteConfirmation:
+ reorderControlShouldFadeForCell:
+ reorderSeparatorEndingRectForCell:forNewEditingState:showingDeleteConfirmation:
+ reorderSeparatorShouldFadeForCell:
+ accessoryEndingRectForCell:forNewEditingState:showingDeleteConfirmation:
+ accessoryShouldFadeForCell:
+ editingAccessoryEndingRectForCell:forNewEditingState:showingDeleteConfirmation:
+ editingAccessoryShouldFadeForCell:
+ contentEndingRectForCell:forDisplayOfDeleteConfirmation:
+ contentIndentationForCell:
+ textRectForCell:
+ editControlStartingRectForCell:forNewEditingState:
+ reorderControlStartingRectForCell:forNewEditingState:showingDeleteConfirmation:
+ reorderSeparatorStartingRectForCell:forNewEditingState:showingDeleteConfirmation:
+ accessoryStartingRectForCell:forNewEditingState:showingDeleteConfirmation:
+ editingAccessoryStartingRectForCell:forNewEditingState:showingDeleteConfirmation:
+ contentStartingRectForCell:forDisplayOfDeleteConfirmation:
+ contentStartingRectForCell:forNewEditingState:
+ defaultDetailTextLabelFontSizeForCell:
+ defaultEditableTextFieldForCell:
- _backgroundRectForCell:forIndentedState:
- _adjustedBackgroundRectForCell:forIndentedState:
- _adjustedBackgroundContentRectForCell:forIndentedState:
- _reorderSeparatorRectForCell:offscreen:
- _reorderControlRectForCell:offscreen:
- _editingAccessoryRectForCell:offscreen:
- _accessoryRectForCell:offscreen:
- _editControlRectForCell:offscreen:
- _contentRectForCell:forEditingState:showingDeleteConfirmation:
- contentRectForCell:forState:
- layoutSubviewsOfCell:
- textLabelForCell:
- detailTextLabelForCell:
- editableTextFieldForCell:
- imageViewForCell:
- badgeForCell:
- contentEndingRectForCell:forNewEditingState:
- cell:willTransitionToState:
- cell:didTransitionToState:
- backgroundEndingRectForCell:forNewEditingState:
- selectedBackgroundEndingRectForCell:forNewEditingState:
- backgroundStartingRectForCell:forNewEditingState:
- accessoryShouldAppearForCell:
- editingAccessoryShouldAppearForCell:
- reorderSeparatorShouldAppearForCell:
- reorderControlShouldAppearForCell:
- editControlShouldAppearForCell:
- deleteConfirmationRectForCell:
- defaultTextLabelFontSizeForCell:
- defaultTextLabelFontForCell:
- defaultLabelForCell:ofClass:
- defaultImageViewForCell:
- defaultLabelForCell:
- defaultBadgeForCell:
- editControlEndingRectForCell:forNewEditingState:
- editControlShouldFadeForCell:
- reorderControlEndingRectForCell:forNewEditingState:showingDeleteConfirmation:
- reorderControlShouldFadeForCell:
- reorderSeparatorEndingRectForCell:forNewEditingState:showingDeleteConfirmation:
- reorderSeparatorShouldFadeForCell:
- accessoryEndingRectForCell:forNewEditingState:showingDeleteConfirmation:
- accessoryShouldFadeForCell:
- editingAccessoryEndingRectForCell:forNewEditingState:showingDeleteConfirmation:
- editingAccessoryShouldFadeForCell:
- contentEndingRectForCell:forDisplayOfDeleteConfirmation:
- contentIndentationForCell:
- textRectForCell:
- editControlStartingRectForCell:forNewEditingState:
- reorderControlStartingRectForCell:forNewEditingState:showingDeleteConfirmation:
- reorderSeparatorStartingRectForCell:forNewEditingState:showingDeleteConfirmation:
- accessoryStartingRectForCell:forNewEditingState:showingDeleteConfirmation:
- editingAccessoryStartingRectForCell:forNewEditingState:showingDeleteConfirmation:
- contentStartingRectForCell:forDisplayOfDeleteConfirmation:
- contentStartingRectForCell:forNewEditingState:
- defaultDetailTextLabelFontSizeForCell:
- defaultEditableTextFieldForCell:
@end