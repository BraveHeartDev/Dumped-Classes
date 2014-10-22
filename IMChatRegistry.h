@interface IMChatRegistry : NSObject
{
	id _allChats;
	id _chatGUIDToCurrentThreadMap;
	id _chatGUIDToInfoMap;
	id _chatGUIDToChatMap;
	id _threadNameToChatMap;
	id _allChatsInThreadNameMap;
	id _pendingQueries;
	id _waitingForQueries;
	id _historyModificationStamp;
	id _markAsReadTimer;
	double _timerStartTimeInterval;
	BOOL _firstLoad;
	BOOL _loading;
	BOOL _daemonHadTerminated;
	BOOL _wantsHistoryReload;
	BOOL _postMessageSentNotifications;
	usigned long long _defaultNumberOfMessagesToLoad;
	usigned long long _daemonUnreadCount;
	long long _daemonLastFailedMessageID;
}

+ _ck_chatForHandles:createIfNecessary:
+ _ck_chatForEntities:createIfNecessary:
+ setupComplete:info:
+ setupComplete
+ chat:updated:
+ chat:propertiesUpdated:
+ leftChat:
+ account:chat:style:chatProperties:invitationReceived:
+ account:chat:style:chatProperties:updateProperties:
+ account:chat:style:chatProperties:messageSent:
+ account:chat:style:chatProperties:messageReceived:
+ account:chat:style:chatProperties:messageUpdated:
+ account:chat:style:chatProperties:notifySentMessage:sendTime:
+ account:chat:style:chatProperties:messagesUpdated:
+ account:chat:style:chatProperties:error:
+ account:chat:style:chatProperties:statusChanged:handleInfo:
+ account:chat:style:chatProperties:member:statusChanged:
+ historyQuery:chatID:services:finishedWithResult:limit:
+ historicalMessageGUIDsDeleted:chatGUIDs:queryID:
+ unreadCountChanged:
+ lastFailedMessageIDChanged:
+ _handleChatReconstructions:
+ _updateUnreadCountForChat:
+ _daemonReallyDied:
+ _account:chat:style:chatProperties:messagesUpdated:
+ _processMessageForAccount:chat:style:chatProperties:message:
+ _updateInfo:forGUID:updatingUnreadCount:
+ _chat:updateDisplayName:
+ _chat:joinWithProperties:
+ _chat_declineInvitation:
+ _chat:sendMessage:
+ _chat:sendReadReceiptForMessages:
+ _chat_sendReadReceiptForAllMessages:
+ _chat:setValue:forChatProperty:
+ _chat:setProperties:ofParticipant:
+ _chat_leave:
+ _chat:inviteParticipants:reason:
+ _chat:removeParticipants:reason:
+ dealloc
+ countByEnumeratingWithState:objects:count:
+ init
+ existingChatWithChatIdentifier:
+ existingChatWithGUID:
+ allExistingChats
+ numberOfExistingChats
+ existingChatForIMHandle:allowRetargeting:
+ existingChatForIMHandles:allowRetargeting:
+ chatForIMHandles:
+ chatForIMHandle:
+ systemApplicationDidResume
+ _noteChatInit:
+ _noteChatDealloc:
+ _firstLoad
+ _hasChat:forService:
+ _allGUIDsForChat:
+ _blockUntilQueriesComplete:
+ handleIMChatParticipantsDidChange:
+ _registerChatDictionary:forChat:isIncoming:newGUID:
+ _unregisterChatWithGUID:
+ existingChatForIMHandle:
+ _createdChatForIMHandle:
+ _registerChat:isIncoming:guid:
+ chatForIMHandles:chatName:
+ existingChatForIMHandles:
+ _createdChatForIMHandles:style:
+ existingChatForRoom:onAccount:
+ _createdChatForRoom:onAccount:
+ _allCreatedChats
+ _createdChatWithIdentifier:style:account:
+ _existingChatWithIdentifier:style:service:
+ existingChatForRoom:onAccount:allowRetargeting:
+ _existingChatWithIdentifier:style:account:
+ __blockUntilQueriesComplete
+ _clearMarkAsReadTimerIfNecessary
+ _startMarkAsReadTimerIfNecessary
+ _chatInstanceForGUID:
+ unregisterChat:
+ unregisterChatWithGUID:
+ _unregisterChat:
+ chatForRoom:onAccount:
+ lastFailedMessageID
+ _lookupExistingChatWithIMHandle:
+ _chatForChatDictionary:chatItems:allowCreate:createdChat:outGUID:
+ _chatsWithMessage:
+ _defaultNumberOfMessagesToLoad
+ _setDefaultNumberOfMessagesToLoad:
+ _isLoading
+ _postMessageSentNotifications
+ _setPostMessageSentNotifications:
+ unreadCount
- _ck_chatForHandles:createIfNecessary:
- _ck_chatForEntities:createIfNecessary:
- setupComplete:info:
- setupComplete
- chat:updated:
- chat:propertiesUpdated:
- leftChat:
- account:chat:style:chatProperties:invitationReceived:
- account:chat:style:chatProperties:updateProperties:
- account:chat:style:chatProperties:messageSent:
- account:chat:style:chatProperties:messageReceived:
- account:chat:style:chatProperties:messageUpdated:
- account:chat:style:chatProperties:notifySentMessage:sendTime:
- account:chat:style:chatProperties:messagesUpdated:
- account:chat:style:chatProperties:error:
- account:chat:style:chatProperties:statusChanged:handleInfo:
- account:chat:style:chatProperties:member:statusChanged:
- historyQuery:chatID:services:finishedWithResult:limit:
- historicalMessageGUIDsDeleted:chatGUIDs:queryID:
- unreadCountChanged:
- lastFailedMessageIDChanged:
- _handleChatReconstructions:
- _updateUnreadCountForChat:
- _daemonReallyDied:
- _account:chat:style:chatProperties:messagesUpdated:
- _processMessageForAccount:chat:style:chatProperties:message:
- _updateInfo:forGUID:updatingUnreadCount:
- _chat:updateDisplayName:
- _chat:joinWithProperties:
- _chat_declineInvitation:
- _chat:sendMessage:
- _chat:sendReadReceiptForMessages:
- _chat_sendReadReceiptForAllMessages:
- _chat:setValue:forChatProperty:
- _chat:setProperties:ofParticipant:
- _chat_leave:
- _chat:inviteParticipants:reason:
- _chat:removeParticipants:reason:
- dealloc
- countByEnumeratingWithState:objects:count:
- init
- existingChatWithChatIdentifier:
- existingChatWithGUID:
- allExistingChats
- numberOfExistingChats
- existingChatForIMHandle:allowRetargeting:
- existingChatForIMHandles:allowRetargeting:
- chatForIMHandles:
- chatForIMHandle:
- systemApplicationDidResume
- _noteChatInit:
- _noteChatDealloc:
- _firstLoad
- _hasChat:forService:
- _allGUIDsForChat:
- _blockUntilQueriesComplete:
- handleIMChatParticipantsDidChange:
- _registerChatDictionary:forChat:isIncoming:newGUID:
- _unregisterChatWithGUID:
- existingChatForIMHandle:
- _createdChatForIMHandle:
- _registerChat:isIncoming:guid:
- chatForIMHandles:chatName:
- existingChatForIMHandles:
- _createdChatForIMHandles:style:
- existingChatForRoom:onAccount:
- _createdChatForRoom:onAccount:
- _allCreatedChats
- _createdChatWithIdentifier:style:account:
- _existingChatWithIdentifier:style:service:
- existingChatForRoom:onAccount:allowRetargeting:
- _existingChatWithIdentifier:style:account:
- __blockUntilQueriesComplete
- _clearMarkAsReadTimerIfNecessary
- _startMarkAsReadTimerIfNecessary
- _chatInstanceForGUID:
- unregisterChat:
- unregisterChatWithGUID:
- _unregisterChat:
- chatForRoom:onAccount:
- lastFailedMessageID
- _lookupExistingChatWithIMHandle:
- _chatForChatDictionary:chatItems:allowCreate:createdChat:outGUID:
- _chatsWithMessage:
- _defaultNumberOfMessagesToLoad
- _setDefaultNumberOfMessagesToLoad:
- _isLoading
- _postMessageSentNotifications
- _setPostMessageSentNotifications:
- unreadCount
@end