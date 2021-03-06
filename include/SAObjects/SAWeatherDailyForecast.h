/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SAWeatherForecast.h"

@class NSNumber;

@interface SAWeatherDailyForecast : SAWeatherForecast {
}
@property(retain, nonatomic) NSNumber* lowTemperature;
@property(retain, nonatomic) NSNumber* highTemperature;
+ (id)dailyForecast;
+ (id)dailyForecastWithDictionary:(id)dictionary context:(id)context;
- (id)encodedClassName;
- (id)groupIdentifier;
@end

