
//  Copyright © 2025 TTLock. All rights reserved.
//  version:2.2.0

#import <Foundation/Foundation.h>
#import <TTLockOnPremise/TTLock.h>
#import "TTDFUMacros.h"
#import "TTLockDFUOnPremise.h"
#import "TTGatewayDFU.h"

NS_ASSUME_NONNULL_BEGIN

typedef NS_ENUM(NSInteger,TTDeviceType) {
    TTDeviceTypeLock,
    TTDeviceTypeGatewayByNet,
    TTDeviceTypeGatewayByBluetooth,
    TTDeviceTypeWaterMeter,
    TTDeviceTypeElectricMeter,
    TTDeviceTypeKeypad,
    TTDeviceTypeRemote,
    TTDeviceTypeDoorSensor,
};

@interface TTDeviceDFUModel : NSObject

@property (nonatomic, assign) TTDeviceType type;
@property (nonatomic, strong) NSString *deviceMac;

// Lock, Remote and DoorSensor need to set this value, the lockData of lock
@property (nonatomic, strong) NSString *lockData;
// Remote need to set this value , if the remote has featureValue
@property (nonatomic, strong) NSString *featureValue;

@end

@interface TTDeviceDFU : NSObject

+ (instancetype)shareInstance;

//only do dfu operation, SDK will set the lock to enter upgrade mode and upgrade it,
- (void)startDfuWithFirmwarePackage:(NSString *)firmwarePackage
                        deviceModel:(TTDeviceDFUModel *)deviceModel
                       successBlock:(TTLockDFUSuccessBlock)sblock
                          failBlock:(TTLockDFUFailBlock)fblock;

- (void)endUpgrade;

NS_ASSUME_NONNULL_END

@end

