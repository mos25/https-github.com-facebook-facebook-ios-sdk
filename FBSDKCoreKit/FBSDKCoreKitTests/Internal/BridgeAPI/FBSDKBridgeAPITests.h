// Copyright (c) 2014-present, Facebook, Inc. All rights reserved.
//
// You are hereby granted a non-exclusive, worldwide, royalty-free license to use,
// copy, modify, and distribute this software in source code or binary form for use
// in connection with the web services and APIs provided by Facebook.
//
// As with any software that integrates with the Facebook platform, your use of
// this software is subject to the Facebook Developer Principles and Policies
// [http://developers.facebook.com/policy/]. This copyright notice shall be
// included in all copies or substantial portions of the software.
//
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS
// FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR
// COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER
// IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN
// CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.

#import <Foundation/Foundation.h>
#import <OCMock/OCMock.h>
#import <UIKit/UIKit.h>
#import <XCTest/XCTest.h>

#import <FBSDKCoreKit/FBSDKCoreKit.h>

#import "FBSDKBridgeAPI+Testing.h"
#import "FBSDKCoreKitTests-Swift.h"
#import "FBSDKTestCase.h"
#import "FakeLoginManager.h"

@interface FBSDKBridgeAPI (Testing)
- (void)_openURLWithSafariViewController:(NSURL *)url
                                  sender:(id<FBSDKURLOpening>)sender
                      fromViewController:(UIViewController *)fromViewController
                                 handler:(FBSDKSuccessBlock)handler
                           dylibResolver:(id<FBSDKDynamicFrameworkResolving>)dylibResolver;
- (void)openURLWithAuthenticationSession:(NSURL *)url;
- (void)setSessionCompletionHandlerFromHandler:(void (^)(BOOL, NSError *))handler;

@end

@interface FBSDKBridgeAPITests : FBSDKTestCase

@property FBSDKBridgeAPI *api;
@property id partialMock;
@property (readonly) NSURL *sampleUrl;
@property (readonly) NSError *sampleError;

extern NSString *const sampleSource;
extern NSString *const sampleAnnotation;

@end
