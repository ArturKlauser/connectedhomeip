/*
 *   Copyright (c) 2022 Project CHIP Authors
 *   All rights reserved.
 *
 *   Licensed under the Apache License, Version 2.0 (the "License");
 *   you may not use this file except in compliance with the License.
 *   You may obtain a copy of the License at
 *
 *       http://www.apache.org/licenses/LICENSE-2.0
 *
 *   Unless required by applicable law or agreed to in writing, software
 *   distributed under the License is distributed on an "AS IS" BASIS,
 *   WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 *   See the License for the specific language governing permissions and
 *   limitations under the License.
 *
 */
#pragma once
#include "PairingCommandBridge.h"

#import <Matter/Matter.h>

@interface CHIPToolDeviceControllerDelegate : NSObject <MTRDeviceControllerDelegate>
@property PairingCommandBridge * commandBridge;
@property chip::NodeId deviceID;
@property MTRDeviceController * commissioner;
@property MTRCommissioningParameters * params;

- (void)onPairingComplete:(NSError *)error;
- (void)onPairingDeleted:(NSError *)error;
- (void)onCommissioningComplete:(NSError *)error;

@end
