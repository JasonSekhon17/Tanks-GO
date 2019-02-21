//
//  TestScene.h
//  Tanks Go
//
//  Created by Jason Sekhon on 2019-02-18.
//  Copyright © 2019 Jason Sekhon. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "Node.h"

NS_ASSUME_NONNULL_BEGIN

@interface TestScene : Node

- (instancetype)initWithShader:(BaseEffect *)shader;

@end

NS_ASSUME_NONNULL_END
