#ifndef RN_HockeyApp_h
#define RN_HockeyApp_h

#import "RCTBridgeModule.h"
#import <HockeySDK/HockeySDK.h>

typedef NS_ENUM(NSInteger, AuthType){
    Anonymous = 0,
    EmailSecret = 1,
    EmailPassword = 2,
    DeviceUUID = 3,
    WebAuth = 4
};

@interface RNHockeyApp : NSObject<RCTBridgeModule>
@end

#endif
