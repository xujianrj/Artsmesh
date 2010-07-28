//
//  JackTaskHelper.h
//  TerminalTaskCaller
//
//  Created by Sky Jia on 7/18/10.
//  Copyright 2010 Farefore. All rights reserved.
//

#import <Cocoa/Cocoa.h>
#import "JackTripChanelInfo.h"

@interface JackTripTaskHelper : NSObject {	
}

+(NSTask*) startJackServer;
+(NSArray*) buildJackTaskList:(NSArray*) jackChanelList;

+(void) launchTask :(NSTask**) task;
+(void) terminateTask :(NSTask**) task;
+(void) launchTaskList:(NSArray**)taskList;
+(void) terminateTaskList:(NSArray**)taskList;

@end