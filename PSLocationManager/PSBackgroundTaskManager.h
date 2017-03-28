//
//  PSBackgroundTaskManager.h
//
//  Created by Martien on 28/03/2017.
//  Copyright © 2017 Kolossos. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface PSBackgroundTaskManager : NSObject

+ (instancetype)sharedBackgroundTaskManager;

- (UIBackgroundTaskIdentifier)beginNewBackgroundTask;
- (void)endAllBackgroundTasks;

@end
