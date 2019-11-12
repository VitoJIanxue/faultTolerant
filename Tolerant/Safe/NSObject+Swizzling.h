//
//  NSObject+Swizzling.h
//  SafeObjectCrash
//
//  Created by vito on 2018/4/18.
//  Copyright © 2018年 vito. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSObject (Swizzling)
+ (void)exchangeInstanceMethodWithSelfClass:(Class)selfClass
                           originalSelector:(SEL)originalSelector
                           swizzledSelector:(SEL)swizzledSelector;
@end
