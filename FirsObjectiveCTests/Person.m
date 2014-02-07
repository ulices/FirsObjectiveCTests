//
//  Person.m
//  FirsObjectiveCTests
//
//  Created by Trainee 2 on 2/7/14.
//  Copyright (c) 2014 Ulices. All rights reserved.
//

#import "Person.h"

@implementation Person
- (NSString *) description;
{
    return [NSString stringWithFormat:@"%@ %@, who is %d years old.",
            self.firstName, self.lastName, self.age];
}
@end