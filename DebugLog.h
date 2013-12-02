/*
 *  DebugLog.h
 *  DebugLog
 *
 *  Created by Karl Kraft on 3/22/09.
 *  Copyright 2009 Karl Kraft. All rights reserved.
 *
 */

#import <Foundation/Foundation.h>

#ifdef DEBUG

#define DebugLog(args...) _DebugLog(__FILE__,__LINE__,__PRETTY_FUNCTION__,args);

#else

#define DebugLog(args...) 

#endif

void _DebugLog(const char *file, int lineNumber, const char *funcName, NSString *format,...);
