@interface NSRunLoop : NSObject
{
	id _rl;
	id _dperf;
	id _perft;
	id _info;
	id _ports;
	Array _reserved;
}

+ getCFRunLoop
+ _enumerateInfoPairsWithBlock:
+ _portInvalidated:
+ _containsPort:forMode:
+ _addPort:forMode:
+ _removePort:forMode:
+ runMode:beforeDate:
+ containsPort:forMode:
+ portsForMode:
+ removeTimer:forMode:
+ timersForMode:
+ containsTimer:forMode:
+ allModes
+ _invalidateTimers
+ limitDateForMode:
+ _wakeup
+ acceptInputForMode:beforeDate:
+ runMode:untilDate:
+ runUntilDate:
+ runBeforeDate:
+ performSelector:target:argument:order:modes:
+ cancelPerformSelector:target:argument:
+ dealloc
+ init
+ description
+ addTimer:forMode:
+ copyWithZone:
+ currentMode
+ run
+ cancelPerformSelectorsWithTarget:
+ addPort:forMode:
+ removePort:forMode:
- getCFRunLoop
- _enumerateInfoPairsWithBlock:
- _portInvalidated:
- _containsPort:forMode:
- _addPort:forMode:
- _removePort:forMode:
- runMode:beforeDate:
- containsPort:forMode:
- portsForMode:
- removeTimer:forMode:
- timersForMode:
- containsTimer:forMode:
- allModes
- _invalidateTimers
- limitDateForMode:
- _wakeup
- acceptInputForMode:beforeDate:
- runMode:untilDate:
- runUntilDate:
- runBeforeDate:
- performSelector:target:argument:order:modes:
- cancelPerformSelector:target:argument:
- dealloc
- init
- description
- addTimer:forMode:
- copyWithZone:
- currentMode
- run
- cancelPerformSelectorsWithTarget:
- addPort:forMode:
- removePort:forMode:
@end