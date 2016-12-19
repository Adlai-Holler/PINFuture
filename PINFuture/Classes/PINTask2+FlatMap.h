//
//  PINTask2+FlatMap.h
//  Pods
//
//  Created by Chris Danford on 12/14/16.
//  Copyright © 2016 Pinterest. All rights reserved.
//

#import "PINTask.h"
#import "PINTask2.h"

@interface PINTask2<FromType, ToType> (FlatMap)
+ (PINTask<ToType> *)flatMap:(PINTask<FromType> *)sourceTask success:(PINTask<ToType> *(^)(FromType fromValue))success __attribute__((warn_unused_result));
@end
