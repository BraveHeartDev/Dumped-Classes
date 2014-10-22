@interface __NSCFURLSession : NSObject
{
	id _nsCFConfig;
	BOOL _invalid;
	id _delegateQueue;
	id _delegate;
	id _sessionDescription;
	id _workQueue;
	id _connectionSession;
	id _extraRetain;
	id _realDelegateQueue;
}

+ can_delegate_dataTask_didReceiveResponse
+ delegate_dataTask:didReceiveResponse:completionHandler:
+ can_delegate_dataTask_didBecomeDownloadTask
+ delegate_dataTask:didBecomeDownloadTask:
+ can_delegate_task_willPerformHTTPRedirection
+ delegate_task:willPerformHTTPRedirection:newRequest:completionHandler:
+ can_delegate_didReceiveChallenge
+ delegate_didReceiveChallenge:completionHandler:
+ can_delegate_task_didReceiveChallenge
+ delegate_task:didReceiveChallenge:completionHandler:
+ can_delegate_dataTask_willCacheResponse
+ delegate_dataTask:willCacheResponse:completionHandler:
+ addDelegateBlock:
+ can_delegate_task_didCompleteWithError
+ delegate_task:didCompleteWithError:
+ can_delegate_dataTask_didReceiveData
+ delegate_dataTask:didReceiveData:
+ can_delegate_task_needNewBodyStream
+ delegate_task:needNewBodyStream:
+ can_delegate_task_didSendBodyData
+ delegate_task:didSendBodyData:totalBytesSent:totalBytesExpectedToSend:
+ can_delegate_downloadTaskNeedsDownloadDirectory
+ delegate_downloadTaskNeedsDownloadDirectory:
+ can_delegate_downloadTask_didWriteData
+ delegate_downloadTask:didWriteData:totalBytesWritten:totalBytesExpectedToWrite:
+ can_delegate_downloadTask_didFinishDownloadingToURL
+ delegate_downloadTask:didFinishDownloadingToURL:
+ can_delegate_downloadTask_didReceiveResponse
+ delegate_downloadTask:didReceiveResponse:
+ can_delegate_downloadTask_didResumeAtOffset
+ delegate_downloadTask:didResumeAtOffset:expectedTotalBytes:
+ can_delegate_didFinishEventsForBackgroundURLSession
+ delegate_didFinishEventsForBackgroundURLSession
+ isBackgroundSession
+ connectionSession
+ initWithConfiguration:delegate:delegateQueue:
+ _onqueue_completeInvalidationFinal
+ _onqueue_completeInvalidation:
+ _onqueue_withTasks:
+ dataTaskWithRequest:completionHandler:
+ downloadTaskWithRequest:
+ downloadTaskWithRequest:completionHandler:
+ getConfiguration
+ invalidateAndCancel
+ finishTasksAndInvalidate
+ resetWithCompletionHandler:
+ flushWithCompletionHandler:
+ getTasksWithCompletionHandler:
+ dataTaskWithHTTPGetRequest:completionHandler:
+ dataTaskWithHTTPGetRequest:
+ dataTaskWithRequest:
+ dataTaskWithURL:
+ dataTaskWithURL:completionHandler:
+ uploadTaskWithRequest:fromFile:
+ uploadTaskWithRequest:fromData:
+ uploadTaskWithStreamedRequest:
+ uploadTaskWithRequest:fromFile:completionHandler:
+ uploadTaskWithRequest:fromData:completionHandler:
+ downloadTaskWithURL:
+ downloadTaskWithResumeData:
+ downloadTaskWithURL:completionHandler:
+ downloadTaskWithResumeData:completionHandler:
+ setConnectionSession:
+ invalid
+ setInvalid:
+ extraRetain
+ setExtraRetain:
+ realDelegateQueue
+ setRealDelegateQueue:
+ delegateQueue
+ sessionDescription
+ setSessionDescription:
+ dealloc
+ delegate
+ copyWithZone:
+ configuration
+ setConfiguration:
+ workQueue
+ setWorkQueue:
- can_delegate_dataTask_didReceiveResponse
- delegate_dataTask:didReceiveResponse:completionHandler:
- can_delegate_dataTask_didBecomeDownloadTask
- delegate_dataTask:didBecomeDownloadTask:
- can_delegate_task_willPerformHTTPRedirection
- delegate_task:willPerformHTTPRedirection:newRequest:completionHandler:
- can_delegate_didReceiveChallenge
- delegate_didReceiveChallenge:completionHandler:
- can_delegate_task_didReceiveChallenge
- delegate_task:didReceiveChallenge:completionHandler:
- can_delegate_dataTask_willCacheResponse
- delegate_dataTask:willCacheResponse:completionHandler:
- addDelegateBlock:
- can_delegate_task_didCompleteWithError
- delegate_task:didCompleteWithError:
- can_delegate_dataTask_didReceiveData
- delegate_dataTask:didReceiveData:
- can_delegate_task_needNewBodyStream
- delegate_task:needNewBodyStream:
- can_delegate_task_didSendBodyData
- delegate_task:didSendBodyData:totalBytesSent:totalBytesExpectedToSend:
- can_delegate_downloadTaskNeedsDownloadDirectory
- delegate_downloadTaskNeedsDownloadDirectory:
- can_delegate_downloadTask_didWriteData
- delegate_downloadTask:didWriteData:totalBytesWritten:totalBytesExpectedToWrite:
- can_delegate_downloadTask_didFinishDownloadingToURL
- delegate_downloadTask:didFinishDownloadingToURL:
- can_delegate_downloadTask_didReceiveResponse
- delegate_downloadTask:didReceiveResponse:
- can_delegate_downloadTask_didResumeAtOffset
- delegate_downloadTask:didResumeAtOffset:expectedTotalBytes:
- can_delegate_didFinishEventsForBackgroundURLSession
- delegate_didFinishEventsForBackgroundURLSession
- isBackgroundSession
- connectionSession
- initWithConfiguration:delegate:delegateQueue:
- _onqueue_completeInvalidationFinal
- _onqueue_completeInvalidation:
- _onqueue_withTasks:
- dataTaskWithRequest:completionHandler:
- downloadTaskWithRequest:
- downloadTaskWithRequest:completionHandler:
- getConfiguration
- invalidateAndCancel
- finishTasksAndInvalidate
- resetWithCompletionHandler:
- flushWithCompletionHandler:
- getTasksWithCompletionHandler:
- dataTaskWithHTTPGetRequest:completionHandler:
- dataTaskWithHTTPGetRequest:
- dataTaskWithRequest:
- dataTaskWithURL:
- dataTaskWithURL:completionHandler:
- uploadTaskWithRequest:fromFile:
- uploadTaskWithRequest:fromData:
- uploadTaskWithStreamedRequest:
- uploadTaskWithRequest:fromFile:completionHandler:
- uploadTaskWithRequest:fromData:completionHandler:
- downloadTaskWithURL:
- downloadTaskWithResumeData:
- downloadTaskWithURL:completionHandler:
- downloadTaskWithResumeData:completionHandler:
- setConnectionSession:
- invalid
- setInvalid:
- extraRetain
- setExtraRetain:
- realDelegateQueue
- setRealDelegateQueue:
- delegateQueue
- sessionDescription
- setSessionDescription:
- dealloc
- delegate
- copyWithZone:
- configuration
- setConfiguration:
- workQueue
- setWorkQueue:
@end