
//  Copyright © 2017 TTLock. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "TTDFUMacros.h"

@interface TTGatewayDFU : NSObject

+ (instancetype _Nonnull  )shareInstance;

/* start Dfu
 
You can upgrade the gateway by the following two ways.
 
1 By net
 call server Api to set Upgrade Mode, then call below method
 
2 By Bluetooth
 Re Connect the Power of the gateway, then call below method
 */

- (void)startDfuWithFirmwarePackage:(NSString *_Nonnull)firmwarePackage
                         gatewayMac:(NSString *_Nonnull)gatewayMac
                       successBlock:(TTLockDFUSuccessBlock _Nullable )sblock
                          failBlock:(TTLockDFUFailBlock _Nullable )fblock;

- (void)endUpgrade;


@end

