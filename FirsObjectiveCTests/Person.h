//
//  Person.h
//  FirsObjectiveCTests
//
//  Created by Trainee 2 on 2/7/14.
//  Copyright (c) 2014 Ulices. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface Person : NSObject

@property (strong) Person *bestFriend;

@property NSString *firstName;
@property NSString *lastName;
@property (readonly) int age;

@end
