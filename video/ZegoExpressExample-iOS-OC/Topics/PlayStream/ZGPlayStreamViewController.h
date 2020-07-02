//
//  ZGPlayStreamViewController.h
//  ZegoExpressExample-iOS-OC
//
//  Created by Patrick Fu on 2020/6/30.
//  Copyright © 2020 Zego. All rights reserved.
//

#ifdef _Module_Play

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface ZGPlayStreamViewController : UIViewController

@property (nonatomic, assign) BOOL enableHardwareDecoder;
@property (nonatomic, assign) int playVolume;

- (void)appendLog:(NSString *)tipText;

@end

NS_ASSUME_NONNULL_END

#endif
