//
//  Server.h
//  ServerStatus
//
//  Created by Florian Mutter on 14.05.10.
//  Copyright 2010 skweez.net. All rights reserved.
//

#import <Foundation/Foundation.h>
#include "SimplePing.h"

typedef enum {
	SERVER_UNKNOWN,
	SERVER_OK,
	SERVER_FAIL
} ServerStatus;

@protocol ServerDelegate;

@interface Server : NSObject <SimplePingDelegate, NSCoding> {
	NSString *serverName;
	NSString *serverHost;
	SimplePing *_pinger;
	NSTimer *pingTimeout;
	
	ServerStatus serverStatus;
	
	id<ServerDelegate>  _delegate;
}

@property (copy) NSString *serverName;
@property (copy) NSString *serverHost;
@property ServerStatus serverStatus;
@property (retain) SimplePing *pinger;

@property (assign) id<ServerDelegate> delegate;

- (void)ping;
- (void)pingTimedOut:(NSTimer *)timer;

@end

@protocol ServerDelegate <NSObject>

- (void)serverPingFailed:(Server*) server;

@end