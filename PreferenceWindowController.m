//
//  PreferenceWindowController.m
//  ServerStatus
//
//  Created by Florian Mutter on 24.05.10.
//  Copyright 2010 skweez.net. All rights reserved.
//

#import "PreferenceWindowController.h"


@implementation PreferenceWindowController
@synthesize serverListController;

#pragma mark -
#pragma mark init
- (id)init {
	if (![super initWithWindowNibName:@"Preferences"]) {
		return nil;
	}
	return self;
}

- (void)awakeFromNib {
	serverListTableController.serverListController = serverListController;
}

- (void)windowDidLoad {
}

#pragma mark -
#pragma mark Actions
- (IBAction)pushClose:(NSButton *)sender {
	[self.window performClose:self];
}

@end
