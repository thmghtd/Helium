//
//  HEPostListItemLayer.h
//  Helium
//
//  Created by Alex Gordon on 16/12/2009.
//  Copyright 2009 __MyCompanyName__. All rights reserved.
//

#import <Cocoa/Cocoa.h>
#import <QuartzCore/QuartzCore.h>


@interface HEPostListItemLayer : CALayer
{
	NSImage *icon;
	NSString *title;
	NSString *source;
	
	NSDictionary *values;
	
	BOOL isSelected;
}

@property (assign) NSImage *icon;
@property (assign) NSString *title;
@property (assign) NSString *source;

@property (assign) NSDictionary *values;

@property (assign) BOOL isSelected;

@end
