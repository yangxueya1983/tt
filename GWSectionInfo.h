//
//  GWSectionInfo.h
//  GWMovie
//
//  Created by yangxueya on 12/8/14.
//  Copyright (c) 2014 gewara. All rights reserved.
//

#import "GWObject.h"

@interface GWSectionInfo : GWObject
@property(nonatomic, assign)NSUInteger sectionIndex;
@property(nonatomic, copy)NSString *title;
@property(nonatomic, copy)NSString *imageName;
@property(nonatomic, copy)NSString *sectionDescription;
@property(nonatomic, copy)NSDictionary *sectionInfo;

@end
