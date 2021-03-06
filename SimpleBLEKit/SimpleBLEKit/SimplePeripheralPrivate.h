//
//  SimplePeripheral+SimplePeripheralPrivate.h
//  SimpleBLEKit
//
//  Created by zbh on 17/3/18.
//  Copyright © 2017年 hxsmart. All rights reserved.
//



@interface SimplePeripheral ()

#pragma mark - framework内部使用的方法
- (instancetype _Nonnull)initWithCentralManager:(CBCentralManager * _Nonnull)manager;
-(void)setPeripheral:(CBPeripheral * _Nonnull)peripheral;
//连接设备
-(void)connectDevice:(BLEStatusBlock _Nullable)myStatusBlock;
@end
