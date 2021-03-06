/**
 Copyright 2018 Google Inc. All rights reserved.

 Licensed under the Apache License, Version 2.0 (the "License");
 you may not use this file except in compliance with the License.
 You may obtain a copy of the License at:

 http://www.apache.org/licenses/LICENSE-2.0

 Unless required by applicable law or agreed to in writing, software
 distributed under the License is distributed on an "AS IS" BASIS,
 WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 See the License for the specific language governing permissions and
 limitations under the License.
 */

#import "FBLPromiseError.h"

NS_ASSUME_NONNULL_BEGIN

/**
 Promises synchronization construct in Objective-C.
 */
@interface FBLPromise<Value> : NSObject

/**
 Creates a pending promise.
 */
+ (instancetype)pendingPromise NS_REFINED_FOR_SWIFT;

/**
 Creates a resolved promise.

 @param resolution An object to resolve the promise with: either a value or an error.
 @return A new resolved promise.
 */
+ (instancetype)resolvedWith:(nullable id)resolution NS_REFINED_FOR_SWIFT;

/**
 Synchronously fulfills the promise with a value.

 @param value An arbitrary value to fulfill the promise with, including `nil`.
 */
- (void)fulfill:(nullable id)value NS_REFINED_FOR_SWIFT;

/**
 Synchronously rejects the promise with an error.

 @param error An error to reject the promise with.
 */
- (void)reject:(NSError *)error NS_REFINED_FOR_SWIFT;

+ (instancetype)new NS_UNAVAILABLE;
- (instancetype)init NS_UNAVAILABLE;

@end

NS_ASSUME_NONNULL_END
