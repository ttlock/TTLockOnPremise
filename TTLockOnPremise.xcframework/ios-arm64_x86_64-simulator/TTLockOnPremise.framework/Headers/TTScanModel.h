

#import <Foundation/Foundation.h>
#import "TTMacros.h"

NS_ASSUME_NONNULL_BEGIN

@interface TTScanModel : NSObject

@property (nonatomic, strong) NSString *lockName;
@property (nonatomic, strong) NSString *lockMac;
@property (nonatomic, assign) BOOL isInited;
@property (nonatomic, assign) BOOL isAllowUnlock;
@property (nonatomic, assign) BOOL isDfuMode;
@property (nonatomic, assign) NSInteger electricQuantity;
@property (nonatomic, strong) NSString * lockVersion;
@property (nonatomic, assign) TTLockSwitchState lockSwitchState;
@property (nonatomic, assign) NSInteger RSSI;
@property (nonatomic, assign) NSInteger oneMeterRSSI;
@property (nonatomic, strong) NSDate *date;
@property (nonatomic, strong) NSDictionary *advertisementData;

- (instancetype)initWithInfoDic:(NSDictionary *)infoDic;

@end

NS_ASSUME_NONNULL_END
