//
//  DataManager.h
//  LCSC
//
//  Created by x on 4/14/16.
//  Copyright © 2016 LCSC. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface DataManager : NSObject{
    @public
}

- (id) init;
- (bool)isCacheUpdated;

+ (id)singletonDataManager;


@end
