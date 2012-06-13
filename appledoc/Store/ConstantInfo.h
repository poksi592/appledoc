//
//  ConstantInfo.h
//  appledoc
//
//  Created by Tomaž Kragelj on 4/23/12.
//  Copyright (c) 2012 Tomaz Kragelj. All rights reserved.
//

#import "ObjectInfoBase.h"

@class TypeInfo;
@class DescriptorsInfo;

/** Provides data about a constant.
 */
@interface ConstantInfo : ObjectInfoBase

@property (nonatomic, strong) TypeInfo *constantTypes;
@property (nonatomic, strong) DescriptorsInfo *constantDescriptors;
@property (nonatomic, copy) NSString *constantName;

@end