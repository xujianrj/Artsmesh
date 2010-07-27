//
//  JackTripTaskContainer.h
//  TerminalTaskCaller
//
//  Created by Sky Jia on 7/23/10.
//  Copyright 2010 Farefore. All rights reserved.
//

#import <Cocoa/Cocoa.h>
#import "JackTripTaskHelper.h"

@interface JackTripTaskContainer : NSObject {
	NSArray *jackClientChanelList;
	NSArray *jackServerChanelList;
	NSArray *jackTripClientTaskList;
	NSArray *jackTripServerTaskList;
	NSTask *jackServerTask;
}

@property (assign) NSArray *jackClientChanelList;
@property (assign) NSArray *jackServerChanelList;
@property (assign) NSArray *jackTripClientTaskList;
@property (assign) NSArray *jackTripServerTaskList;
@property (assign) NSTask *jackServerTask;

@end
