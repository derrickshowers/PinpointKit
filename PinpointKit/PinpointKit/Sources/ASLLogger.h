//
//  ASLLogger.h
//  PinpointKit
//
//  Created by Andrew Harrison on 4/9/16.
//  Copyright © 2016 Lickability. All rights reserved.
//

@import Foundation;

NS_ASSUME_NONNULL_BEGIN

/// An Objective-C log collector that uses the [Apple System Logger](https://developer.apple.com/library/mac/documentation/MacOSX/Conceptual/BPSystemStartup/Chapters/LoggingErrorsAndWarnings.html) API to retrieve messages logged to the console with `NSLog`. This wrapper must be Objective-C to allow importing `asl.h` without a modulemap of a system file and the associated brittleness of that approach with dependency managers.
/// @warning: Use the Swift `SystemLogCollector` object instead of using this object directly.
@interface ASLLogger : NSObject

/**
 Using the Apple System Logger API, retrieves and returns logs as an ordered list of strings.
  
 @returns Logs as an ordered list of strings, sorted by descending recency.
*/
- (NSArray<NSString *> *)retrieveLogs;

@end

NS_ASSUME_NONNULL_END
