@interface MailSettingsPlugin : NSObject
{
	id _allMailAccounts;
	id _rootController;
	id _parentController;
	id _signatureLock;
	id _signatureValue;
	int _accountsChangedNotifyToken;
}

+ dealloc
+ signatureDidChange:
+ _mailAccountsDidChange
+ _refreshAccounts
+ _reloadMailAccounts
+ setLinesOfPreview:withSpecifier:
+ linesOfPreview:
+ linesOfPreviewTitles
+ setShowToCC:withSpecifier:
+ showToCC:
+ setFlagStyle:withSpecifier:
+ flagStyle:
+ setConfirmDelete:withSpecifier:
+ confirmDelete:
+ setLoadRemoteImages:withSpecifier:
+ loadRemoteImages:
+ setEnableThreading:withSpecifier:
+ enableThreading:
+ setCCSelf:withSpecifier:
+ ccSelf:
+ setCurrentQuoteLevel:withSpecifier:
+ currentQuoteLevel:
+ setCurrentSignature:withSpecifier:
+ getCurrentSignatureAsynchronously:
+ _shouldShowDefaultAccountButton
+ setDefaultSendingAccount:withSpecifier:
+ defaultSendingAccount:
+ setGlobalGenericPreference:withSpecifier:
+ globalGenericPreference:
+ saveSystemLog:
+ getCurrentSignatureSynchronously:
+ accountValuesForSpecifier:
+ accountTitlesForSpecifier:
+ setGenericPreference:withSpecifier:
+ genericPreference:
+ parentControllerWillDisappear
+ footerText
+ shouldLoadSpecifiersLazily
+ initWithParentController:
+ specifiers
+ headerText
- dealloc
- signatureDidChange:
- _mailAccountsDidChange
- _refreshAccounts
- _reloadMailAccounts
- setLinesOfPreview:withSpecifier:
- linesOfPreview:
- linesOfPreviewTitles
- setShowToCC:withSpecifier:
- showToCC:
- setFlagStyle:withSpecifier:
- flagStyle:
- setConfirmDelete:withSpecifier:
- confirmDelete:
- setLoadRemoteImages:withSpecifier:
- loadRemoteImages:
- setEnableThreading:withSpecifier:
- enableThreading:
- setCCSelf:withSpecifier:
- ccSelf:
- setCurrentQuoteLevel:withSpecifier:
- currentQuoteLevel:
- setCurrentSignature:withSpecifier:
- getCurrentSignatureAsynchronously:
- _shouldShowDefaultAccountButton
- setDefaultSendingAccount:withSpecifier:
- defaultSendingAccount:
- setGlobalGenericPreference:withSpecifier:
- globalGenericPreference:
- saveSystemLog:
- getCurrentSignatureSynchronously:
- accountValuesForSpecifier:
- accountTitlesForSpecifier:
- setGenericPreference:withSpecifier:
- genericPreference:
- parentControllerWillDisappear
- footerText
- shouldLoadSpecifiersLazily
- initWithParentController:
- specifiers
- headerText
@end