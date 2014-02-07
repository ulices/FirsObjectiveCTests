//
//  Person.m
//  FirsObjectiveCTests
//
//  Created by Trainee 2 on 2/7/14.
//  Copyright (c) 2014 Ulices. All rights reserved.
//

#import "Person.h"

@implementation Person
- (NSString *) firstName {
    return _firstName;
}
- (NSString *) lastName {
    return _lastName;
}
- (void) setFirstName:(NSString *)newFirstName andLastName:(NSString
                                                            *)newLastName{
    _firstName = newFirstName;
    _lastName = newLastName;
}
@end