//
//  MPNativeAdError.h
//  Copyright (c) 2013 MoPub. All rights reserved.
//

#import <Foundation/Foundation.h>

typedef enum MPNativeAdErrorCode {
    MPNativeAdErrorUnknown = -1,

    MPNativeAdErrorHTTPError = -1000,
    MPNativeAdErrorInvalidServerResponse = -1001,
    MPNativeAdErrorNoInventory = -1002,
    MPNativeAdErrorImageDownloadFailed = -1003,
    MPNativeAdErrorAdUnitWarmingUp = -1004,

    MPNativeAdErrorContentDisplayError = -1100,
} MPNativeAdErrorCode;

extern NSString * const MoPubNativeAdsSDKDomain;

NSError *MPNativeAdNSErrorForInvalidAdServerResponse(NSString *reason);
NSError *MPNativeAdNSErrorForAdUnitWarmingUp(void);
NSError *MPNativeAdNSErrorForNoInventory(void);
NSError *MPNativeAdNSErrorForNetworkConnectionError(void);
NSError *MPNativeAdNSErrorForInvalidImageURL(void);
NSError *MPNativeAdNSErrorForImageDownloadFailure(void);
NSError *MPNativeAdNSErrorForContentDisplayErrorMissingRootController(void);
NSError *MPNativeAdNSErrorForContentDisplayErrorInvalidURL(void);
