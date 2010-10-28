//
//  ServerStatusAppDelegate.h
//  ServerStatus
//
//  Created by Florian Mutter on 11.05.10.
//  Copyright 2010 skweez.net. All rights reserved.
//

#import <Cocoa/Cocoa.h>
#import <SystemConfiguration/SystemConfiguration.h>
#import "Server.h"
#import "PreferenceWindowController.h"
#import "ServerListController.h"
#import "StatusItemController.h"
#import "Sparkle/Sparkle.h"

@interface ServerStatusAppDelegate : NSObject <NSApplicationDelegate> {
	PreferenceWindowController *preferenceWindowController;
	ServerListController *serverListController;
	StatusItemController *statusItemController;
	SUUpdater *suupdater;
	BOOL networkAvailable;
}

@property (assign) IBOutlet ServerListController *serverListController;
@property (assign) IBOutlet StatusItemController *statusItemController;
@property (assign) IBOutlet SUUpdater *suupdater;
@property (assign) BOOL networkAvailable;

- (IBAction)showPreferenceWindow:(id)sender;

@end
