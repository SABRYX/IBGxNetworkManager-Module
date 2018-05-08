//  Created by react-native-create-bridge

// import RCTBridgeModule
#if __has_include(<React/RCTBridgeModule.h>)
#import <React/RCTBridgeModule.h>
#elif __has_include(“RCTBridgeModule.h”)
#import “RCTBridgeModule.h”
#else
#import “React/RCTBridgeModule.h” // Required when used as a Pod in a Swift project
#endif

// import RCTEventEmitter
#if __has_include(<React/RCTEventEmitter.h>)
#import <React/RCTEventEmitter.h>
#elif __has_include(“RCTEventEmitter.h”)
#import “RCTEventEmitter.h”
#else
#import “React/RCTEventEmitter.h” // Required when used as a Pod in a Swift project
#endif


@import Foundation;

@interface ibgx : RCTEventEmitter <RCTBridgeModule>



@property (nonatomic, assign) BOOL shouldContinueRunningRequestsInBackground;
//
+ (nonnull instancetype)sharedInstance;
//
- (nonnull NSURLRequest *)GET:(nonnull NSURL *)url
                   parameters:(nullable NSDictionary *)parameters
            completionHandler:(nonnull void (^)(id _Nullable response, NSError * _Nullable error))completionHandler;

//
- (nonnull NSURLRequest *)POST:(nonnull NSURL *)url
                    parameters:(nullable NSDictionary *)parameters
             completionHandler:(nonnull void (^)(id _Nullable response, NSError * _Nullable error))completionHandler;

//
- (nonnull NSURLRequest *)DELETE:(nonnull NSURL *)url
                      parameters:(nullable NSDictionary *)parameters
               completionHandler:(nonnull void (^)(id _Nullable response, NSError * _Nullable error))completionHandler;

//
- (nonnull NSURLRequest *)PATCH:(nonnull NSURL *)url
                     parameters:(nullable NSDictionary *)parameters
              completionHandler:(nonnull void (^)(id _Nullable response, NSError * _Nullable error))completionHandler;
//
- (nonnull NSURLRequest *)PUT:(nonnull NSURL *)url
                   parameters:(nullable NSDictionary *)parameters
            completionHandler:(nonnull void (^)(id _Nullable response, NSError * _Nullable error))completionHandler;

//
- (nonnull NSURLRequest *)HEAD:(nonnull NSURL *)url
                    parameters:(nullable NSDictionary *)parameters
             completionHandler:(nonnull void (^)(id _Nullable response, NSError * _Nullable error))completionHandler;
//
- (void)downloadImageDataAtURL:(nonnull NSURL *)url
             completionHandler:(nonnull void (^)(NSData * _Nullable data, NSError * _Nullable error))completionHandler;
@end

