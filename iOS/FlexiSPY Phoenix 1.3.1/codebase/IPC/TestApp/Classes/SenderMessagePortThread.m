//
//  SenderMessagePortThread.m
//  TestApp
//
//  Created by Dominique  Mayrand on 12/20/11.
//  Copyright 2011 __MyCompanyName__. All rights reserved.
//

#import "SenderMessagePortThread.h"
#import "DefStd.h"


@interface SenderMessagePortThread (private)
- (void) senderThreadMethod;

@end

@implementation SenderMessagePortThread


- (void) startSendingData {
	if (!mIsRunning) {
		//mSenderThread = [[NSThread alloc] initWithTarget:self selector:@selector(senderThreadMethod) object:NULL];
		mSenderThread = [[NSThread alloc] initWithTarget:self selector:@selector(senderThreadMethod) object:NULL];
		[mSenderThread start];
		mIsRunning = TRUE;
	}
}

- (void) senderThreadMethod {
	@try {
		NSAutoreleasePool* autoReleasePool = [[NSAutoreleasePool alloc] init];
		
		//NSString* portName = [NSString stringWithFormat:@"TOTO"];
							   
		mMessagePortSender = [[MessagePortIPCSender alloc] initWithPortName:kIPCChanelNameSubstrate];
		NSMutableData* data = [[NSMutableData alloc] init];
		NSString* string = [NSString stringWithString:@"01234567890123456789"];

		
		for(int i = 0; i < 1024; i++){
			NSData* stringData = [string dataUsingEncoding:NSUTF8StringEncoding];
			[data appendData:stringData];
		}
		int lenght = [data length];
		NSMutableData *data2 = [[NSMutableData alloc] init];
		[data2 appendBytes:&lenght length:sizeof(lenght)];
		[data2 appendData:data];
		if([mMessagePortSender writeDataToMessagePort:data2])
			NSLog(@"Get data from port");
		else 
			NSLog(@"No data send");
		[data release];
		[mMessagePortSender release];
		[autoReleasePool release];
	}
	@catch (NSException * e) {
	}
	@finally {
	}
	mIsRunning = FALSE;
}

- (void) dealloc {
	[mSenderThread release];
	[super dealloc];
}
@end
