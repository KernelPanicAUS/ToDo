//
//  ToDoItem.h
//  ToDoList
//
//  Created by Thomas Khalil on 6/04/2015.
//  Copyright (c) 2015 Thomas Khalil. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface ToDoItem : NSObject

@property NSString *itemName;
@property BOOL completed;
@property (readonly) NSDate *creationDate;

@end
