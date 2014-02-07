//
//  Person.h
//  FirsObjectiveCTests
//
//  Created by Trainee 2 on 2/7/14.
//  Copyright (c) 2014 Ulices. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface Person : NSObject {
    NSString *_firstName;
    NSString *_lastName;
    int _age;
}

- (NSString *) firstName;
- (NSString *) lastName;
- (void) setFirstName:(NSString *)newFirstName andLastName:(NSString
                                                            *)newLastName;
@end
