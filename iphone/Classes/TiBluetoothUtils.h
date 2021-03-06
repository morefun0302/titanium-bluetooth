/**
 * Appcelerator Titanium Mobile
 * Copyright (c) 2009-2016 by Appcelerator, Inc. All Rights Reserved.
 * Licensed under the terms of the Apache Public License
 * Please see the LICENSE included with this distribution for details.
 */
#import "TiProxy.h"
#import <CoreBluetooth/CoreBluetooth.h>

@interface TiBluetoothUtils : TiProxy {

}

+ (NSArray<CBUUID *> *)CBUUIDArrayFromStringArray:(NSArray<id> *)array;
+ (NSArray<NSUUID *> *)NSUUIDArrayFromStringArray:(NSArray<id> *)array;
+ (NSArray<id> *)stringArrayFromUUIDArray:(NSArray<CBUUID *> *)array;

@end
