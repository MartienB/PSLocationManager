//
//  PSShareModel.h
//
//  Created by Martien on 28/03/2017.
//  Copyright © 2017 Kolossos. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "PSBackgroundTaskManager.h"
#import <CoreLocation/CoreLocation.h>

@interface PSShareModel : NSObject

@property (nonatomic) NSTimer *timer;
@property (nonatomic) NSTimer *delay10Seconds;
@property (nonatomic) PSBackgroundTaskManager *bgTask;
@property (nonatomic) NSMutableArray *myLocationArray;

+ (id)sharedModel;

@end
