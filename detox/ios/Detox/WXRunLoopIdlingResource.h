//
//  WXRunLoopIdlingResource.h
//  Detox
//
//  Created by Leo Natan (Wix) on 14/10/2016.
//  Copyright © 2016 Wix. All rights reserved.
//

#if LEGACY_EARLGREY_SYNC

@import Foundation;
#import <EarlGrey/EarlGrey.h>

@interface WXRunLoopIdlingResource : NSObject <GREYIdlingResource>

- (instancetype)initWithRunLoop:(CFRunLoopRef)runLoop;

@end

#endif
