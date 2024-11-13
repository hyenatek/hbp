#import <Foundation/NSArray.h>
#import <Foundation/NSDictionary.h>
#import <Foundation/NSError.h>
#import <Foundation/NSObject.h>
#import <Foundation/NSSet.h>
#import <Foundation/NSString.h>
#import <Foundation/NSValue.h>

@class HbpIntLimit, HbpDayCompanion, HbpPercent, HbpErrorCodeInfo, HbpMonthCompanion, HbpCheckFirmwareUpdateResult, HbpKotlinException, HbpIDownloadListenerStage, HbpKotlinEnumCompanion, HbpKotlinEnum<E>, HbpKotlinArray<T>, HbpFirmwareUpdateReport, HbpConnectState, HbpChargeCurrent, HbpHour, HbpMinute, HbpOptimizedChargingStatus, HbpChargingSetting, HbpYear, HbpMonth, HbpDay, HbpELMDateTime, HbpExtenderPercent, HbpExtenderPercentRange, HbpPercentRange, HbpLongTermPercent, HbpIELMHistoryHistoryCleanConfig, HbpIELMHistoryHistoryConfig, HbpEventType, HbpOptimizedChargingStatusDisable, HbpOptimizedChargingStatusEnable, HbpOptimizedChargingStatusInitial, HbpKotlinByteArray, HbpIPlatformLoggerLevel, HbpKotlinThrowable, HbpIPlatformQuantificationErrorErrorSource, HbpIWrapperSettingENV, HbpChipType, HbpFirmwareReleaseEnvApi, HbpKotlinx_serialization_jsonJson, HbpApiBaseCompanion, HbpBatteryELMInfo, HbpIBatteryELMHandlerCleanHistoryConfig, HbpKotlinPair<__covariant A, __covariant B>, HbpIBatteryELMHandlerChargingResponse, HbpIBatteryELMHandlerGetHistoryConfig, HbpIBatteryELMHandlerHistoryResponse, HbpIBatteryELMHandlerLoggedInfoResponse, HbpIBatteryELMHandlerSetChargingConfig, HbpTimeConfig, HbpIBatteryELMHandlerHistoryNumber, HbpFirmwareFileType, HbpHbpSdkBase, HbpHbpSdkCompanion, HbpHbpSdk, HbpConfigurationBuilder, HbpConfigurationBuilderBaseCompanion, HbpPlatformFileHandler, HbpConfigurationBuilderBase, HbpPlatformDfuUpdater, HbpFirmwareFile, HbpFirmwareCheckStage, HbpFirmwareUpdateState, HbpFirmwareUpdateStage, HbpGuideOperation, HbpParameterItem<ValueType>, HbpHyenaPartCompanion, HbpPartState, HbpBatteryArticleInformation1, HbpBatteryArticleInformation2, HbpProductionDate, HbpTimezoneDate, HbpAssistLevelValueState, HbpHMIPartSpeedUnit, HbpILockPartILockStates, HbpILockPartILockChainLockState, HbpILockPartILockRingLockState, HbpILockPartILockState, HbpTPMSPosition, HbpHyLoggerBase, HbpDefaultHyLoggerBaseCompanion, HbpDefaultHyLoggerBase, HbpDefaultHyLoggerCompanion, HbpLoggerCompanion, HbpKotlinByteIterator, NSData, HbpKotlinRuntimeException, HbpKotlinx_serialization_coreSerializersModule, HbpKotlinx_serialization_jsonJsonDefault, HbpKotlinx_serialization_jsonJsonElement, HbpKotlinx_serialization_jsonJsonConfiguration, HbpKotlinIllegalStateException, HbpKotlinCancellationException, HbpKotlinx_serialization_jsonJsonElementCompanion, HbpKotlinx_serialization_coreSerialKind, HbpKotlinNothing, HbpKotlinUnit;

@protocol HbpKotlinComparable, HbpIFirmwareCheckListener, HbpIDownloadListener, HbpFirmwareUpdateListener, HbpIHyenaDrive, HbpHyenaPart, HbpBatteryAggregateListener, HbpConnectStateListener, HbpErrorCodesListener, HbpRSSIListener, HbpIHyenaParts, HbpBatteryPart, HbpControllerPart, HbpDerailleurPart, HbpExtenderBatteryPart, HbpHMIPart, HbpILockPart, HbpLightPart, HbpTPMSPart, HbpIPercentRange, HbpIELMControl, HbpIELMChargingIELMChargingResponse, HbpIELMChargingIChargingConfig, HbpIELMCharging, HbpIELMHistory, HbpIELMLogged, HbpIELMHistoryIELMHistoryResponse, HbpIELMLoggedIELMLoggedInfoResponse, HbpIDecodeDataProvider, HbpIFileTokenProvider, HbpIGlobalSetting, HbpILoggerFactory, HbpIMonitorBridge, HbpIWrapperSetting, HbpIBaseSetting, HbpILogger, HbpKotlinx_serialization_coreKSerializer, HbpQueue, HbpIHbpSdkBase, HbpLogger, HbpApiTokenProvider, HbpIGlobalSettingWithBridge, HbpILicenseSetting, HbpIMonitorInitialize, HbpIPlatformLogger, HbpIPlatformMeasurer, HbpIPlatformQuantificationError, HbpSecurityKeyHandler, HbpIDecode, HbpIFileProvider, HbpIFirmwareUpdateStage, HbpDfuUpdater, HbpFileHandler, HbpICancelHandler, HbpIFirmwareUpdateListener, HbpIELM, HbpBatteryPartListener, HbpIHbpExceptionInfo, HbpKotlinx_coroutines_coreDeferred, HbpKotlinSuspendFunction0, HbpKotlinIterator, HbpKotlinx_serialization_coreDeserializationStrategy, HbpKotlinx_serialization_coreSerializationStrategy, HbpKotlinx_serialization_coreSerialFormat, HbpKotlinx_serialization_coreStringFormat, HbpKotlinx_serialization_coreEncoder, HbpKotlinx_serialization_coreSerialDescriptor, HbpKotlinx_serialization_coreDecoder, HbpKotlinx_coroutines_coreSelectClause1, HbpKotlinx_coroutines_coreChildHandle, HbpKotlinx_coroutines_coreChildJob, HbpKotlinx_coroutines_coreDisposableHandle, HbpKotlinx_coroutines_coreJob, HbpKotlinSequence, HbpKotlinx_coroutines_coreSelectClause0, HbpKotlinCoroutineContextKey, HbpKotlinCoroutineContextElement, HbpKotlinCoroutineContext, HbpKotlinFunction, HbpKotlinx_serialization_coreSerializersModuleCollector, HbpKotlinKClass, HbpKotlinx_serialization_jsonJsonNamingStrategy, HbpKotlinx_serialization_coreCompositeEncoder, HbpKotlinAnnotation, HbpKotlinx_serialization_coreCompositeDecoder, HbpKotlinx_coroutines_coreSelectInstance, HbpKotlinx_coroutines_coreSelectClause, HbpKotlinx_coroutines_coreParentJob, HbpKotlinKDeclarationContainer, HbpKotlinKAnnotatedElement, HbpKotlinKClassifier;

NS_ASSUME_NONNULL_BEGIN
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wunknown-warning-option"
#pragma clang diagnostic ignored "-Wincompatible-property-type"
#pragma clang diagnostic ignored "-Wnullability"

#pragma push_macro("_Nullable_result")
#if !__has_feature(nullability_nullable_result)
#undef _Nullable_result
#define _Nullable_result _Nullable
#endif

__attribute__((swift_name("KotlinBase")))
@interface HbpBase : NSObject
- (instancetype)init __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
+ (void)initialize __attribute__((objc_requires_super));
@end

@interface HbpBase (HbpBaseCopying) <NSCopying>
@end

__attribute__((swift_name("KotlinMutableSet")))
@interface HbpMutableSet<ObjectType> : NSMutableSet<ObjectType>
@end

__attribute__((swift_name("KotlinMutableDictionary")))
@interface HbpMutableDictionary<KeyType, ObjectType> : NSMutableDictionary<KeyType, ObjectType>
@end

@interface NSError (NSErrorHbpKotlinException)
@property (readonly) id _Nullable kotlinException;
@end

__attribute__((swift_name("KotlinNumber")))
@interface HbpNumber : NSNumber
- (instancetype)initWithChar:(char)value __attribute__((unavailable));
- (instancetype)initWithUnsignedChar:(unsigned char)value __attribute__((unavailable));
- (instancetype)initWithShort:(short)value __attribute__((unavailable));
- (instancetype)initWithUnsignedShort:(unsigned short)value __attribute__((unavailable));
- (instancetype)initWithInt:(int)value __attribute__((unavailable));
- (instancetype)initWithUnsignedInt:(unsigned int)value __attribute__((unavailable));
- (instancetype)initWithLong:(long)value __attribute__((unavailable));
- (instancetype)initWithUnsignedLong:(unsigned long)value __attribute__((unavailable));
- (instancetype)initWithLongLong:(long long)value __attribute__((unavailable));
- (instancetype)initWithUnsignedLongLong:(unsigned long long)value __attribute__((unavailable));
- (instancetype)initWithFloat:(float)value __attribute__((unavailable));
- (instancetype)initWithDouble:(double)value __attribute__((unavailable));
- (instancetype)initWithBool:(BOOL)value __attribute__((unavailable));
- (instancetype)initWithInteger:(NSInteger)value __attribute__((unavailable));
- (instancetype)initWithUnsignedInteger:(NSUInteger)value __attribute__((unavailable));
+ (instancetype)numberWithChar:(char)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedChar:(unsigned char)value __attribute__((unavailable));
+ (instancetype)numberWithShort:(short)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedShort:(unsigned short)value __attribute__((unavailable));
+ (instancetype)numberWithInt:(int)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedInt:(unsigned int)value __attribute__((unavailable));
+ (instancetype)numberWithLong:(long)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedLong:(unsigned long)value __attribute__((unavailable));
+ (instancetype)numberWithLongLong:(long long)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedLongLong:(unsigned long long)value __attribute__((unavailable));
+ (instancetype)numberWithFloat:(float)value __attribute__((unavailable));
+ (instancetype)numberWithDouble:(double)value __attribute__((unavailable));
+ (instancetype)numberWithBool:(BOOL)value __attribute__((unavailable));
+ (instancetype)numberWithInteger:(NSInteger)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedInteger:(NSUInteger)value __attribute__((unavailable));
@end

__attribute__((swift_name("KotlinByte")))
@interface HbpByte : HbpNumber
- (instancetype)initWithChar:(char)value;
+ (instancetype)numberWithChar:(char)value;
@end

__attribute__((swift_name("KotlinUByte")))
@interface HbpUByte : HbpNumber
- (instancetype)initWithUnsignedChar:(unsigned char)value;
+ (instancetype)numberWithUnsignedChar:(unsigned char)value;
@end

__attribute__((swift_name("KotlinShort")))
@interface HbpShort : HbpNumber
- (instancetype)initWithShort:(short)value;
+ (instancetype)numberWithShort:(short)value;
@end

__attribute__((swift_name("KotlinUShort")))
@interface HbpUShort : HbpNumber
- (instancetype)initWithUnsignedShort:(unsigned short)value;
+ (instancetype)numberWithUnsignedShort:(unsigned short)value;
@end

__attribute__((swift_name("KotlinInt")))
@interface HbpInt : HbpNumber
- (instancetype)initWithInt:(int)value;
+ (instancetype)numberWithInt:(int)value;
@end

__attribute__((swift_name("KotlinUInt")))
@interface HbpUInt : HbpNumber
- (instancetype)initWithUnsignedInt:(unsigned int)value;
+ (instancetype)numberWithUnsignedInt:(unsigned int)value;
@end

__attribute__((swift_name("KotlinLong")))
@interface HbpLong : HbpNumber
- (instancetype)initWithLongLong:(long long)value;
+ (instancetype)numberWithLongLong:(long long)value;
@end

__attribute__((swift_name("KotlinULong")))
@interface HbpULong : HbpNumber
- (instancetype)initWithUnsignedLongLong:(unsigned long long)value;
+ (instancetype)numberWithUnsignedLongLong:(unsigned long long)value;
@end

__attribute__((swift_name("KotlinFloat")))
@interface HbpFloat : HbpNumber
- (instancetype)initWithFloat:(float)value;
+ (instancetype)numberWithFloat:(float)value;
@end

__attribute__((swift_name("KotlinDouble")))
@interface HbpDouble : HbpNumber
- (instancetype)initWithDouble:(double)value;
+ (instancetype)numberWithDouble:(double)value;
@end

__attribute__((swift_name("KotlinBoolean")))
@interface HbpBoolean : HbpNumber
- (instancetype)initWithBool:(BOOL)value;
+ (instancetype)numberWithBool:(BOOL)value;
@end

__attribute__((swift_name("IntLimit")))
@interface HbpIntLimit : HbpBase
- (instancetype)initWithValue:(int32_t)value min:(int32_t)min max:(int32_t)max __attribute__((swift_name("init(value:min:max:)"))) __attribute__((objc_designated_initializer));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t max __attribute__((swift_name("max")));
@property (readonly) int32_t min __attribute__((swift_name("min")));

/**
 * @note This property has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
@property (readonly) NSString *outOfRangeMsg __attribute__((swift_name("outOfRangeMsg")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ChargeCurrent")))
@interface HbpChargeCurrent : HbpIntLimit

/**
 * @note This method converts instances of IllegalArgumentException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (instancetype _Nullable)initWithCurrent:(int32_t)current error:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("init(current:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithValue:(int32_t)value min:(int32_t)min max:(int32_t)max __attribute__((swift_name("init(value:min:max:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (readonly) int32_t current __attribute__((swift_name("current")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Day")))
@interface HbpDay : HbpIntLimit
- (instancetype)initWithValue:(int32_t)value __attribute__((swift_name("init(value:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithValue:(int32_t)value min:(int32_t)min max:(int32_t)max __attribute__((swift_name("init(value:min:max:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) HbpDayCompanion *companion __attribute__((swift_name("companion")));

/**
 * @note This property has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
@property (readonly) NSString *outOfRangeMsg __attribute__((swift_name("outOfRangeMsg")));
@property (readonly) int32_t value __attribute__((swift_name("value")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Day.Companion")))
@interface HbpDayCompanion : HbpBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) HbpDayCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) int32_t DAY_CLEAN __attribute__((swift_name("DAY_CLEAN")));
@end

__attribute__((swift_name("ErrorCodeInfo")))
@interface HbpErrorCodeInfo : HbpBase
- (instancetype)initWithErrorCode:(int32_t)errorCode detailCode:(int32_t)detailCode __attribute__((swift_name("init(errorCode:detailCode:)"))) __attribute__((objc_designated_initializer));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t detailCode __attribute__((swift_name("detailCode")));
@property (readonly) int32_t errorCode __attribute__((swift_name("errorCode")));
@end

__attribute__((swift_name("Percent")))
@interface HbpPercent : HbpIntLimit

/**
 * @note This method converts instances of IllegalArgumentException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (instancetype _Nullable)initWithValue:(int32_t)value error:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("init(value:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithValue:(int32_t)value min:(int32_t)min max:(int32_t)max __attribute__((swift_name("init(value:min:max:)"))) __attribute__((objc_designated_initializer));
@property (readonly) int32_t value __attribute__((swift_name("value")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ExtenderPercent")))
@interface HbpExtenderPercent : HbpPercent

/**
 * @note This method converts instances of IllegalArgumentException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (instancetype _Nullable)initWithValue:(int32_t)value error:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("init(value:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithValue:(int32_t)value min:(int32_t)min max:(int32_t)max __attribute__((swift_name("init(value:min:max:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Hour")))
@interface HbpHour : HbpIntLimit
- (instancetype)initWithValue:(int32_t)value __attribute__((swift_name("init(value:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithValue:(int32_t)value min:(int32_t)min max:(int32_t)max __attribute__((swift_name("init(value:min:max:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (readonly) int32_t value __attribute__((swift_name("value")));
@end

__attribute__((swift_name("IHbpExceptionInfo")))
@protocol HbpIHbpExceptionInfo
@required
@property HbpErrorCodeInfo *errorCodeInfo __attribute__((swift_name("errorCodeInfo")));
@end

__attribute__((swift_name("InternalExceptionInfo")))
@protocol HbpInternalExceptionInfo
@required
@property HbpInt * _Nullable limitTime __attribute__((swift_name("limitTime")));
@property NSString * _Nullable rawData __attribute__((swift_name("rawData")));
@property NSString * _Nullable requestID __attribute__((swift_name("requestID")));
@property NSString * _Nullable responseID __attribute__((swift_name("responseID")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LongTermPercent")))
@interface HbpLongTermPercent : HbpPercent

/**
 * @note This method converts instances of IllegalArgumentException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (instancetype _Nullable)initWithValue:(int32_t)value error:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("init(value:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithValue:(int32_t)value min:(int32_t)min max:(int32_t)max __attribute__((swift_name("init(value:min:max:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Minute")))
@interface HbpMinute : HbpIntLimit
- (instancetype)initWithValue:(int32_t)value __attribute__((swift_name("init(value:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithValue:(int32_t)value min:(int32_t)min max:(int32_t)max __attribute__((swift_name("init(value:min:max:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (readonly) int32_t value __attribute__((swift_name("value")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Month")))
@interface HbpMonth : HbpIntLimit
- (instancetype)initWithValue:(int32_t)value __attribute__((swift_name("init(value:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithValue:(int32_t)value min:(int32_t)min max:(int32_t)max __attribute__((swift_name("init(value:min:max:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) HbpMonthCompanion *companion __attribute__((swift_name("companion")));

/**
 * @note This property has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
@property (readonly) NSString *outOfRangeMsg __attribute__((swift_name("outOfRangeMsg")));
@property (readonly) int32_t value __attribute__((swift_name("value")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Month.Companion")))
@interface HbpMonthCompanion : HbpBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) HbpMonthCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) int32_t MONTH_CLEAN __attribute__((swift_name("MONTH_CLEAN")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Second")))
@interface HbpSecond : HbpIntLimit
- (instancetype)initWithValue:(int32_t)value __attribute__((swift_name("init(value:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithValue:(int32_t)value min:(int32_t)min max:(int32_t)max __attribute__((swift_name("init(value:min:max:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (readonly) int32_t value __attribute__((swift_name("value")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TimezoneDate")))
@interface HbpTimezoneDate : HbpBase
- (instancetype)initWithUnixTimestamp:(int64_t)unixTimestamp timezoneId:(NSString *)timezoneId __attribute__((swift_name("init(unixTimestamp:timezoneId:)"))) __attribute__((objc_designated_initializer));
- (NSString *)getTimeStringWithTimezone __attribute__((swift_name("getTimeStringWithTimezone()")));
@property (readonly) int64_t epochMilliseconds __attribute__((swift_name("epochMilliseconds")));
@property (readonly) int64_t epochSeconds __attribute__((swift_name("epochSeconds")));
@property (readonly) NSString *timezoneId __attribute__((swift_name("timezoneId")));
@property (readonly) int32_t totalTimezoneOffsetSeconds __attribute__((swift_name("totalTimezoneOffsetSeconds")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Year")))
@interface HbpYear : HbpIntLimit
- (instancetype)initWithValue:(int32_t)value __attribute__((swift_name("init(value:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithValue:(int32_t)value min:(int32_t)min max:(int32_t)max __attribute__((swift_name("init(value:min:max:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));

/**
 * @note This property has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
@property (readonly) NSString *outOfRangeMsg __attribute__((swift_name("outOfRangeMsg")));
@property (readonly) int32_t value __attribute__((swift_name("value")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CheckFirmwareUpdateResult")))
@interface HbpCheckFirmwareUpdateResult : HbpBase
- (instancetype)initWithIsNeedUpdate:(BOOL)isNeedUpdate firmwareVersion:(NSString * _Nullable)firmwareVersion releaseNote:(NSString * _Nullable)releaseNote releaseDate:(NSString * _Nullable)releaseDate __attribute__((swift_name("init(isNeedUpdate:firmwareVersion:releaseNote:releaseDate:)"))) __attribute__((objc_designated_initializer));
- (HbpCheckFirmwareUpdateResult *)doCopyIsNeedUpdate:(BOOL)isNeedUpdate firmwareVersion:(NSString * _Nullable)firmwareVersion releaseNote:(NSString * _Nullable)releaseNote releaseDate:(NSString * _Nullable)releaseDate __attribute__((swift_name("doCopy(isNeedUpdate:firmwareVersion:releaseNote:releaseDate:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable firmwareVersion __attribute__((swift_name("firmwareVersion")));
@property (readonly) BOOL isNeedUpdate __attribute__((swift_name("isNeedUpdate")));
@property (readonly) NSString * _Nullable releaseDate __attribute__((swift_name("releaseDate")));
@property (readonly) NSString * _Nullable releaseNote __attribute__((swift_name("releaseNote")));
@end

__attribute__((swift_name("ICancelHandler")))
@protocol HbpICancelHandler
@required
- (BOOL)cancelDownload __attribute__((swift_name("cancelDownload()")));
@end

__attribute__((swift_name("IDownloadListener")))
@protocol HbpIDownloadListener
@required
- (void)onErrorException:(HbpKotlinException *)exception __attribute__((swift_name("onError(exception:)")));
- (void)onProgressPercentage:(int32_t)percentage __attribute__((swift_name("onProgress(percentage:)")));
- (void)onStateDidChangeStage:(HbpIDownloadListenerStage *)stage __attribute__((swift_name("onStateDidChange(stage:)")));
@end

__attribute__((swift_name("KotlinComparable")))
@protocol HbpKotlinComparable
@required
- (int32_t)compareToOther:(id _Nullable)other __attribute__((swift_name("compareTo(other:)")));
@end

__attribute__((swift_name("KotlinEnum")))
@interface HbpKotlinEnum<E> : HbpBase <HbpKotlinComparable>
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) HbpKotlinEnumCompanion *companion __attribute__((swift_name("companion")));
- (int32_t)compareToOther:(E)other __attribute__((swift_name("compareTo(other:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) int32_t ordinal __attribute__((swift_name("ordinal")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("IDownloadListenerStage")))
@interface HbpIDownloadListenerStage : HbpKotlinEnum<HbpIDownloadListenerStage *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) HbpIDownloadListenerStage *start __attribute__((swift_name("start")));
@property (class, readonly) HbpIDownloadListenerStage *downloading __attribute__((swift_name("downloading")));
@property (class, readonly) HbpIDownloadListenerStage *completed __attribute__((swift_name("completed")));
@property (class, readonly) HbpIDownloadListenerStage *cancelled __attribute__((swift_name("cancelled")));
+ (HbpKotlinArray<HbpIDownloadListenerStage *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<HbpIDownloadListenerStage *> *entries __attribute__((swift_name("entries")));
@end

__attribute__((swift_name("IFirmwareCheckListener")))
@protocol HbpIFirmwareCheckListener
@required
- (void)onCheckErrorException:(HbpKotlinException *)exception report:(HbpFirmwareUpdateReport *)report __attribute__((swift_name("onCheckError(exception:report:)")));
@end

__attribute__((swift_name("IFirmwareUpdateListener")))
@protocol HbpIFirmwareUpdateListener
@required
- (id<HbpIFirmwareCheckListener>)handleCheckErrorListener __attribute__((swift_name("handleCheckErrorListener()")));
- (id<HbpIDownloadListener>)handleDownloadListener __attribute__((swift_name("handleDownloadListener()")));
- (id<HbpFirmwareUpdateListener>)handleFirmwareUpdateListener __attribute__((swift_name("handleFirmwareUpdateListener()")));
@end

__attribute__((swift_name("BatteryAggregateListener")))
@protocol HbpBatteryAggregateListener
@required
- (void)onCapacityInPercentageValue:(int32_t)value __attribute__((swift_name("onCapacityInPercentage(value:)")));
- (void)onChargingRemainSecondSecond:(int32_t)second __attribute__((swift_name("onChargingRemainSecond(second:)")));
- (void)onRemainDistanceInKmRanges:(NSArray<HbpFloat *> *)ranges __attribute__((swift_name("onRemainDistanceInKm(ranges:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ConnectState")))
@interface HbpConnectState : HbpKotlinEnum<HbpConnectState *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) HbpConnectState *connecting __attribute__((swift_name("connecting")));
@property (class, readonly) HbpConnectState *connected __attribute__((swift_name("connected")));
@property (class, readonly) HbpConnectState *disconnecting __attribute__((swift_name("disconnecting")));
@property (class, readonly) HbpConnectState *disconnected __attribute__((swift_name("disconnected")));
+ (HbpKotlinArray<HbpConnectState *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<HbpConnectState *> *entries __attribute__((swift_name("entries")));
@end

__attribute__((swift_name("ConnectStateListener")))
@protocol HbpConnectStateListener
@required
- (void)onStateChangedState:(HbpConnectState *)state __attribute__((swift_name("onStateChanged(state:)")));
@end

__attribute__((swift_name("ErrorCodesListener")))
@protocol HbpErrorCodesListener
@required
- (void)onErrorCodesErrorCodes:(NSArray<HbpInt *> *)errorCodes __attribute__((swift_name("onErrorCodes(errorCodes:)")));
@end

__attribute__((swift_name("IHbpSdkBase")))
@protocol HbpIHbpSdkBase
@required
- (void)discoverByBikeIdBikeId:(NSString *)bikeId withTimeoutInMillis:(int64_t)withTimeoutInMillis hyDeviceFound:(void (^ _Nullable)(NSString * _Nullable))hyDeviceFound cb:(void (^)(id<HbpIHyenaDrive> _Nullable, HbpKotlinException * _Nullable))cb __attribute__((swift_name("discoverByBikeId(bikeId:withTimeoutInMillis:hyDeviceFound:cb:)")));
- (void)discoverByPeripheralIdPeripheralId:(NSString *)peripheralId withTimeoutInMillis:(int64_t)withTimeoutInMillis hyDeviceFound:(void (^ _Nullable)(NSString * _Nullable))hyDeviceFound cb:(void (^)(id<HbpIHyenaDrive> _Nullable, HbpKotlinException * _Nullable))cb __attribute__((swift_name("discoverByPeripheralId(peripheralId:withTimeoutInMillis:hyDeviceFound:cb:)")));
- (void)discoverByWelcomeWithTimeoutInMillis:(int64_t)withTimeoutInMillis hyDeviceFound:(void (^ _Nullable)(NSString * _Nullable))hyDeviceFound cb:(void (^)(id<HbpIHyenaDrive> _Nullable, HbpKotlinException * _Nullable))cb __attribute__((swift_name("discoverByWelcome(withTimeoutInMillis:hyDeviceFound:cb:)")));
- (id<HbpIHyenaDrive> _Nullable)getHyenaDrivePeripheralId:(NSString *)peripheralId __attribute__((swift_name("getHyenaDrive(peripheralId:)")));
- (void)scanCb:(void (^)(id<HbpIHyenaDrive> _Nullable, HbpKotlinException * _Nullable))cb __attribute__((swift_name("scan(cb:)")));
- (void)scanDfuExceptionCb:(void (^ _Nullable)(HbpKotlinException *))exceptionCb partCb:(void (^)(id<HbpHyenaPart>))partCb __attribute__((swift_name("scanDfu(exceptionCb:partCb:)")));
- (void)setAutoConnectAutoConnect:(BOOL)autoConnect __attribute__((swift_name("setAutoConnect(autoConnect:)")));
- (void)stopScan __attribute__((swift_name("stopScan()")));
@end

__attribute__((swift_name("IHyenaDrive")))
@protocol HbpIHyenaDrive
@required
- (void)addBatteryListenerListener:(id<HbpBatteryAggregateListener>)listener __attribute__((swift_name("addBatteryListener(listener:)")));
- (void)addConnectStateListenerListener:(id<HbpConnectStateListener>)listener __attribute__((swift_name("addConnectStateListener(listener:)")));
- (void)addErrorCodesListenerListener:(id<HbpErrorCodesListener>)listener __attribute__((swift_name("addErrorCodesListener(listener:)")));
- (void)addRSSIListenerListener:(id<HbpRSSIListener>)listener __attribute__((swift_name("addRSSIListener(listener:)")));
- (void)connectCb:(void (^)(HbpBoolean *, HbpKotlinException * _Nullable))cb __attribute__((swift_name("connect(cb:)")));
- (void)disconnect __attribute__((swift_name("disconnect()")));

/**
 * @note This method converts instances of Exception to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getBikeIdRefresh:(BOOL)refresh completionHandler:(void (^)(NSString * _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("getBikeId(refresh:completionHandler:)")));

/**
 * @note This method converts instances of Exception to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getFrameNumberRefresh:(BOOL)refresh completionHandler:(void (^)(NSString * _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("getFrameNumber(refresh:completionHandler:)")));
- (void)removeBatteryListenerListener:(id<HbpBatteryAggregateListener>)listener __attribute__((swift_name("removeBatteryListener(listener:)")));
- (void)removeConnectStateListenerListener:(id<HbpConnectStateListener>)listener __attribute__((swift_name("removeConnectStateListener(listener:)")));
- (void)removeErrorCodesListenerListener:(id<HbpErrorCodesListener>)listener __attribute__((swift_name("removeErrorCodesListener(listener:)")));
- (void)removeRSSIListenerListener:(id<HbpRSSIListener>)listener __attribute__((swift_name("removeRSSIListener(listener:)")));
@property (readonly) HbpConnectState *currentConnectState __attribute__((swift_name("currentConnectState")));
@property (readonly) id<HbpIHyenaParts> partsCongregate __attribute__((swift_name("partsCongregate")));
@property (readonly) NSString *peripheralId __attribute__((swift_name("peripheralId")));
@end

__attribute__((swift_name("IHyenaParts")))
@protocol HbpIHyenaParts
@required
@property (readonly) id<HbpBatteryPart> batteryPart __attribute__((swift_name("batteryPart")));
@property (readonly) id<HbpControllerPart> controllerPart __attribute__((swift_name("controllerPart")));
@property (readonly) id<HbpDerailleurPart> derailleurPart __attribute__((swift_name("derailleurPart")));
@property (readonly) id<HbpExtenderBatteryPart> extenderBatteryPart __attribute__((swift_name("extenderBatteryPart")));
@property (readonly) id<HbpHMIPart> hmiPart __attribute__((swift_name("hmiPart")));
@property (readonly) id<HbpILockPart> iLockPart __attribute__((swift_name("iLockPart")));
@property (readonly) id<HbpLightPart> lightPart __attribute__((swift_name("lightPart")));
@property (readonly) id<HbpTPMSPart> tpmsPart __attribute__((swift_name("tpmsPart")));
@end

__attribute__((swift_name("RSSIListener")))
@protocol HbpRSSIListener
@required
- (void)onRSSIValueValue:(HbpInt * _Nullable)value __attribute__((swift_name("onRSSIValue(value:)")));
@end

__attribute__((swift_name("ChargingSetting")))
@interface HbpChargingSetting : HbpBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (readonly) HbpChargeCurrent * _Nullable chargeCurrent __attribute__((swift_name("chargeCurrent")));
@property (readonly) HbpHour * _Nullable endHour __attribute__((swift_name("endHour")));
@property (readonly) HbpMinute * _Nullable endMinute __attribute__((swift_name("endMinute")));
@property (readonly) HbpHour * _Nullable startHour __attribute__((swift_name("startHour")));
@property (readonly) HbpMinute * _Nullable startMinute __attribute__((swift_name("startMinute")));
@property (readonly) HbpOptimizedChargingStatus *status __attribute__((swift_name("status")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DisableChartingSetting")))
@interface HbpDisableChartingSetting : HbpChargingSetting
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (readonly) HbpChargeCurrent * _Nullable chargeCurrent __attribute__((swift_name("chargeCurrent")));
@property (readonly) HbpHour * _Nullable endHour __attribute__((swift_name("endHour")));
@property (readonly) HbpMinute * _Nullable endMinute __attribute__((swift_name("endMinute")));
@property (readonly) HbpHour * _Nullable startHour __attribute__((swift_name("startHour")));
@property (readonly) HbpMinute * _Nullable startMinute __attribute__((swift_name("startMinute")));
@property (readonly) HbpOptimizedChargingStatus *status __attribute__((swift_name("status")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ELMDateTime")))
@interface HbpELMDateTime : HbpBase
- (instancetype)initWithYear:(HbpYear *)year month:(HbpMonth *)month day:(HbpDay *)day hour:(HbpHour *)hour min:(HbpMinute *)min __attribute__((swift_name("init(year:month:day:hour:min:)"))) __attribute__((objc_designated_initializer));
- (HbpELMDateTime *)doCopyYear:(HbpYear *)year month:(HbpMonth *)month day:(HbpDay *)day hour:(HbpHour *)hour min:(HbpMinute *)min __attribute__((swift_name("doCopy(year:month:day:hour:min:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) HbpDay *day __attribute__((swift_name("day")));
@property (readonly) HbpHour *hour __attribute__((swift_name("hour")));
@property (readonly) HbpMinute *min __attribute__((swift_name("min")));
@property (readonly) HbpMonth *month __attribute__((swift_name("month")));
@property (readonly) HbpYear *year __attribute__((swift_name("year")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("EnableChartingSetting")))
@interface HbpEnableChartingSetting : HbpChargingSetting
- (instancetype)initWithChargeCurrent:(HbpChargeCurrent *)chargeCurrent startHour:(HbpHour *)startHour startMinute:(HbpMinute *)startMinute endHour:(HbpHour *)endHour endMinute:(HbpMinute *)endMinute __attribute__((swift_name("init(chargeCurrent:startHour:startMinute:endHour:endMinute:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
@property (readonly) HbpChargeCurrent *chargeCurrent __attribute__((swift_name("chargeCurrent")));
@property (readonly) HbpHour *endHour __attribute__((swift_name("endHour")));
@property (readonly) HbpMinute *endMinute __attribute__((swift_name("endMinute")));
@property (readonly) HbpHour *startHour __attribute__((swift_name("startHour")));
@property (readonly) HbpMinute *startMinute __attribute__((swift_name("startMinute")));
@property (readonly) HbpOptimizedChargingStatus *status __attribute__((swift_name("status")));
@end

__attribute__((swift_name("IPercentRange")))
@protocol HbpIPercentRange
@required
- (BOOL)isSameOther:(id<HbpIPercentRange>)other __attribute__((swift_name("isSame(other:)")));
@property (readonly) HbpPercent *lower __attribute__((swift_name("lower")));
@property (readonly) HbpPercent *upper __attribute__((swift_name("upper")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ExtenderPercentRange")))
@interface HbpExtenderPercentRange : HbpBase <HbpIPercentRange>
- (instancetype)initWithUpper:(HbpExtenderPercent *)upper lower:(HbpExtenderPercent *)lower __attribute__((swift_name("init(upper:lower:)"))) __attribute__((objc_designated_initializer));
- (HbpExtenderPercentRange *)doCopyUpper:(HbpExtenderPercent *)upper lower:(HbpExtenderPercent *)lower __attribute__((swift_name("doCopy(upper:lower:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) HbpExtenderPercent *lower __attribute__((swift_name("lower")));
@property (readonly) HbpExtenderPercent *upper __attribute__((swift_name("upper")));
@end

__attribute__((swift_name("IELM")))
@protocol HbpIELM
@required
@property (readonly) id<HbpIELMControl> elm __attribute__((swift_name("elm")));
@end

__attribute__((swift_name("IELMCharging")))
@protocol HbpIELMCharging
@required

/**
 * @note This method converts instances of Exception to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getWithCompletionHandler:(void (^)(id<HbpIELMChargingIELMChargingResponse> _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("get(completionHandler:)")));

/**
 * @note This method converts instances of Exception to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)setChargingConfig:(id<HbpIELMChargingIChargingConfig>)chargingConfig completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("set(chargingConfig:completionHandler:)")));
@end

__attribute__((swift_name("IELMChargingIChargingConfig")))
@protocol HbpIELMChargingIChargingConfig
@required
@property (readonly) BOOL extendedMode __attribute__((swift_name("extendedMode")));
@property (readonly) id<HbpIPercentRange> extenderChargingRange __attribute__((swift_name("extenderChargingRange")));
@property (readonly) HbpPercent *longTermCharging __attribute__((swift_name("longTermCharging")));
@property (readonly) BOOL longTermMode __attribute__((swift_name("longTermMode")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("IELMChargingExtenderChargingConfig")))
@interface HbpIELMChargingExtenderChargingConfig : HbpBase <HbpIELMChargingIChargingConfig>
- (instancetype)initWithExtenderChargingRange:(HbpExtenderPercentRange *)extenderChargingRange __attribute__((swift_name("init(extenderChargingRange:)"))) __attribute__((objc_designated_initializer));
@property (readonly) BOOL extendedMode __attribute__((swift_name("extendedMode")));
@property (readonly) HbpExtenderPercentRange *extenderChargingRange __attribute__((swift_name("extenderChargingRange")));
@property (readonly) HbpPercent *longTermCharging __attribute__((swift_name("longTermCharging")));
@property (readonly) BOOL longTermMode __attribute__((swift_name("longTermMode")));
@end

__attribute__((swift_name("IELMChargingIELMChargingResponse")))
@protocol HbpIELMChargingIELMChargingResponse
@required
@property (readonly) BOOL extendedMode __attribute__((swift_name("extendedMode")));
@property (readonly) HbpPercent *longTermCharge __attribute__((swift_name("longTermCharge")));
@property (readonly) BOOL longTermMode __attribute__((swift_name("longTermMode")));
@property (readonly) HbpPercentRange *stateOfCharge __attribute__((swift_name("stateOfCharge")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("IELMChargingLongTermChargingConfig")))
@interface HbpIELMChargingLongTermChargingConfig : HbpBase <HbpIELMChargingIChargingConfig>
- (instancetype)initWithLongTermCharging:(HbpLongTermPercent *)longTermCharging __attribute__((swift_name("init(longTermCharging:)"))) __attribute__((objc_designated_initializer));
@property (readonly) BOOL extendedMode __attribute__((swift_name("extendedMode")));
@property (readonly) HbpExtenderPercentRange *extenderChargingRange __attribute__((swift_name("extenderChargingRange")));
@property (readonly) HbpLongTermPercent *longTermCharging __attribute__((swift_name("longTermCharging")));
@property (readonly) BOOL longTermMode __attribute__((swift_name("longTermMode")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("IELMChargingMixChargingConfig")))
@interface HbpIELMChargingMixChargingConfig : HbpBase <HbpIELMChargingIChargingConfig>
- (instancetype)initWithExtendedMode:(BOOL)extendedMode longTermMode:(BOOL)longTermMode extenderChargingRange:(HbpExtenderPercentRange *)extenderChargingRange longTermCharging:(HbpLongTermPercent *)longTermCharging __attribute__((swift_name("init(extendedMode:longTermMode:extenderChargingRange:longTermCharging:)"))) __attribute__((objc_designated_initializer));
@property (readonly) BOOL extendedMode __attribute__((swift_name("extendedMode")));
@property (readonly) HbpExtenderPercentRange *extenderChargingRange __attribute__((swift_name("extenderChargingRange")));
@property (readonly) HbpLongTermPercent *longTermCharging __attribute__((swift_name("longTermCharging")));
@property (readonly) BOOL longTermMode __attribute__((swift_name("longTermMode")));
@end

__attribute__((swift_name("IELMControl")))
@protocol HbpIELMControl
@required
@property (readonly) id<HbpIELMCharging> charging __attribute__((swift_name("charging")));
@property (readonly) id<HbpIELMHistory> history __attribute__((swift_name("history")));
@property (readonly) id<HbpIELMLogged> logged __attribute__((swift_name("logged")));
@end

__attribute__((swift_name("IELMHistory")))
@protocol HbpIELMHistory
@required

/**
 * @note This method converts instances of Exception to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)cleanCleanHistory:(HbpIELMHistoryHistoryCleanConfig *)cleanHistory completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("clean(cleanHistory:completionHandler:)")));

/**
 * @note This method converts instances of Exception to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getAllHistoryConfig:(HbpIELMHistoryHistoryConfig *)historyConfig completionHandler:(void (^)(NSArray<id<HbpIELMHistoryIELMHistoryResponse>> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getAll(historyConfig:completionHandler:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("IELMHistoryHistoryCleanConfig")))
@interface HbpIELMHistoryHistoryCleanConfig : HbpBase
- (instancetype)initWithElmDateTime:(HbpELMDateTime *)elmDateTime __attribute__((swift_name("init(elmDateTime:)"))) __attribute__((objc_designated_initializer));
- (HbpIELMHistoryHistoryCleanConfig *)doCopyElmDateTime:(HbpELMDateTime *)elmDateTime __attribute__((swift_name("doCopy(elmDateTime:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) HbpELMDateTime *elmDateTime __attribute__((swift_name("elmDateTime")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("IELMHistoryHistoryConfig")))
@interface HbpIELMHistoryHistoryConfig : HbpBase
- (instancetype)initWithIgnoreCleaned:(BOOL)ignoreCleaned __attribute__((swift_name("init(ignoreCleaned:)"))) __attribute__((objc_designated_initializer));
- (HbpIELMHistoryHistoryConfig *)doCopyIgnoreCleaned:(BOOL)ignoreCleaned __attribute__((swift_name("doCopy(ignoreCleaned:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) BOOL ignoreCleaned __attribute__((swift_name("ignoreCleaned")));
@end

__attribute__((swift_name("IELMHistoryIELMHistoryResponse")))
@protocol HbpIELMHistoryIELMHistoryResponse
@required
@property (readonly) HbpELMDateTime *elmDateTime __attribute__((swift_name("elmDateTime")));
@property (readonly) HbpEventType *eventType __attribute__((swift_name("eventType")));
@property (readonly) BOOL extendedMode __attribute__((swift_name("extendedMode")));
@property (readonly) BOOL longTermMode __attribute__((swift_name("longTermMode")));
@property (readonly) HbpPercent *stateOfCharge __attribute__((swift_name("stateOfCharge")));
@property (readonly) HbpPercent *stateOfHealth __attribute__((swift_name("stateOfHealth")));
@end

__attribute__((swift_name("IELMLogged")))
@protocol HbpIELMLogged
@required

/**
 * @note This method converts instances of Exception to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getLoggedInfoWithCompletionHandler:(void (^)(id<HbpIELMLoggedIELMLoggedInfoResponse> _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getLoggedInfo(completionHandler:)")));
@end

__attribute__((swift_name("IELMLoggedIELMLoggedInfoResponse")))
@protocol HbpIELMLoggedIELMLoggedInfoResponse
@required
@property (readonly) uint32_t cycleCount __attribute__((swift_name("cycleCount")));
@property (readonly) uint32_t enableCount __attribute__((swift_name("enableCount")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("InitialChartingSetting")))
@interface HbpInitialChartingSetting : HbpChargingSetting
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (readonly) HbpChargeCurrent * _Nullable chargeCurrent __attribute__((swift_name("chargeCurrent")));
@property (readonly) HbpHour * _Nullable endHour __attribute__((swift_name("endHour")));
@property (readonly) HbpMinute * _Nullable endMinute __attribute__((swift_name("endMinute")));
@property (readonly) HbpHour * _Nullable startHour __attribute__((swift_name("startHour")));
@property (readonly) HbpMinute * _Nullable startMinute __attribute__((swift_name("startMinute")));
@property (readonly) HbpOptimizedChargingStatus *status __attribute__((swift_name("status")));
@end

__attribute__((swift_name("OptimizedChargingStatus")))
@interface HbpOptimizedChargingStatus : HbpBase
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("OptimizedChargingStatus.Disable")))
@interface HbpOptimizedChargingStatusDisable : HbpOptimizedChargingStatus
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)disable __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) HbpOptimizedChargingStatusDisable *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("OptimizedChargingStatus.Enable")))
@interface HbpOptimizedChargingStatusEnable : HbpOptimizedChargingStatus
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)enable __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) HbpOptimizedChargingStatusEnable *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("OptimizedChargingStatus.Initial")))
@interface HbpOptimizedChargingStatusInitial : HbpOptimizedChargingStatus
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)initial __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) HbpOptimizedChargingStatusInitial *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PercentRange")))
@interface HbpPercentRange : HbpBase <HbpIPercentRange>
- (instancetype)initWithUpper:(HbpPercent *)upper lower:(HbpPercent *)lower __attribute__((swift_name("init(upper:lower:)"))) __attribute__((objc_designated_initializer));
- (HbpPercentRange *)doCopyUpper:(HbpPercent *)upper lower:(HbpPercent *)lower __attribute__((swift_name("doCopy(upper:lower:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) HbpPercent *lower __attribute__((swift_name("lower")));
@property (readonly) HbpPercent *upper __attribute__((swift_name("upper")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DownloadExceptionCatcher")))
@interface HbpDownloadExceptionCatcher : HbpBase
- (instancetype)initWithException:(HbpKotlinException *)exception __attribute__((swift_name("init(exception:)"))) __attribute__((objc_designated_initializer));
@property (readonly) HbpKotlinException *exception __attribute__((swift_name("exception")));
@property (readonly) BOOL isCancel __attribute__((swift_name("isCancel")));
@end

__attribute__((swift_name("IDecode")))
@protocol HbpIDecode
@required
- (id<HbpIDecodeDataProvider> _Nullable)decodeKey:(NSString *)key token:(NSString *)token __attribute__((swift_name("decode(key:token:)")));
@end

__attribute__((swift_name("IDecodeDataProvider")))
@protocol HbpIDecodeDataProvider
@required
@property (readonly) NSArray<NSString *> *appIds __attribute__((swift_name("appIds")));
@end

__attribute__((swift_name("IFileProvider")))
@protocol HbpIFileProvider
@required
- (id<HbpIFileTokenProvider> _Nullable)getFile __attribute__((swift_name("getFile()")));
@end

__attribute__((swift_name("IFileTokenProvider")))
@protocol HbpIFileTokenProvider
@required
@end

__attribute__((swift_name("IFileTokenStreamProvider")))
@protocol HbpIFileTokenStreamProvider <HbpIFileTokenProvider>
@required
@property (readonly) HbpKotlinByteArray *stream __attribute__((swift_name("stream")));
@end

__attribute__((swift_name("IGlobalSetting")))
@protocol HbpIGlobalSetting
@required
- (void)addAttributeKey:(NSString *)key value:(id)value __attribute__((swift_name("addAttribute(key:value:)")));
- (void)deleteAttributeKey:(NSString *)key __attribute__((swift_name("deleteAttribute(key:)")));
@end

__attribute__((swift_name("IMonitorBridge")))
@protocol HbpIMonitorBridge
@required
- (void)setLogManagerManager:(id<HbpILoggerFactory>)manager __attribute__((swift_name("setLogManager(manager:)")));
@end

__attribute__((swift_name("IGlobalSettingWithBridge")))
@protocol HbpIGlobalSettingWithBridge <HbpIGlobalSetting, HbpIMonitorBridge>
@required
@end

__attribute__((swift_name("IMonitorInitialize")))
@protocol HbpIMonitorInitialize
@required
- (void)doInitContext:(id)context wrapperSetting:(id<HbpIWrapperSetting>)wrapperSetting disableSession:(BOOL)disableSession __attribute__((swift_name("doInit(context:wrapperSetting:disableSession:)")));
@end

__attribute__((swift_name("IPlatformLogger")))
@protocol HbpIPlatformLogger
@required
- (void)addCategoryKey:(NSString *)key value:(NSString * _Nullable)value __attribute__((swift_name("addCategory(key:value:)")));
- (void)deleteCategoryKey:(NSString *)key __attribute__((swift_name("deleteCategory(key:)")));
- (void)emitLevel:(HbpIPlatformLoggerLevel *)level msg:(NSString *)msg throwable:(HbpKotlinThrowable * _Nullable)throwable attributes:(NSDictionary<NSString *, id> *)attributes __attribute__((swift_name("emit(level:msg:throwable:attributes:)")));
- (id<HbpIGlobalSetting>)getCommonSetting __attribute__((swift_name("getCommonSetting()")));
- (void)doInitLoggerLoggerName:(NSString *)loggerName __attribute__((swift_name("doInitLogger(loggerName:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("IPlatformLoggerLevel")))
@interface HbpIPlatformLoggerLevel : HbpKotlinEnum<HbpIPlatformLoggerLevel *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) HbpIPlatformLoggerLevel *debug __attribute__((swift_name("debug")));
@property (class, readonly) HbpIPlatformLoggerLevel *info __attribute__((swift_name("info")));
@property (class, readonly) HbpIPlatformLoggerLevel *warn __attribute__((swift_name("warn")));
@property (class, readonly) HbpIPlatformLoggerLevel *error __attribute__((swift_name("error")));
@property (class, readonly) HbpIPlatformLoggerLevel *wtf __attribute__((swift_name("wtf")));
+ (HbpKotlinArray<HbpIPlatformLoggerLevel *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<HbpIPlatformLoggerLevel *> *entries __attribute__((swift_name("entries")));
@end

__attribute__((swift_name("IPlatformMeasurer")))
@protocol HbpIPlatformMeasurer
@required
- (void)startActionKey:(NSString *)key attributes:(NSDictionary<NSString *, id> *)attributes __attribute__((swift_name("startAction(key:attributes:)")));
- (void)stopActionKey:(NSString *)key attributes:(NSDictionary<NSString *, id> *)attributes __attribute__((swift_name("stopAction(key:attributes:)")));
@end

__attribute__((swift_name("IPlatformQuantificationError")))
@protocol HbpIPlatformQuantificationError
@required
- (void)addErrorMessage:(NSString *)message source:(HbpIPlatformQuantificationErrorErrorSource *)source throwable:(HbpKotlinThrowable * _Nullable)throwable attributes:(NSDictionary<NSString *, id> *)attributes __attribute__((swift_name("addError(message:source:throwable:attributes:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("IPlatformQuantificationErrorErrorSource")))
@interface HbpIPlatformQuantificationErrorErrorSource : HbpKotlinEnum<HbpIPlatformQuantificationErrorErrorSource *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) HbpIPlatformQuantificationErrorErrorSource *crush __attribute__((swift_name("crush")));
@property (class, readonly) HbpIPlatformQuantificationErrorErrorSource *logger __attribute__((swift_name("logger")));
+ (HbpKotlinArray<HbpIPlatformQuantificationErrorErrorSource *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<HbpIPlatformQuantificationErrorErrorSource *> *entries __attribute__((swift_name("entries")));
@end

__attribute__((swift_name("IWrapperSetting")))
@protocol HbpIWrapperSetting
@required
- (HbpIWrapperSettingENV *)env __attribute__((swift_name("env()")));
- (NSString *)wrapperSdkVersion __attribute__((swift_name("wrapperSdkVersion()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("IWrapperSettingENV")))
@interface HbpIWrapperSettingENV : HbpKotlinEnum<HbpIWrapperSettingENV *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) HbpIWrapperSettingENV *prod __attribute__((swift_name("prod")));
@property (class, readonly) HbpIWrapperSettingENV *beta __attribute__((swift_name("beta")));
@property (class, readonly) HbpIWrapperSettingENV *dev __attribute__((swift_name("dev")));
+ (HbpKotlinArray<HbpIWrapperSettingENV *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<HbpIWrapperSettingENV *> *entries __attribute__((swift_name("entries")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ChipType")))
@interface HbpChipType : HbpKotlinEnum<HbpChipType *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) HbpChipType *selfChip __attribute__((swift_name("selfChip")));
@property (class, readonly) HbpChipType *bleDfuChip __attribute__((swift_name("bleDfuChip")));
+ (HbpKotlinArray<HbpChipType *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<HbpChipType *> *entries __attribute__((swift_name("entries")));
@end

__attribute__((swift_name("IBaseSetting")))
@protocol HbpIBaseSetting
@required
@property (readonly) HbpMutableDictionary<NSString *, id> *baseAttributes __attribute__((swift_name("baseAttributes")));
@end

__attribute__((swift_name("ILogger")))
@protocol HbpILogger <HbpIBaseSetting>
@required
- (void)addCategoryKey:(NSString *)key value:(NSString * _Nullable)value __attribute__((swift_name("addCategory(key:value:)")));
- (void)deleteCategoryKey:(NSString *)key __attribute__((swift_name("deleteCategory(key:)")));
- (void)emitLevel:(HbpIPlatformLoggerLevel *)level msg:(NSString *)msg throwable:(HbpKotlinThrowable * _Nullable)throwable attributes:(NSDictionary<NSString *, id> *)attributes __attribute__((swift_name("emit(level:msg:throwable:attributes:)")));
- (id<HbpIGlobalSetting>)getCommonSetting __attribute__((swift_name("getCommonSetting()")));
@end

__attribute__((swift_name("ILoggerFactory")))
@protocol HbpILoggerFactory
@required
- (id<HbpILogger>)getLoggerLoggerName:(NSString *)loggerName __attribute__((swift_name("getLogger(loggerName:)")));
- (NSArray<id<HbpILogger>> *)getLoggers __attribute__((swift_name("getLoggers()")));
@end

__attribute__((swift_name("IService")))
@protocol HbpIService
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FirmwareReleaseEnvApi")))
@interface HbpFirmwareReleaseEnvApi : HbpBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)firmwareReleaseEnvApi __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) HbpFirmwareReleaseEnvApi *shared __attribute__((swift_name("shared")));
- (NSString *)stage __attribute__((swift_name("stage()")));
- (NSString *)target __attribute__((swift_name("target()")));
@end

__attribute__((swift_name("IObfuscation")))
@protocol HbpIObfuscation
@required
- (NSString *)obscureUnObfuscated:(NSString *)unObfuscated __attribute__((swift_name("obscure(unObfuscated:)")));
- (NSString *)restoreObfuscated:(NSString *)obfuscated __attribute__((swift_name("restore(obfuscated:)")));
@end

__attribute__((swift_name("ApiBase")))
@interface HbpApiBase : HbpBase
- (instancetype)initWithBasePath:(NSString *)basePath json:(HbpKotlinx_serialization_jsonJson *)json __attribute__((swift_name("init(basePath:json:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) HbpApiBaseCompanion *companion __attribute__((swift_name("companion")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)requestPath:(NSString *)path method:(NSString *)method apiKey:(NSString *)apiKey responseSerializer:(id<HbpKotlinx_serialization_coreKSerializer>)responseSerializer completionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("request(path:method:apiKey:responseSerializer:completionHandler:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ApiBase.Companion")))
@interface HbpApiBaseCompanion : HbpBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) HbpApiBaseCompanion *shared __attribute__((swift_name("shared")));
@end

__attribute__((swift_name("Queue")))
@protocol HbpQueue
@required
- (id _Nullable)dequeueTimeoutMs:(int64_t)timeoutMs __attribute__((swift_name("dequeue(timeoutMs:)")));
- (void)enqueueElement:(id _Nullable)element replace:(BOOL)replace __attribute__((swift_name("enqueue(element:replace:)")));
- (int32_t)getSize __attribute__((swift_name("getSize()")));
- (BOOL)isEmpty __attribute__((swift_name("isEmpty()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ArrayQueue")))
@interface HbpArrayQueue<E> : HbpBase <HbpQueue>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (E _Nullable)dequeueTimeoutMs:(int64_t)timeoutMs __attribute__((swift_name("dequeue(timeoutMs:)")));
- (void)enqueueElement:(E _Nullable)element replace:(BOOL)replace __attribute__((swift_name("enqueue(element:replace:)")));
- (int32_t)getSize __attribute__((swift_name("getSize()")));
- (BOOL)isEmpty __attribute__((swift_name("isEmpty()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("EventType")))
@interface HbpEventType : HbpKotlinEnum<HbpEventType *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) HbpEventType *default_ __attribute__((swift_name("default_")));
@property (class, readonly) HbpEventType *shippingMode __attribute__((swift_name("shippingMode")));
@property (class, readonly) HbpEventType *wakeUpFromShippingMode __attribute__((swift_name("wakeUpFromShippingMode")));
@property (class, readonly) HbpEventType *chargeStart __attribute__((swift_name("chargeStart")));
@property (class, readonly) HbpEventType *chargeStopNormal __attribute__((swift_name("chargeStopNormal")));
@property (class, readonly) HbpEventType *chargeStopAbnormal __attribute__((swift_name("chargeStopAbnormal")));
@property (class, readonly) HbpEventType *dischargeStart __attribute__((swift_name("dischargeStart")));
@property (class, readonly) HbpEventType *dischargeStopNormal __attribute__((swift_name("dischargeStopNormal")));
@property (class, readonly) HbpEventType *dischargeStopAbnormal __attribute__((swift_name("dischargeStopAbnormal")));
@property (class, readonly) HbpEventType *extendedLifeModeChange __attribute__((swift_name("extendedLifeModeChange")));
@property (class, readonly) HbpEventType *sohChange __attribute__((swift_name("sohChange")));
@property (class, readonly) HbpEventType *logCleared __attribute__((swift_name("logCleared")));
+ (HbpKotlinArray<HbpEventType *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<HbpEventType *> *entries __attribute__((swift_name("entries")));
@end

__attribute__((swift_name("SecurityKeyHandler")))
@protocol HbpSecurityKeyHandler
@required
- (HbpKotlinByteArray * _Nullable)decryptBySymmetricAlias:(NSString *)alias content:(HbpKotlinByteArray *)content __attribute__((swift_name("decryptBySymmetric(alias:content:)")));
- (HbpKotlinByteArray * _Nullable)encryptBySymmetricAlias:(NSString *)alias content:(HbpKotlinByteArray *)content __attribute__((swift_name("encryptBySymmetric(alias:content:)")));
- (NSString * _Nullable)getValueKey:(NSString *)key __attribute__((swift_name("getValue(key:)")));
- (BOOL)keyAliasExistAlias:(NSString *)alias __attribute__((swift_name("keyAliasExist(alias:)")));
- (void)storeKVKey:(NSString *)key value:(NSString *)value __attribute__((swift_name("storeKV(key:value:)")));
- (void)storeSymmetricKeyAlias:(NSString *)alias key:(HbpKotlinByteArray *)key iv:(HbpKotlinByteArray *)iv __attribute__((swift_name("storeSymmetricKey(alias:key:iv:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BatteryELMInfo")))
@interface HbpBatteryELMInfo : HbpBase
- (instancetype)initWithEventType:(HbpEventType *)eventType extendedMode:(BOOL)extendedMode longTermMode:(BOOL)longTermMode stateOfCharge:(uint32_t)stateOfCharge stateOfHealth:(uint32_t)stateOfHealth __attribute__((swift_name("init(eventType:extendedMode:longTermMode:stateOfCharge:stateOfHealth:)"))) __attribute__((objc_designated_initializer));
- (HbpBatteryELMInfo *)doCopyEventType:(HbpEventType *)eventType extendedMode:(BOOL)extendedMode longTermMode:(BOOL)longTermMode stateOfCharge:(uint32_t)stateOfCharge stateOfHealth:(uint32_t)stateOfHealth __attribute__((swift_name("doCopy(eventType:extendedMode:longTermMode:stateOfCharge:stateOfHealth:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) HbpEventType *eventType __attribute__((swift_name("eventType")));
@property (readonly) BOOL extendedMode __attribute__((swift_name("extendedMode")));
@property (readonly) BOOL longTermMode __attribute__((swift_name("longTermMode")));
@property (readonly) uint32_t stateOfCharge __attribute__((swift_name("stateOfCharge")));
@property (readonly) uint32_t stateOfHealth __attribute__((swift_name("stateOfHealth")));
@end

__attribute__((swift_name("IBatteryELMHandler")))
@protocol HbpIBatteryELMHandler
@required

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)cleanHistoryCleanConfig:(HbpIBatteryELMHandlerCleanHistoryConfig *)cleanConfig completionHandler:(void (^)(HbpKotlinPair<HbpBoolean *, HbpKotlinException *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("cleanHistory(cleanConfig:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getChargingWithCompletionHandler:(void (^)(HbpIBatteryELMHandlerChargingResponse * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getCharging(completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getHistoryGetHistoryConfig:(HbpIBatteryELMHandlerGetHistoryConfig *)getHistoryConfig completionHandler:(void (^)(HbpIBatteryELMHandlerHistoryResponse * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getHistory(getHistoryConfig:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getLoggedInfoWithCompletionHandler:(void (^)(HbpIBatteryELMHandlerLoggedInfoResponse * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getLoggedInfo(completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)setChargingConfig:(HbpIBatteryELMHandlerSetChargingConfig *)config completionHandler_:(void (^)(HbpKotlinPair<HbpBoolean *, HbpKotlinException *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("setCharging(config:completionHandler:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("IBatteryELMHandlerChargingResponse")))
@interface HbpIBatteryELMHandlerChargingResponse : HbpBase
- (instancetype)initWithIsSuccess:(BOOL)isSuccess exception:(HbpKotlinException * _Nullable)exception __attribute__((swift_name("init(isSuccess:exception:)"))) __attribute__((objc_designated_initializer));
- (HbpIBatteryELMHandlerChargingResponse *)doCopyIsSuccess:(BOOL)isSuccess exception:(HbpKotlinException * _Nullable)exception __attribute__((swift_name("doCopy(isSuccess:exception:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) HbpKotlinException * _Nullable exception __attribute__((swift_name("exception")));
@property HbpBoolean * _Nullable extendedMode __attribute__((swift_name("extendedMode")));
@property HbpUInt * _Nullable extenderLower __attribute__((swift_name("extenderLower")));
@property HbpUInt * _Nullable extenderUpper __attribute__((swift_name("extenderUpper")));
@property (readonly) BOOL isSuccess __attribute__((swift_name("isSuccess")));
@property HbpUInt * _Nullable longTermCharge __attribute__((swift_name("longTermCharge")));
@property HbpBoolean * _Nullable longTermMode __attribute__((swift_name("longTermMode")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("IBatteryELMHandlerCleanHistoryConfig")))
@interface HbpIBatteryELMHandlerCleanHistoryConfig : HbpBase
- (instancetype)initWithTimeConfig:(HbpTimeConfig *)timeConfig __attribute__((swift_name("init(timeConfig:)"))) __attribute__((objc_designated_initializer));
- (HbpIBatteryELMHandlerCleanHistoryConfig *)doCopyTimeConfig:(HbpTimeConfig *)timeConfig __attribute__((swift_name("doCopy(timeConfig:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) HbpTimeConfig *timeConfig __attribute__((swift_name("timeConfig")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("IBatteryELMHandlerGetHistoryConfig")))
@interface HbpIBatteryELMHandlerGetHistoryConfig : HbpBase
- (instancetype)initWithHistoryNum:(HbpIBatteryELMHandlerHistoryNumber *)historyNum __attribute__((swift_name("init(historyNum:)"))) __attribute__((objc_designated_initializer));
- (HbpIBatteryELMHandlerGetHistoryConfig *)doCopyHistoryNum:(HbpIBatteryELMHandlerHistoryNumber *)historyNum __attribute__((swift_name("doCopy(historyNum:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) HbpIBatteryELMHandlerHistoryNumber *historyNum __attribute__((swift_name("historyNum")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("IBatteryELMHandlerHistoryNumber")))
@interface HbpIBatteryELMHandlerHistoryNumber : HbpKotlinEnum<HbpIBatteryELMHandlerHistoryNumber *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) HbpIBatteryELMHandlerHistoryNumber *history1 __attribute__((swift_name("history1")));
@property (class, readonly) HbpIBatteryELMHandlerHistoryNumber *history2 __attribute__((swift_name("history2")));
@property (class, readonly) HbpIBatteryELMHandlerHistoryNumber *history3 __attribute__((swift_name("history3")));
@property (class, readonly) HbpIBatteryELMHandlerHistoryNumber *history4 __attribute__((swift_name("history4")));
@property (class, readonly) HbpIBatteryELMHandlerHistoryNumber *history5 __attribute__((swift_name("history5")));
@property (class, readonly) HbpIBatteryELMHandlerHistoryNumber *history6 __attribute__((swift_name("history6")));
@property (class, readonly) HbpIBatteryELMHandlerHistoryNumber *history7 __attribute__((swift_name("history7")));
@property (class, readonly) HbpIBatteryELMHandlerHistoryNumber *history8 __attribute__((swift_name("history8")));
@property (class, readonly) HbpIBatteryELMHandlerHistoryNumber *history9 __attribute__((swift_name("history9")));
@property (class, readonly) HbpIBatteryELMHandlerHistoryNumber *history10 __attribute__((swift_name("history10")));
+ (HbpKotlinArray<HbpIBatteryELMHandlerHistoryNumber *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<HbpIBatteryELMHandlerHistoryNumber *> *entries __attribute__((swift_name("entries")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("IBatteryELMHandlerHistoryResponse")))
@interface HbpIBatteryELMHandlerHistoryResponse : HbpBase
- (instancetype)initWithIsSuccess:(BOOL)isSuccess exception:(HbpKotlinException * _Nullable)exception __attribute__((swift_name("init(isSuccess:exception:)"))) __attribute__((objc_designated_initializer));
- (HbpIBatteryELMHandlerHistoryResponse *)doCopyIsSuccess:(BOOL)isSuccess exception:(HbpKotlinException * _Nullable)exception __attribute__((swift_name("doCopy(isSuccess:exception:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (BOOL)isCleaned __attribute__((swift_name("isCleaned()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property HbpUInt * _Nullable day __attribute__((swift_name("day")));
@property HbpEventType * _Nullable eventType __attribute__((swift_name("eventType")));
@property (readonly) HbpKotlinException * _Nullable exception __attribute__((swift_name("exception")));
@property HbpBoolean * _Nullable extendedMode __attribute__((swift_name("extendedMode")));
@property HbpUInt * _Nullable hour __attribute__((swift_name("hour")));
@property (readonly) BOOL isSuccess __attribute__((swift_name("isSuccess")));
@property HbpBoolean * _Nullable longTermMode __attribute__((swift_name("longTermMode")));
@property HbpUInt * _Nullable min __attribute__((swift_name("min")));
@property HbpUInt * _Nullable month __attribute__((swift_name("month")));
@property HbpUInt * _Nullable stateOfCharge __attribute__((swift_name("stateOfCharge")));
@property HbpUInt * _Nullable stateOfHealth __attribute__((swift_name("stateOfHealth")));
@property HbpUInt * _Nullable year __attribute__((swift_name("year")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("IBatteryELMHandlerLoggedInfoResponse")))
@interface HbpIBatteryELMHandlerLoggedInfoResponse : HbpBase
- (instancetype)initWithIsSuccess:(BOOL)isSuccess exception:(HbpKotlinException * _Nullable)exception __attribute__((swift_name("init(isSuccess:exception:)"))) __attribute__((objc_designated_initializer));
- (HbpIBatteryELMHandlerLoggedInfoResponse *)doCopyIsSuccess:(BOOL)isSuccess exception:(HbpKotlinException * _Nullable)exception __attribute__((swift_name("doCopy(isSuccess:exception:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property HbpUInt * _Nullable cycleCount __attribute__((swift_name("cycleCount")));
@property HbpUInt * _Nullable enableCount __attribute__((swift_name("enableCount")));
@property (readonly) HbpKotlinException * _Nullable exception __attribute__((swift_name("exception")));
@property (readonly) BOOL isSuccess __attribute__((swift_name("isSuccess")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("IBatteryELMHandlerSetChargingConfig")))
@interface HbpIBatteryELMHandlerSetChargingConfig : HbpBase
- (instancetype)initWithExtendedMode:(BOOL)extendedMode termMode:(BOOL)termMode extendedUpper:(uint8_t)extendedUpper extendedLower:(uint8_t)extendedLower termValue:(uint8_t)termValue __attribute__((swift_name("init(extendedMode:termMode:extendedUpper:extendedLower:termValue:)"))) __attribute__((objc_designated_initializer));
- (HbpIBatteryELMHandlerSetChargingConfig *)doCopyExtendedMode:(BOOL)extendedMode termMode:(BOOL)termMode extendedUpper:(uint8_t)extendedUpper extendedLower:(uint8_t)extendedLower termValue:(uint8_t)termValue __attribute__((swift_name("doCopy(extendedMode:termMode:extendedUpper:extendedLower:termValue:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) uint8_t extendedLower __attribute__((swift_name("extendedLower")));
@property (readonly) BOOL extendedMode __attribute__((swift_name("extendedMode")));
@property (readonly) uint8_t extendedUpper __attribute__((swift_name("extendedUpper")));
@property (readonly) BOOL termMode __attribute__((swift_name("termMode")));
@property (readonly) uint8_t termValue __attribute__((swift_name("termValue")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TimeConfig")))
@interface HbpTimeConfig : HbpBase
- (instancetype)initWithYear:(uint32_t)year month:(uint32_t)month day:(uint32_t)day hour:(uint32_t)hour min:(uint32_t)min __attribute__((swift_name("init(year:month:day:hour:min:)"))) __attribute__((objc_designated_initializer));
- (HbpTimeConfig *)doCopyYear:(uint32_t)year month:(uint32_t)month day:(uint32_t)day hour:(uint32_t)hour min:(uint32_t)min __attribute__((swift_name("doCopy(year:month:day:hour:min:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) uint32_t day __attribute__((swift_name("day")));
@property (readonly) uint32_t hour __attribute__((swift_name("hour")));
@property (readonly) uint32_t min __attribute__((swift_name("min")));
@property (readonly) uint32_t month __attribute__((swift_name("month")));
@property (readonly) uint32_t year __attribute__((swift_name("year")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FirmwareFileType")))
@interface HbpFirmwareFileType : HbpKotlinEnum<HbpFirmwareFileType *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) HbpFirmwareFileType *bin __attribute__((swift_name("bin")));
@property (class, readonly) HbpFirmwareFileType *zip __attribute__((swift_name("zip")));
+ (HbpKotlinArray<HbpFirmwareFileType *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<HbpFirmwareFileType *> *entries __attribute__((swift_name("entries")));
@property (readonly) NSString *value __attribute__((swift_name("value")));
@end

__attribute__((swift_name("ApiTokenProvider")))
@protocol HbpApiTokenProvider
@required

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getIdTokenWithCompletionHandler:(void (^)(NSString * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getIdToken(completionHandler:)")));
@end

__attribute__((swift_name("HbpSdkBase")))
@interface HbpHbpSdkBase : HbpBase <HbpIHbpSdkBase>
- (void)discoverByBikeIdBikeId:(NSString *)bikeId withTimeoutInMillis:(int64_t)withTimeoutInMillis hyDeviceFound:(void (^ _Nullable)(NSString * _Nullable))hyDeviceFound cb:(void (^)(id<HbpIHyenaDrive> _Nullable, HbpKotlinException * _Nullable))cb __attribute__((swift_name("discoverByBikeId(bikeId:withTimeoutInMillis:hyDeviceFound:cb:)")));
- (void)discoverByPeripheralIdPeripheralId:(NSString *)peripheralId withTimeoutInMillis:(int64_t)withTimeoutInMillis hyDeviceFound:(void (^ _Nullable)(NSString * _Nullable))hyDeviceFound cb:(void (^)(id<HbpIHyenaDrive> _Nullable, HbpKotlinException * _Nullable))cb __attribute__((swift_name("discoverByPeripheralId(peripheralId:withTimeoutInMillis:hyDeviceFound:cb:)")));
- (void)discoverByWelcomeWithTimeoutInMillis:(int64_t)withTimeoutInMillis hyDeviceFound:(void (^ _Nullable)(NSString * _Nullable))hyDeviceFound cb:(void (^)(id<HbpIHyenaDrive> _Nullable, HbpKotlinException * _Nullable))cb __attribute__((swift_name("discoverByWelcome(withTimeoutInMillis:hyDeviceFound:cb:)")));
- (id<HbpIHyenaDrive> _Nullable)getHyenaDrivePeripheralId:(NSString *)peripheralId __attribute__((swift_name("getHyenaDrive(peripheralId:)")));
- (void)scanCb:(void (^)(id<HbpIHyenaDrive> _Nullable, HbpKotlinException * _Nullable))cb __attribute__((swift_name("scan(cb:)")));
- (void)scanDfuExceptionCb:(void (^ _Nullable)(HbpKotlinException *))exceptionCb partCb:(void (^)(id<HbpHyenaPart>))partCb __attribute__((swift_name("scanDfu(exceptionCb:partCb:)")));
- (void)setAutoConnectAutoConnect:(BOOL)autoConnect __attribute__((swift_name("setAutoConnect(autoConnect:)")));
- (void)stopScan __attribute__((swift_name("stopScan()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("HbpSdk")))
@interface HbpHbpSdk : HbpHbpSdkBase
@property (class, readonly, getter=companion) HbpHbpSdkCompanion *companion __attribute__((swift_name("companion")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("HbpSdk.Companion")))
@interface HbpHbpSdkCompanion : HbpBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) HbpHbpSdkCompanion *shared __attribute__((swift_name("shared")));

/**
 * @note This method converts instances of Exception to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (HbpHbpSdk * _Nullable)getInstanceAndReturnError:(NSError * _Nullable * _Nullable)error init:(void (^ _Nullable)(HbpConfigurationBuilder *))init __attribute__((swift_name("getInstance(init:)")));
@end

__attribute__((swift_name("ConfigurationBuilderBase")))
@interface HbpConfigurationBuilderBase : HbpBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) HbpConfigurationBuilderBaseCompanion *companion __attribute__((swift_name("companion")));
- (void)addLoggerLogger:(id<HbpLogger>)logger __attribute__((swift_name("addLogger(logger:)")));
- (void)apiTokenProviderValue:(id<HbpApiTokenProvider>)value __attribute__((swift_name("apiTokenProvider(value:)")));
- (void)cloudApiBaseUrlValue:(NSString *)value __attribute__((swift_name("cloudApiBaseUrl(value:)")));
- (void)defaultInstructionRetryValue:(int32_t)value __attribute__((swift_name("defaultInstructionRetry(value:)")));
- (void)defaultInstructionTimeoutInMillisecondValue:(int32_t)value __attribute__((swift_name("defaultInstructionTimeoutInMillisecond(value:)")));
- (void)defaultLoggerLogLevelLogLevel:(int32_t)logLevel __attribute__((swift_name("defaultLoggerLogLevel(logLevel:)")));
- (void)disableDefaultLogger __attribute__((swift_name("disableDefaultLogger()")));
- (void)globalSettingWithBridge_globalSettingWithBridge:(id<HbpIGlobalSettingWithBridge>)_globalSettingWithBridge __attribute__((swift_name("globalSettingWithBridge(_globalSettingWithBridge:)")));
- (void)licenseSetting_licenseSetting:(id<HbpILicenseSetting>)_licenseSetting __attribute__((swift_name("licenseSetting(_licenseSetting:)")));
- (void)monitorInitialize_monitorInitialize:(id<HbpIMonitorInitialize>)_monitorInitialize __attribute__((swift_name("monitorInitialize(_monitorInitialize:)")));
- (void)platformFileHandlerValue:(HbpPlatformFileHandler *)value __attribute__((swift_name("platformFileHandler(value:)")));
- (void)platformLogger_platformLogger:(id<HbpIPlatformLogger> (^)(void))_platformLogger __attribute__((swift_name("platformLogger(_platformLogger:)")));
- (void)platformMeasurer_platformMeasurer:(id<HbpIPlatformMeasurer> (^)(void))_platformMeasurer __attribute__((swift_name("platformMeasurer(_platformMeasurer:)")));
- (void)platformQuantificationError_platformQuantificationError:(id<HbpIPlatformQuantificationError> (^)(void))_platformQuantificationError __attribute__((swift_name("platformQuantificationError(_platformQuantificationError:)")));
- (void)wrapperSetting_wrapperSetting:(id<HbpIWrapperSetting>)_wrapperSetting __attribute__((swift_name("wrapperSetting(_wrapperSetting:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ConfigurationBuilder")))
@interface HbpConfigurationBuilder : HbpConfigurationBuilderBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)dfuUpdaterValue:(HbpPlatformDfuUpdater *)value __attribute__((swift_name("dfuUpdater(value:)")));
- (void)securityKeyHandlerValue:(id<HbpSecurityKeyHandler>)value __attribute__((swift_name("securityKeyHandler(value:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ConfigurationBuilderBase.Companion")))
@interface HbpConfigurationBuilderBaseCompanion : HbpBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) HbpConfigurationBuilderBaseCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *DEFAULT_CLOUD_API_BASE_URL __attribute__((swift_name("DEFAULT_CLOUD_API_BASE_URL")));
@property (readonly) int32_t DEFAULT_INSTRUCTION_RETRY __attribute__((swift_name("DEFAULT_INSTRUCTION_RETRY")));
@property (readonly) int32_t DEFAULT_INSTRUCTION_TIMEOUT_IN_MS __attribute__((swift_name("DEFAULT_INSTRUCTION_TIMEOUT_IN_MS")));
@end

__attribute__((swift_name("ILicenseSetting")))
@protocol HbpILicenseSetting
@required
- (id<HbpIDecode>)getDecoder __attribute__((swift_name("getDecoder()")));
- (id<HbpIFileProvider>)getLicenseFileProvider __attribute__((swift_name("getLicenseFileProvider()")));
@end

__attribute__((swift_name("KotlinThrowable")))
@interface HbpKotlinThrowable : HbpBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(HbpKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(HbpKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));

/**
 * @note annotations
 *   kotlin.experimental.ExperimentalNativeApi
*/
- (HbpKotlinArray<NSString *> *)getStackTrace __attribute__((swift_name("getStackTrace()")));
- (void)printStackTrace __attribute__((swift_name("printStackTrace()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) HbpKotlinThrowable * _Nullable cause __attribute__((swift_name("cause")));
@property (readonly) NSString * _Nullable message __attribute__((swift_name("message")));
- (NSError *)asError __attribute__((swift_name("asError()")));
@end

__attribute__((swift_name("KotlinException")))
@interface HbpKotlinException : HbpKotlinThrowable
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(HbpKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(HbpKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CloudAccessException")))
@interface HbpCloudAccessException : HbpKotlinException
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(HbpKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithCause:(HbpKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (readonly) HbpKotlinThrowable * _Nullable cause __attribute__((swift_name("cause")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ILockCommunicationException")))
@interface HbpILockCommunicationException : HbpKotlinException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithCause:(HbpKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(HbpKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (readonly) HbpKotlinThrowable * _Nullable cause __attribute__((swift_name("cause")));
@property (readonly) NSString * _Nullable message __attribute__((swift_name("message")));
@end

__attribute__((swift_name("DfuUpdater")))
@protocol HbpDfuUpdater
@required
- (void)startFirmwareBin:(HbpKotlinByteArray *)firmwareBin deviceName:(NSString * _Nullable)deviceName updateStartTimestamp:(int64_t)updateStartTimestamp totalRetry:(int32_t)totalRetry __attribute__((swift_name("start(firmwareBin:deviceName:updateStartTimestamp:totalRetry:)")));
- (void)startFilePath:(NSString *)filePath deviceName:(NSString * _Nullable)deviceName updateStartTimestamp:(int64_t)updateStartTimestamp totalRetry:(int32_t)totalRetry __attribute__((swift_name("start(filePath:deviceName:updateStartTimestamp:totalRetry:)")));
@property id<HbpFirmwareUpdateListener> _Nullable listener __attribute__((swift_name("listener")));
@end

__attribute__((swift_name("FileHandler")))
@protocol HbpFileHandler
@required
- (BOOL)containsFileName:(NSString *)fileName __attribute__((swift_name("contains(fileName:)")));
- (NSString *)getDownloadDest __attribute__((swift_name("getDownloadDest()")));
- (HbpFirmwareFile * _Nullable)getFirmwareFileFileName:(NSString *)fileName __attribute__((swift_name("getFirmwareFile(fileName:)")));
- (NSArray<NSString *> *)getFirmwareFilesName __attribute__((swift_name("getFirmwareFilesName()")));
@end

__attribute__((swift_name("IFirmwareUpdateStage")))
@protocol HbpIFirmwareUpdateStage
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FirmwareCheckStage")))
@interface HbpFirmwareCheckStage : HbpKotlinEnum<HbpFirmwareCheckStage *> <HbpIFirmwareUpdateStage>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) HbpFirmwareCheckStage *checkMid __attribute__((swift_name("checkMid")));
@property (class, readonly) HbpFirmwareCheckStage *checkDeviceVersion __attribute__((swift_name("checkDeviceVersion")));
@property (class, readonly) HbpFirmwareCheckStage *checkVersionCompare __attribute__((swift_name("checkVersionCompare")));
@property (class, readonly) HbpFirmwareCheckStage *checkFileAndDownload __attribute__((swift_name("checkFileAndDownload")));
@property (class, readonly) HbpFirmwareCheckStage *checkBikeStationary __attribute__((swift_name("checkBikeStationary")));
@property (class, readonly) HbpFirmwareCheckStage *checkFirmwareFile __attribute__((swift_name("checkFirmwareFile")));
@property (class, readonly) HbpFirmwareCheckStage *createDownloadTask __attribute__((swift_name("createDownloadTask")));
@property (class, readonly) HbpFirmwareCheckStage *getCloudVersion __attribute__((swift_name("getCloudVersion")));
@property (class, readonly) HbpFirmwareCheckStage *getCloudFileInfo __attribute__((swift_name("getCloudFileInfo")));
@property (class, readonly) HbpFirmwareCheckStage *alreadyInBestVersion __attribute__((swift_name("alreadyInBestVersion")));
+ (HbpKotlinArray<HbpFirmwareCheckStage *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<HbpFirmwareCheckStage *> *entries __attribute__((swift_name("entries")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FirmwareFile")))
@interface HbpFirmwareFile : HbpBase
- (instancetype)initWithFileByteArray:(HbpKotlinByteArray * _Nullable)fileByteArray filePath:(NSString * _Nullable)filePath __attribute__((swift_name("init(fileByteArray:filePath:)"))) __attribute__((objc_designated_initializer));
- (HbpFirmwareFile *)doCopyFileByteArray:(HbpKotlinByteArray * _Nullable)fileByteArray filePath:(NSString * _Nullable)filePath __attribute__((swift_name("doCopy(fileByteArray:filePath:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) HbpKotlinByteArray * _Nullable fileByteArray __attribute__((swift_name("fileByteArray")));
@property (readonly) NSString * _Nullable filePath __attribute__((swift_name("filePath")));
@end

__attribute__((swift_name("FirmwareUpdateListener")))
@protocol HbpFirmwareUpdateListener
@required
- (void)onErrorException:(HbpKotlinException *)exception report:(HbpFirmwareUpdateReport *)report __attribute__((swift_name("onError(exception:report:)")));
- (void)onProgressPercentage:(int32_t)percentage __attribute__((swift_name("onProgress(percentage:)")));
- (void)onStageFinishReportReport:(HbpFirmwareUpdateReport *)report __attribute__((swift_name("onStageFinishReport(report:)")));
- (void)onStateDidChangeState:(HbpFirmwareUpdateState *)state __attribute__((swift_name("onStateDidChange(state:)")));
- (void)onSuccessReport:(HbpFirmwareUpdateReport *)report __attribute__((swift_name("onSuccess(report:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FirmwareUpdateReport")))
@interface HbpFirmwareUpdateReport : HbpBase
- (instancetype)initWithStage:(id<HbpIFirmwareUpdateStage> _Nullable)stage isSuccess:(BOOL)isSuccess costTimeInSecond:(int32_t)costTimeInSecond totalRetry:(int32_t)totalRetry __attribute__((swift_name("init(stage:isSuccess:costTimeInSecond:totalRetry:)"))) __attribute__((objc_designated_initializer));
- (HbpFirmwareUpdateReport *)doCopyStage:(id<HbpIFirmwareUpdateStage> _Nullable)stage isSuccess:(BOOL)isSuccess costTimeInSecond:(int32_t)costTimeInSecond totalRetry:(int32_t)totalRetry __attribute__((swift_name("doCopy(stage:isSuccess:costTimeInSecond:totalRetry:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t costTimeInSecond __attribute__((swift_name("costTimeInSecond")));
@property (readonly) BOOL isSuccess __attribute__((swift_name("isSuccess")));
@property (readonly) id<HbpIFirmwareUpdateStage> _Nullable stage __attribute__((swift_name("stage")));
@property (readonly) int32_t totalRetry __attribute__((swift_name("totalRetry")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FirmwareUpdateStage")))
@interface HbpFirmwareUpdateStage : HbpKotlinEnum<HbpFirmwareUpdateStage *> <HbpIFirmwareUpdateStage>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) HbpFirmwareUpdateStage *jumptobootloader __attribute__((swift_name("jumptobootloader")));
@property (class, readonly) HbpFirmwareUpdateStage *mcuinforead __attribute__((swift_name("mcuinforead")));
@property (class, readonly) HbpFirmwareUpdateStage *flasherase __attribute__((swift_name("flasherase")));
@property (class, readonly) HbpFirmwareUpdateStage *writeflash __attribute__((swift_name("writeflash")));
@property (class, readonly) HbpFirmwareUpdateStage *flashverify __attribute__((swift_name("flashverify")));
@property (class, readonly) HbpFirmwareUpdateStage *jumptoapplication __attribute__((swift_name("jumptoapplication")));
@property (class, readonly) HbpFirmwareUpdateStage *getpartmid __attribute__((swift_name("getpartmid")));
@property (class, readonly) HbpFirmwareUpdateStage *changebootloaderbluetoothname __attribute__((swift_name("changebootloaderbluetoothname")));
@property (class, readonly) HbpFirmwareUpdateStage *jumptodfu __attribute__((swift_name("jumptodfu")));
@property (class, readonly) HbpFirmwareUpdateStage *searchdfudevice __attribute__((swift_name("searchdfudevice")));
@property (class, readonly) HbpFirmwareUpdateStage *dfumode __attribute__((swift_name("dfumode")));
+ (HbpKotlinArray<HbpFirmwareUpdateStage *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<HbpFirmwareUpdateStage *> *entries __attribute__((swift_name("entries")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FirmwareUpdateState")))
@interface HbpFirmwareUpdateState : HbpKotlinEnum<HbpFirmwareUpdateState *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) HbpFirmwareUpdateState *starting __attribute__((swift_name("starting")));
@property (class, readonly) HbpFirmwareUpdateState *updating __attribute__((swift_name("updating")));
@property (class, readonly) HbpFirmwareUpdateState *validating __attribute__((swift_name("validating")));
@property (class, readonly) HbpFirmwareUpdateState *completed __attribute__((swift_name("completed")));
+ (HbpKotlinArray<HbpFirmwareUpdateState *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<HbpFirmwareUpdateState *> *entries __attribute__((swift_name("entries")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GuideOperation")))
@interface HbpGuideOperation : HbpKotlinEnum<HbpGuideOperation *> <HbpIFirmwareUpdateStage>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) HbpGuideOperation *callCheckFirmwareUpdateFirst __attribute__((swift_name("callCheckFirmwareUpdateFirst")));
@property (class, readonly) HbpGuideOperation *downloadFailCallFirmwareUpdateAgain __attribute__((swift_name("downloadFailCallFirmwareUpdateAgain")));
+ (HbpKotlinArray<HbpGuideOperation *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<HbpGuideOperation *> *entries __attribute__((swift_name("entries")));
@end

__attribute__((swift_name("PlatformDfuUpdater")))
@interface HbpPlatformDfuUpdater : HbpBase <HbpDfuUpdater>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)startFirmwareBin:(HbpKotlinByteArray *)firmwareBin deviceName:(NSString * _Nullable)deviceName updateStartTimestamp:(int64_t)updateStartTimestamp totalRetry:(int32_t)totalRetry __attribute__((swift_name("start(firmwareBin:deviceName:updateStartTimestamp:totalRetry:)")));
- (void)startFilePath:(NSString *)filePath deviceName:(NSString * _Nullable)deviceName updateStartTimestamp:(int64_t)updateStartTimestamp totalRetry:(int32_t)totalRetry __attribute__((swift_name("start(filePath:deviceName:updateStartTimestamp:totalRetry:)")));
@property id<HbpFirmwareUpdateListener> _Nullable listener __attribute__((swift_name("listener")));
@end

__attribute__((swift_name("PlatformFileHandler")))
@interface HbpPlatformFileHandler : HbpBase <HbpFileHandler>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (BOOL)containsFileName:(NSString *)fileName __attribute__((swift_name("contains(fileName:)")));
- (NSString *)getDownloadDest __attribute__((swift_name("getDownloadDest()")));
- (HbpFirmwareFile * _Nullable)getFirmwareFileFileName:(NSString *)fileName __attribute__((swift_name("getFirmwareFile(fileName:)")));
- (NSArray<NSString *> *)getFirmwareFilesName __attribute__((swift_name("getFirmwareFilesName()")));
@end

__attribute__((swift_name("HyenaPart")))
@protocol HbpHyenaPart
@required

/**
 * @note This method converts instances of Exception to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (BOOL)addListenerListener:(id _Nullable)listener error:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("addListener(listener:)")));

/**
 * @note This method converts instances of Exception to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)checkForFirmwareUpdatePreDownload:(BOOL)preDownload completionHandler:(void (^)(HbpCheckFirmwareUpdateResult * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("checkForFirmwareUpdate(preDownload:completionHandler:)")));
- (id<HbpICancelHandler>)firmwareUpdateListener:(id<HbpIFirmwareUpdateListener>)listener __attribute__((swift_name("firmwareUpdate(listener:)")));

/**
 * @note This method converts instances of Exception to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (BOOL)firmwareUpdateFirmwareBin:(HbpKotlinByteArray *)firmwareBin listener:(id<HbpIFirmwareUpdateListener>)listener error:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("firmwareUpdate(firmwareBin:listener:)")));

/**
 * @note This method converts instances of Exception to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (BOOL)firmwareUpdatePath:(NSString *)path listener:(id<HbpIFirmwareUpdateListener>)listener error:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("firmwareUpdate(path:listener:)")));

/**
 * @note This method converts instances of Exception to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getFirmwareKernelVersionRefresh:(BOOL)refresh completionHandler:(void (^)(NSString * _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("getFirmwareKernelVersion(refresh:completionHandler:)")));

/**
 * @note This method converts instances of Exception to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getFirmwareVersionRefresh:(BOOL)refresh completionHandler:(void (^)(NSString * _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("getFirmwareVersion(refresh:completionHandler:)")));

/**
 * @note This method converts instances of Exception to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getHardwareVersionRefresh:(BOOL)refresh completionHandler:(void (^)(NSString * _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("getHardwareVersion(refresh:completionHandler:)")));

/**
 * @note This method converts instances of Exception to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getMidRefresh:(BOOL)refresh completionHandler:(void (^)(NSString * _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("getMid(refresh:completionHandler:)")));

/**
 * @note This method converts instances of Exception to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getPartNumberRefresh:(BOOL)refresh completionHandler:(void (^)(NSString * _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("getPartNumber(refresh:completionHandler:)")));

/**
 * @note This method converts instances of Exception to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)isExistsRefresh:(BOOL)refresh completionHandler:(void (^)(HbpBoolean * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("isExists(refresh:completionHandler:)")));

/**
 * @note This method converts instances of Exception to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)readParametersParameterItems:(NSArray<HbpParameterItem<id> *> *)parameterItems refresh:(BOOL)refresh completionHandler:(void (^)(NSArray<HbpParameterItem<id> *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readParameters(parameterItems:refresh:completionHandler:)")));
- (void)removeListenerListener:(id _Nullable)listener __attribute__((swift_name("removeListener(listener:)")));

/**
 * @note This method converts instances of Exception to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)writeParametersParameterItems:(NSArray<HbpParameterItem<id> *> *)parameterItems completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("writeParameters(parameterItems:completionHandler:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("HyenaPartCompanion")))
@interface HbpHyenaPartCompanion : HbpBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) HbpHyenaPartCompanion *shared __attribute__((swift_name("shared")));
@end

__attribute__((swift_name("ParameterItem")))
@interface HbpParameterItem<ValueType> : HbpBase
- (instancetype)initWithAddress:(int32_t)address len:(int32_t)len value:(ValueType _Nullable)value __attribute__((swift_name("init(address:len:value:)"))) __attribute__((objc_designated_initializer));
@property (readonly) int32_t address __attribute__((swift_name("address")));
@property (readonly) int32_t len __attribute__((swift_name("len")));
@property (readonly) ValueType _Nullable value __attribute__((swift_name("value")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PartState")))
@interface HbpPartState : HbpKotlinEnum<HbpPartState *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) HbpPartState *application __attribute__((swift_name("application")));
@property (class, readonly) HbpPartState *bootloader __attribute__((swift_name("bootloader")));
+ (HbpKotlinArray<HbpPartState *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<HbpPartState *> *entries __attribute__((swift_name("entries")));
@end

__attribute__((swift_name("BatteryArticleInformation1")))
@interface HbpBatteryArticleInformation1 : HbpBase
- (instancetype)initWithFirstWakeupYear:(int32_t)firstWakeupYear firstWakeupMonth:(int32_t)firstWakeupMonth firstWakeupDay:(int32_t)firstWakeupDay energyThroughputInKWh:(int32_t)energyThroughputInKWh capacityThroughputInAh:(int32_t)capacityThroughputInAh __attribute__((swift_name("init(firstWakeupYear:firstWakeupMonth:firstWakeupDay:energyThroughputInKWh:capacityThroughputInAh:)"))) __attribute__((objc_designated_initializer));
@property (readonly) int32_t capacityThroughputInAh __attribute__((swift_name("capacityThroughputInAh")));
@property (readonly) int32_t energyThroughputInKWh __attribute__((swift_name("energyThroughputInKWh")));
@property (readonly) int32_t firstWakeupDay __attribute__((swift_name("firstWakeupDay")));
@property (readonly) int32_t firstWakeupMonth __attribute__((swift_name("firstWakeupMonth")));
@property (readonly) int32_t firstWakeupYear __attribute__((swift_name("firstWakeupYear")));
@end

__attribute__((swift_name("BatteryArticleInformation2")))
@interface HbpBatteryArticleInformation2 : HbpBase
- (instancetype)initWithSelfDischargingRateInmA:(float)selfDischargingRateInmA deepDischarge:(int32_t)deepDischarge maxTempDischargeInSecond:(int32_t)maxTempDischargeInSecond maxMinTempDischargeInSecond:(int32_t)maxMinTempDischargeInSecond __attribute__((swift_name("init(selfDischargingRateInmA:deepDischarge:maxTempDischargeInSecond:maxMinTempDischargeInSecond:)"))) __attribute__((objc_designated_initializer));
@property (readonly) int32_t deepDischarge __attribute__((swift_name("deepDischarge")));
@property (readonly) int32_t maxMinTempDischargeInSecond __attribute__((swift_name("maxMinTempDischargeInSecond")));
@property (readonly) int32_t maxTempDischargeInSecond __attribute__((swift_name("maxTempDischargeInSecond")));
@property (readonly) float selfDischargingRateInmA __attribute__((swift_name("selfDischargingRateInmA")));
@end

__attribute__((swift_name("BatteryPart")))
@protocol HbpBatteryPart <HbpHyenaPart, HbpIELM>
@required

/**
 * @note This method converts instances of Exception to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getArticleInformation1WithCompletionHandler:(void (^)(HbpBatteryArticleInformation1 * _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("getArticleInformation1(completionHandler:)")));

/**
 * @note This method converts instances of Exception to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getArticleInformation2WithCompletionHandler:(void (^)(HbpBatteryArticleInformation2 * _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("getArticleInformation2(completionHandler:)")));

/**
 * @note This method converts instances of Exception to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getChargeCyclesWithCompletionHandler:(void (^)(HbpInt * _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("getChargeCycles(completionHandler:)")));

/**
 * @note This method converts instances of Exception to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getOptimizedChargingSettingWithCompletionHandler:(void (^)(HbpChargingSetting * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getOptimizedChargingSetting(completionHandler:)")));

/**
 * @note This method converts instances of Exception to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getProductionDateWithCompletionHandler:(void (^)(HbpProductionDate * _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("getProductionDate(completionHandler:)")));

/**
 * @note This method converts instances of Exception to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)resetBatteryWithCompletionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("resetBattery(completionHandler:)")));

/**
 * @note This method converts instances of Exception to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)setAutoShipDaysDays:(int32_t)days completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("setAutoShipDays(days:completionHandler:)")));

/**
 * @note This method converts instances of Exception to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)setOptimizedChargingSettingChargingSetting:(HbpChargingSetting *)chargingSetting completionHandler:(void (^)(HbpBoolean * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("setOptimizedChargingSetting(chargingSetting:completionHandler:)")));

/**
 * @note This method converts instances of Exception to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)setRTCWithTimezoneTimezoneDate:(HbpTimezoneDate *)timezoneDate completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("setRTCWithTimezone(timezoneDate:completionHandler:)")));

/**
 * @note This method converts instances of Exception to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)shutdownBatteryWithCompletionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("shutdownBattery(completionHandler:)")));
@end

__attribute__((swift_name("BatteryPartListener")))
@protocol HbpBatteryPartListener
@required
- (void)onActCurrentInmaValue:(int64_t)value __attribute__((swift_name("onActCurrentInma(value:)")));
- (void)onActVoltageInmvValue:(int64_t)value __attribute__((swift_name("onActVoltageInmv(value:)")));
- (void)onCapacityInPercentageValue:(int32_t)value __attribute__((swift_name("onCapacityInPercentage(value:)")));
- (void)onCapacityInmwhValue:(int64_t)value __attribute__((swift_name("onCapacityInmwh(value:)")));
- (void)onChargingRemainSecondSecond:(int32_t)second __attribute__((swift_name("onChargingRemainSecond(second:)")));
- (void)onIsChargingValue:(BOOL)value __attribute__((swift_name("onIsCharging(value:)")));
- (void)onRTCWithTimezoneTimezoneDate:(HbpTimezoneDate *)timezoneDate __attribute__((swift_name("onRTCWithTimezone(timezoneDate:)")));
- (void)onStateOfHealthInPercentageValue:(int32_t)value __attribute__((swift_name("onStateOfHealthInPercentage(value:)")));
- (void)onStateOfHealthInmwhValue:(int32_t)value __attribute__((swift_name("onStateOfHealthInmwh(value:)")));
@end

__attribute__((swift_name("ProductionDate")))
@interface HbpProductionDate : HbpBase
- (instancetype)initWithYear:(int32_t)year month:(int32_t)month __attribute__((swift_name("init(year:month:)"))) __attribute__((objc_designated_initializer));
@property (readonly) int32_t month __attribute__((swift_name("month")));
@property (readonly) int32_t year __attribute__((swift_name("year")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AssistLevelValueState")))
@interface HbpAssistLevelValueState : HbpKotlinEnum<HbpAssistLevelValueState *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) HbpAssistLevelValueState *default_ __attribute__((swift_name("default_")));
@property (class, readonly) HbpAssistLevelValueState *custom __attribute__((swift_name("custom")));
+ (HbpKotlinArray<HbpAssistLevelValueState *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<HbpAssistLevelValueState *> *entries __attribute__((swift_name("entries")));
@property (readonly) int32_t value __attribute__((swift_name("value")));
@end

__attribute__((swift_name("ControllerPart")))
@protocol HbpControllerPart <HbpHyenaPart>
@required

/**
 * @note This method converts instances of Exception to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)applyParameterWithCompletionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("applyParameter(completionHandler:)")));

/**
 * @note This method converts instances of Exception to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)applyRidingParameterWithCompletionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("applyRidingParameter(completionHandler:)")));

/**
 * @note This method converts instances of Exception to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getAssistLevelValueWithCompletionHandler:(void (^)(NSArray<HbpInt *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getAssistLevelValue(completionHandler:)")));

/**
 * @note This method converts instances of Exception to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getAssistLevelValueStateWithCompletionHandler:(void (^)(HbpAssistLevelValueState * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getAssistLevelValueState(completionHandler:)")));

/**
 * @note This method converts instances of TimeOutExceptionCancel, CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getAssistanceLevelWithCompletionHandler:(void (^)(HbpInt * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getAssistanceLevel(completionHandler:)")));

/**
 * @note This method converts instances of Exception to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getAssistanceLevelDistributionWithCompletionHandler:(void (^)(NSArray<HbpDouble *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getAssistanceLevelDistribution(completionHandler:)")));

/**
 * @note This method converts instances of Exception to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getMaxSpeedSupportInKmWithCompletionHandler:(void (^)(HbpInt * _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("getMaxSpeedSupportInKm(completionHandler:)")));

/**
 * @note This method converts instances of Exception to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getPartStateWithCompletionHandler:(void (^)(HbpPartState * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getPartState(completionHandler:)")));

/**
 * @note This method converts instances of Exception to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getPedalResponseValueWithCompletionHandler:(void (^)(NSArray<HbpInt *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getPedalResponseValue(completionHandler:)")));

/**
 * @note This method converts instances of Exception to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)setAssistLevelAssistLevel:(int32_t)assistLevel completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("setAssistLevel(assistLevel:completionHandler:)")));

/**
 * @note This method converts instances of Exception to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)setAssistLevelValueLevel:(int32_t)level value:(int32_t)value completionHandler:(void (^)(NSArray<HbpInt *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("setAssistLevelValue(level:value:completionHandler:)")));

/**
 * @note This method converts instances of Exception to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)setAssistLevelValueToDefaultWithCompletionHandler:(void (^)(NSArray<HbpInt *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("setAssistLevelValueToDefault(completionHandler:)")));

/**
 * @note This method converts instances of Exception to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)setMaxSpeedSupportTo30KmWithCompletionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("setMaxSpeedSupportTo30Km(completionHandler:)")));

/**
 * @note This method converts instances of Exception to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)setPedalResponseValueLevel:(int32_t)level value:(int32_t)value completionHandler:(void (^)(NSArray<HbpInt *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("setPedalResponseValue(level:value:completionHandler:)")));

/**
 * @note This method converts instances of Exception to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)setPedalResponseValueToDefaultWithCompletionHandler:(void (^)(NSArray<HbpInt *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("setPedalResponseValueToDefault(completionHandler:)")));
@end

__attribute__((swift_name("ControllerPartListener")))
@protocol HbpControllerPartListener
@required
- (void)onAssistanceLevelValue:(int32_t)value __attribute__((swift_name("onAssistanceLevel(value:)")));
- (void)onMotorPowerInmwValue:(int64_t)value __attribute__((swift_name("onMotorPowerInmw(value:)")));
- (void)onOdoInKmOdo:(float)odo __attribute__((swift_name("onOdoInKm(odo:)")));
- (void)onPartStateState:(HbpPartState *)state mid:(NSString * _Nullable)mid __attribute__((swift_name("onPartState(state:mid:)")));
- (void)onRPMValue:(int32_t)value __attribute__((swift_name("onRPM(value:)")));
- (void)onRemainDistanceInKmDistance:(int32_t)distance __attribute__((swift_name("onRemainDistanceInKm(distance:)")));
- (void)onSpeedInKmSpeed:(float)speed __attribute__((swift_name("onSpeedInKm(speed:)")));
- (void)onTreadlePowerInmwValue:(int64_t)value __attribute__((swift_name("onTreadlePowerInmw(value:)")));
@end

__attribute__((swift_name("DerailleurPart")))
@protocol HbpDerailleurPart <HbpHyenaPart>
@required

/**
 * @note This method converts instances of Exception to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)downGearOffsetWithCompletionHandler:(void (^)(HbpInt * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("downGearOffset(completionHandler:)")));

/**
 * @note This method converts instances of Exception to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)enterCalibrationModeWithCompletionHandler:(void (^)(HbpBoolean * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("enterCalibrationMode(completionHandler:)")));

/**
 * @note This method converts instances of Exception to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)returnToPreviousGearOffsetWithCompletionHandler:(void (^)(HbpInt * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("returnToPreviousGearOffset(completionHandler:)")));

/**
 * @note This method converts instances of Exception to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)saveGearOffsetModificationWithCompletionHandler:(void (^)(HbpInt * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("saveGearOffsetModification(completionHandler:)")));

/**
 * @note This method converts instances of Exception to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)setGearOffsetToDefaultWithCompletionHandler:(void (^)(HbpInt * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("setGearOffsetToDefault(completionHandler:)")));

/**
 * @note This method converts instances of Exception to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)upGearOffsetWithCompletionHandler:(void (^)(HbpInt * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("upGearOffset(completionHandler:)")));
@end

__attribute__((swift_name("DerailleurPartListener")))
@protocol HbpDerailleurPartListener
@required
- (void)onGearIndexIndex:(int32_t)index __attribute__((swift_name("onGearIndex(index:)")));
- (void)onGearOffsetNumberValue:(int32_t)value __attribute__((swift_name("onGearOffsetNumber(value:)")));
- (void)onGearRangeValue:(int32_t)value __attribute__((swift_name("onGearRange(value:)")));
@end

__attribute__((swift_name("ExtenderBatteryPart")))
@protocol HbpExtenderBatteryPart <HbpHyenaPart>
@required

/**
 * @note This method converts instances of Exception to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getChargeCyclesWithCompletionHandler:(void (^)(HbpInt * _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("getChargeCycles(completionHandler:)")));
@end

__attribute__((swift_name("ExtenderBatteryPartListener")))
@protocol HbpExtenderBatteryPartListener <HbpBatteryPartListener>
@required
@end

__attribute__((swift_name("HMIPart")))
@protocol HbpHMIPart <HbpHyenaPart>
@required

/**
 * @note This method converts instances of Exception to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)changeSpeedUnitUnit:(HbpHMIPartSpeedUnit *)unit completionHandler:(void (^)(HbpBoolean * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("changeSpeedUnit(unit:completionHandler:)")));

/**
 * @note This method converts instances of Exception to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (BOOL)firmwareUpdateTopicMid:(NSString * _Nullable)topicMid firmwareBin:(HbpKotlinByteArray *)firmwareBin listener:(id<HbpIFirmwareUpdateListener>)listener error:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("firmwareUpdate(topicMid:firmwareBin:listener:)")));

/**
 * @note This method converts instances of Exception to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)readSpeedUnitWithCompletionHandler:(void (^)(HbpHMIPartSpeedUnit * _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("readSpeedUnit(completionHandler:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("HMIPartSpeedUnit")))
@interface HbpHMIPartSpeedUnit : HbpKotlinEnum<HbpHMIPartSpeedUnit *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) HbpHMIPartSpeedUnit *metric __attribute__((swift_name("metric")));
@property (class, readonly) HbpHMIPartSpeedUnit *imperial __attribute__((swift_name("imperial")));
+ (HbpKotlinArray<HbpHMIPartSpeedUnit *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<HbpHMIPartSpeedUnit *> *entries __attribute__((swift_name("entries")));
@end

__attribute__((swift_name("HMIPartListener")))
@protocol HbpHMIPartListener
@required
@end

__attribute__((swift_name("ILockPart")))
@protocol HbpILockPart <HbpHyenaPart>
@required

/**
 * @note This method converts instances of Exception to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)lockWithCompletionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("lock(completionHandler:)")));

/**
 * @note This method converts instances of Exception to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)registerForceRenew:(BOOL)forceRenew completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("register(forceRenew:completionHandler:)")));

/**
 * @note This method converts instances of Exception to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)setLockCountdownTimeSecond:(int32_t)second completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("setLockCountdownTime(second:completionHandler:)")));

/**
 * @note This method converts instances of Exception to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)unlockWithCompletionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("unlock(completionHandler:)")));
@property HbpILockPartILockStates *iLockStates __attribute__((swift_name("iLockStates")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ILockPartILockChainLockState")))
@interface HbpILockPartILockChainLockState : HbpKotlinEnum<HbpILockPartILockChainLockState *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) HbpILockPartILockChainLockState *insert __attribute__((swift_name("insert")));
@property (class, readonly) HbpILockPartILockChainLockState *uninsert __attribute__((swift_name("uninsert")));
+ (HbpKotlinArray<HbpILockPartILockChainLockState *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<HbpILockPartILockChainLockState *> *entries __attribute__((swift_name("entries")));
@property (readonly) int32_t value __attribute__((swift_name("value")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ILockPartILockRingLockState")))
@interface HbpILockPartILockRingLockState : HbpKotlinEnum<HbpILockPartILockRingLockState *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) HbpILockPartILockRingLockState *lock __attribute__((swift_name("lock")));
@property (class, readonly) HbpILockPartILockRingLockState *unlock __attribute__((swift_name("unlock")));
+ (HbpKotlinArray<HbpILockPartILockRingLockState *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<HbpILockPartILockRingLockState *> *entries __attribute__((swift_name("entries")));
@property (readonly) int32_t value __attribute__((swift_name("value")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ILockPartILockState")))
@interface HbpILockPartILockState : HbpKotlinEnum<HbpILockPartILockState *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) HbpILockPartILockState *lock __attribute__((swift_name("lock")));
@property (class, readonly) HbpILockPartILockState *unlock __attribute__((swift_name("unlock")));
@property (class, readonly) HbpILockPartILockState *inlockorunlock __attribute__((swift_name("inlockorunlock")));
+ (HbpKotlinArray<HbpILockPartILockState *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<HbpILockPartILockState *> *entries __attribute__((swift_name("entries")));
@property (readonly) int32_t value __attribute__((swift_name("value")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ILockPartILockStates")))
@interface HbpILockPartILockStates : HbpBase
- (instancetype)initWithLockState:(HbpILockPartILockState * _Nullable)lockState ringLockState:(HbpILockPartILockRingLockState * _Nullable)ringLockState chainLockState:(HbpILockPartILockChainLockState * _Nullable)chainLockState __attribute__((swift_name("init(lockState:ringLockState:chainLockState:)"))) __attribute__((objc_designated_initializer));
- (HbpILockPartILockStates *)doCopyLockState:(HbpILockPartILockState * _Nullable)lockState ringLockState:(HbpILockPartILockRingLockState * _Nullable)ringLockState chainLockState:(HbpILockPartILockChainLockState * _Nullable)chainLockState __attribute__((swift_name("doCopy(lockState:ringLockState:chainLockState:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property HbpILockPartILockChainLockState * _Nullable chainLockState __attribute__((swift_name("chainLockState")));
@property HbpILockPartILockState * _Nullable lockState __attribute__((swift_name("lockState")));
@property HbpILockPartILockRingLockState * _Nullable ringLockState __attribute__((swift_name("ringLockState")));
@end

__attribute__((swift_name("ILockPartListener")))
@protocol HbpILockPartListener
@required
- (void)onLockRequestFlag:(BOOL)flag __attribute__((swift_name("onLockRequest(flag:)")));
- (void)onLockTimeCountdownSecond:(int32_t)second __attribute__((swift_name("onLockTimeCountdown(second:)")));
- (void)onLockTimeSettingSecond:(int32_t)second __attribute__((swift_name("onLockTimeSetting(second:)")));
- (void)onStatesChangePrevState:(HbpILockPartILockStates *)prevState state:(HbpILockPartILockStates *)state __attribute__((swift_name("onStatesChange(prevState:state:)")));
@end

__attribute__((swift_name("LightPart")))
@protocol HbpLightPart <HbpHyenaPart>
@required

/**
 * @note This method converts instances of Exception to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)turnLightOn:(BOOL)on completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("turnLight(on:completionHandler:)")));
@end

__attribute__((swift_name("LightPartListener")))
@protocol HbpLightPartListener
@required
- (void)onLightStateIsOn:(BOOL)isOn __attribute__((swift_name("onLightState(isOn:)")));
@end

__attribute__((swift_name("TPMSPart")))
@protocol HbpTPMSPart <HbpHyenaPart>
@required

/**
 * @note This method converts instances of Exception to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)bindMacAddressTpmsPosition:(HbpTPMSPosition *)tpmsPosition macAddress:(NSString *)macAddress completionHandler:(void (^)(HbpBoolean * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("bindMacAddress(tpmsPosition:macAddress:completionHandler:)")));

/**
 * @note This method converts instances of Exception to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)readMacAddressTpmsPosition:(HbpTPMSPosition *)tpmsPosition completionHandler:(void (^)(NSString * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readMacAddress(tpmsPosition:completionHandler:)")));

/**
 * @note This method converts instances of Exception to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)unbindMacAddressTpmsPosition:(HbpTPMSPosition *)tpmsPosition completionHandler:(void (^)(HbpBoolean * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("unbindMacAddress(tpmsPosition:completionHandler:)")));
@end

__attribute__((swift_name("TPMSPartListener")))
@protocol HbpTPMSPartListener
@required
- (void)onTPMSStatesPosition:(HbpTPMSPosition *)position psi:(int32_t)psi batteryVoltage:(float)batteryVoltage temperatureDegreesCelsius:(int32_t)temperatureDegreesCelsius __attribute__((swift_name("onTPMSStates(position:psi:batteryVoltage:temperatureDegreesCelsius:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TPMSPosition")))
@interface HbpTPMSPosition : HbpKotlinEnum<HbpTPMSPosition *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) HbpTPMSPosition *front __attribute__((swift_name("front")));
@property (class, readonly) HbpTPMSPosition *rear __attribute__((swift_name("rear")));
+ (HbpKotlinArray<HbpTPMSPosition *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<HbpTPMSPosition *> *entries __attribute__((swift_name("entries")));
@end

__attribute__((swift_name("Logger")))
@protocol HbpLogger
@required
- (void)dT:(HbpKotlinThrowable * _Nullable)t __attribute__((swift_name("d(t:)")));
- (void)dT:(HbpKotlinThrowable * _Nullable)t message:(NSString *(^)(void))message __attribute__((swift_name("d(t:message:)")));
- (void)eT:(HbpKotlinThrowable * _Nullable)t __attribute__((swift_name("e(t:)")));
- (void)eT:(HbpKotlinThrowable * _Nullable)t message:(NSString *(^)(void))message __attribute__((swift_name("e(t:message:)")));
- (void)iT:(HbpKotlinThrowable * _Nullable)t __attribute__((swift_name("i(t:)")));
- (void)iT:(HbpKotlinThrowable * _Nullable)t message:(NSString *(^)(void))message __attribute__((swift_name("i(t:message:)")));
- (void)logPriority:(int32_t)priority t:(HbpKotlinThrowable * _Nullable)t message:(NSString * _Nullable (^ _Nullable)(void))message __attribute__((swift_name("log(priority:t:message:)")));
- (void)vT:(HbpKotlinThrowable * _Nullable)t __attribute__((swift_name("v(t:)")));
- (void)vT:(HbpKotlinThrowable * _Nullable)t message:(NSString *(^)(void))message __attribute__((swift_name("v(t:message:)")));
- (void)wT:(HbpKotlinThrowable * _Nullable)t __attribute__((swift_name("w(t:)")));
- (void)wT:(HbpKotlinThrowable * _Nullable)t message:(NSString *(^)(void))message __attribute__((swift_name("w(t:message:)")));
@end

__attribute__((swift_name("HyLoggerBase")))
@interface HbpHyLoggerBase : HbpBase <HbpLogger>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)dT:(HbpKotlinThrowable * _Nullable)t __attribute__((swift_name("d(t:)")));
- (void)dT:(HbpKotlinThrowable * _Nullable)t message:(NSString *(^)(void))message __attribute__((swift_name("d(t:message:)")));
- (void)eT:(HbpKotlinThrowable * _Nullable)t __attribute__((swift_name("e(t:)")));
- (void)eT:(HbpKotlinThrowable * _Nullable)t message:(NSString *(^)(void))message __attribute__((swift_name("e(t:message:)")));
- (void)iT:(HbpKotlinThrowable * _Nullable)t __attribute__((swift_name("i(t:)")));
- (void)iT:(HbpKotlinThrowable * _Nullable)t message:(NSString *(^)(void))message __attribute__((swift_name("i(t:message:)")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (BOOL)isLoggablePriority:(int32_t)priority __attribute__((swift_name("isLoggable(priority:)")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (void)logPriority:(int32_t)priority message:(NSString *)message t:(HbpKotlinThrowable * _Nullable)t __attribute__((swift_name("log(priority:message:t:)")));
- (void)logPriority:(int32_t)priority t:(HbpKotlinThrowable * _Nullable)t message:(NSString * _Nullable (^ _Nullable)(void))message __attribute__((swift_name("log(priority:t:message:)")));
- (void)vT:(HbpKotlinThrowable * _Nullable)t __attribute__((swift_name("v(t:)")));
- (void)vT:(HbpKotlinThrowable * _Nullable)t message:(NSString *(^)(void))message __attribute__((swift_name("v(t:message:)")));
- (void)wT:(HbpKotlinThrowable * _Nullable)t __attribute__((swift_name("w(t:)")));
- (void)wT:(HbpKotlinThrowable * _Nullable)t message:(NSString *(^)(void))message __attribute__((swift_name("w(t:message:)")));
@end

__attribute__((swift_name("DefaultHyLoggerBase")))
@interface HbpDefaultHyLoggerBase : HbpHyLoggerBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) HbpDefaultHyLoggerBaseCompanion *companion __attribute__((swift_name("companion")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (BOOL)isLoggablePriority:(int32_t)priority __attribute__((swift_name("isLoggable(priority:)")));
@property int32_t logLevel __attribute__((swift_name("logLevel")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DefaultHyLogger")))
@interface HbpDefaultHyLogger : HbpDefaultHyLoggerBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) HbpDefaultHyLoggerCompanion *companion __attribute__((swift_name("companion")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (void)logPriority:(int32_t)priority message:(NSString *)message t:(HbpKotlinThrowable * _Nullable)t __attribute__((swift_name("log(priority:message:t:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DefaultHyLogger.Companion")))
@interface HbpDefaultHyLoggerCompanion : HbpBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) HbpDefaultHyLoggerCompanion *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DefaultHyLoggerBase.Companion")))
@interface HbpDefaultHyLoggerBaseCompanion : HbpBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) HbpDefaultHyLoggerBaseCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) int32_t DEFAULT_LOG_LEVEL __attribute__((swift_name("DEFAULT_LOG_LEVEL")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LoggerCompanion")))
@interface HbpLoggerCompanion : HbpBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) HbpLoggerCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) int32_t DEBUG_ __attribute__((swift_name("DEBUG_")));
@property (readonly) int32_t ERROR __attribute__((swift_name("ERROR")));
@property (readonly) int32_t INFO __attribute__((swift_name("INFO")));
@property (readonly) int32_t VERBOSE __attribute__((swift_name("VERBOSE")));
@property (readonly) int32_t WARN __attribute__((swift_name("WARN")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinByteArray")))
@interface HbpKotlinByteArray : HbpBase
+ (instancetype)arrayWithSize:(int32_t)size __attribute__((swift_name("init(size:)")));
+ (instancetype)arrayWithSize:(int32_t)size init:(HbpByte *(^)(HbpInt *))init __attribute__((swift_name("init(size:init:)")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (int8_t)getIndex:(int32_t)index __attribute__((swift_name("get(index:)")));
- (HbpKotlinByteIterator *)iterator __attribute__((swift_name("iterator()")));
- (void)setIndex:(int32_t)index value:(int8_t)value __attribute__((swift_name("set(index:value:)")));
@property (readonly) int32_t size __attribute__((swift_name("size")));
@end

@interface HbpKotlinByteArray (Extensions)
- (NSData *)toData __attribute__((swift_name("toData()")));
- (NSString *)toHexString __attribute__((swift_name("toHexString()")));
@end

@interface HbpKotlinThrowable (Extensions)
@property (readonly) id<HbpIHbpExceptionInfo> _Nullable hbpExceptionInfo __attribute__((swift_name("hbpExceptionInfo")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ByteKt")))
@interface HbpByteKt : HbpBase
+ (HbpKotlinByteArray *)toByteArray:(NSData *)receiver __attribute__((swift_name("toByteArray(_:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DeferredKt")))
@interface HbpDeferredKt : HbpBase

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
+ (void)await:(id<HbpKotlinx_coroutines_coreDeferred>)receiver timeout:(int64_t)timeout defaultValue:(id _Nullable)defaultValue completionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("await(_:timeout:defaultValue:completionHandler:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UnitsExKt")))
@interface HbpUnitsExKt : HbpBase
+ (HbpExtenderPercent *)ePercent:(int32_t)receiver __attribute__((swift_name("ePercent(_:)")));
+ (HbpLongTermPercent *)lPercent:(int32_t)receiver __attribute__((swift_name("lPercent(_:)")));
+ (HbpDay *)toDay:(int32_t)receiver __attribute__((swift_name("toDay(_:)")));
+ (HbpHour *)toHour:(int32_t)receiver __attribute__((swift_name("toHour(_:)")));
+ (HbpMinute *)toMin:(int32_t)receiver __attribute__((swift_name("toMin(_:)")));
+ (HbpMonth *)toMonth:(int32_t)receiver __attribute__((swift_name("toMonth(_:)")));
+ (HbpPercent *)toPercent:(int32_t)receiver __attribute__((swift_name("toPercent(_:)")));
+ (HbpYear *)toYear:(int32_t)receiver __attribute__((swift_name("toYear(_:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Base64DecodedKt")))
@interface HbpBase64DecodedKt : HbpBase
+ (HbpKotlinByteArray *)base64Decoded:(NSString *)receiver __attribute__((swift_name("base64Decoded(_:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RunSuspendingTestKt")))
@interface HbpRunSuspendingTestKt : HbpBase
+ (void)runSuspendingTestBlock:(id<HbpKotlinSuspendFunction0>)block __attribute__((swift_name("runSuspendingTest(block:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ToHexStringKt")))
@interface HbpToHexStringKt : HbpBase
+ (NSString *)toBcdString:(int8_t)receiver __attribute__((swift_name("toBcdString(_:)")));
@end

__attribute__((swift_name("KotlinRuntimeException")))
@interface HbpKotlinRuntimeException : HbpKotlinException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(HbpKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(HbpKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
@end

__attribute__((swift_name("KotlinIllegalArgumentException")))
@interface HbpKotlinIllegalArgumentException : HbpKotlinRuntimeException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(HbpKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(HbpKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinEnumCompanion")))
@interface HbpKotlinEnumCompanion : HbpBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) HbpKotlinEnumCompanion *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinArray")))
@interface HbpKotlinArray<T> : HbpBase
+ (instancetype)arrayWithSize:(int32_t)size init:(T _Nullable (^)(HbpInt *))init __attribute__((swift_name("init(size:init:)")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (T _Nullable)getIndex:(int32_t)index __attribute__((swift_name("get(index:)")));
- (id<HbpKotlinIterator>)iterator __attribute__((swift_name("iterator()")));
- (void)setIndex:(int32_t)index value:(T _Nullable)value __attribute__((swift_name("set(index:value:)")));
@property (readonly) int32_t size __attribute__((swift_name("size")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreSerialFormat")))
@protocol HbpKotlinx_serialization_coreSerialFormat
@required
@property (readonly) HbpKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreStringFormat")))
@protocol HbpKotlinx_serialization_coreStringFormat <HbpKotlinx_serialization_coreSerialFormat>
@required
- (id _Nullable)decodeFromStringDeserializer:(id<HbpKotlinx_serialization_coreDeserializationStrategy>)deserializer string:(NSString *)string __attribute__((swift_name("decodeFromString(deserializer:string:)")));
- (NSString *)encodeToStringSerializer:(id<HbpKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeToString(serializer:value:)")));
@end

__attribute__((swift_name("Kotlinx_serialization_jsonJson")))
@interface HbpKotlinx_serialization_jsonJson : HbpBase <HbpKotlinx_serialization_coreStringFormat>
@property (class, readonly, getter=companion) HbpKotlinx_serialization_jsonJsonDefault *companion __attribute__((swift_name("companion")));
- (id _Nullable)decodeFromJsonElementDeserializer:(id<HbpKotlinx_serialization_coreDeserializationStrategy>)deserializer element:(HbpKotlinx_serialization_jsonJsonElement *)element __attribute__((swift_name("decodeFromJsonElement(deserializer:element:)")));
- (id _Nullable)decodeFromStringString:(NSString *)string __attribute__((swift_name("decodeFromString(string:)")));
- (id _Nullable)decodeFromStringDeserializer:(id<HbpKotlinx_serialization_coreDeserializationStrategy>)deserializer string:(NSString *)string __attribute__((swift_name("decodeFromString(deserializer:string:)")));
- (HbpKotlinx_serialization_jsonJsonElement *)encodeToJsonElementSerializer:(id<HbpKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeToJsonElement(serializer:value:)")));
- (NSString *)encodeToStringSerializer:(id<HbpKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeToString(serializer:value:)")));
- (HbpKotlinx_serialization_jsonJsonElement *)parseToJsonElementString:(NSString *)string __attribute__((swift_name("parseToJsonElement(string:)")));
@property (readonly) HbpKotlinx_serialization_jsonJsonConfiguration *configuration __attribute__((swift_name("configuration")));
@property (readonly) HbpKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end

__attribute__((swift_name("KotlinIllegalStateException")))
@interface HbpKotlinIllegalStateException : HbpKotlinRuntimeException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(HbpKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(HbpKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.4")
*/
__attribute__((swift_name("KotlinCancellationException")))
@interface HbpKotlinCancellationException : HbpKotlinIllegalStateException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(HbpKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(HbpKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
@end

__attribute__((swift_name("Kotlinx_serialization_coreSerializationStrategy")))
@protocol HbpKotlinx_serialization_coreSerializationStrategy
@required
- (void)serializeEncoder:(id<HbpKotlinx_serialization_coreEncoder>)encoder value:(id _Nullable)value __attribute__((swift_name("serialize(encoder:value:)")));
@property (readonly) id<HbpKotlinx_serialization_coreSerialDescriptor> descriptor __attribute__((swift_name("descriptor")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreDeserializationStrategy")))
@protocol HbpKotlinx_serialization_coreDeserializationStrategy
@required
- (id _Nullable)deserializeDecoder:(id<HbpKotlinx_serialization_coreDecoder>)decoder __attribute__((swift_name("deserialize(decoder:)")));
@property (readonly) id<HbpKotlinx_serialization_coreSerialDescriptor> descriptor __attribute__((swift_name("descriptor")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreKSerializer")))
@protocol HbpKotlinx_serialization_coreKSerializer <HbpKotlinx_serialization_coreSerializationStrategy, HbpKotlinx_serialization_coreDeserializationStrategy>
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinPair")))
@interface HbpKotlinPair<__covariant A, __covariant B> : HbpBase
- (instancetype)initWithFirst:(A _Nullable)first second:(B _Nullable)second __attribute__((swift_name("init(first:second:)"))) __attribute__((objc_designated_initializer));
- (HbpKotlinPair<A, B> *)doCopyFirst:(A _Nullable)first second:(B _Nullable)second __attribute__((swift_name("doCopy(first:second:)")));
- (BOOL)equalsOther:(id _Nullable)other __attribute__((swift_name("equals(other:)")));
- (int32_t)hashCode __attribute__((swift_name("hashCode()")));
- (NSString *)toString __attribute__((swift_name("toString()")));
@property (readonly) A _Nullable first __attribute__((swift_name("first")));
@property (readonly) B _Nullable second __attribute__((swift_name("second")));
@end

__attribute__((unavailable("can't be imported")))
__attribute__((swift_name("TimeOutExceptionCancel")))
@interface HbpTimeOutExceptionCancel : NSObject
@end

__attribute__((swift_name("KotlinIterator")))
@protocol HbpKotlinIterator
@required
- (BOOL)hasNext __attribute__((swift_name("hasNext()")));
- (id _Nullable)next __attribute__((swift_name("next()")));
@end

__attribute__((swift_name("KotlinByteIterator")))
@interface HbpKotlinByteIterator : HbpBase <HbpKotlinIterator>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (HbpByte *)next __attribute__((swift_name("next()")));
- (int8_t)nextByte __attribute__((swift_name("nextByte()")));
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.3")
*/
__attribute__((swift_name("KotlinCoroutineContext")))
@protocol HbpKotlinCoroutineContext
@required
- (id _Nullable)foldInitial:(id _Nullable)initial operation:(id _Nullable (^)(id _Nullable, id<HbpKotlinCoroutineContextElement>))operation __attribute__((swift_name("fold(initial:operation:)")));
- (id<HbpKotlinCoroutineContextElement> _Nullable)getKey:(id<HbpKotlinCoroutineContextKey>)key __attribute__((swift_name("get(key:)")));
- (id<HbpKotlinCoroutineContext>)minusKeyKey:(id<HbpKotlinCoroutineContextKey>)key __attribute__((swift_name("minusKey(key:)")));
- (id<HbpKotlinCoroutineContext>)plusContext:(id<HbpKotlinCoroutineContext>)context __attribute__((swift_name("plus(context:)")));
@end

__attribute__((swift_name("KotlinCoroutineContextElement")))
@protocol HbpKotlinCoroutineContextElement <HbpKotlinCoroutineContext>
@required
@property (readonly) id<HbpKotlinCoroutineContextKey> key __attribute__((swift_name("key")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreJob")))
@protocol HbpKotlinx_coroutines_coreJob <HbpKotlinCoroutineContextElement>
@required
- (id<HbpKotlinx_coroutines_coreChildHandle>)attachChildChild:(id<HbpKotlinx_coroutines_coreChildJob>)child __attribute__((swift_name("attachChild(child:)")));
- (void)cancelCause:(HbpKotlinCancellationException * _Nullable)cause __attribute__((swift_name("cancel(cause:)")));
- (HbpKotlinCancellationException *)getCancellationException __attribute__((swift_name("getCancellationException()")));
- (id<HbpKotlinx_coroutines_coreDisposableHandle>)invokeOnCompletionHandler:(void (^)(HbpKotlinThrowable * _Nullable))handler __attribute__((swift_name("invokeOnCompletion(handler:)")));
- (id<HbpKotlinx_coroutines_coreDisposableHandle>)invokeOnCompletionOnCancelling:(BOOL)onCancelling invokeImmediately:(BOOL)invokeImmediately handler:(void (^)(HbpKotlinThrowable * _Nullable))handler __attribute__((swift_name("invokeOnCompletion(onCancelling:invokeImmediately:handler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)joinWithCompletionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("join(completionHandler:)")));
- (id<HbpKotlinx_coroutines_coreJob>)plusOther:(id<HbpKotlinx_coroutines_coreJob>)other __attribute__((swift_name("plus(other:)"))) __attribute__((unavailable("Operator '+' on two Job objects is meaningless. Job is a coroutine context element and `+` is a set-sum operator for coroutine contexts. The job to the right of `+` just replaces the job the left of `+`.")));
- (BOOL)start __attribute__((swift_name("start()")));
@property (readonly) id<HbpKotlinSequence> children __attribute__((swift_name("children")));
@property (readonly) BOOL isActive __attribute__((swift_name("isActive")));
@property (readonly) BOOL isCancelled __attribute__((swift_name("isCancelled")));
@property (readonly) BOOL isCompleted __attribute__((swift_name("isCompleted")));
@property (readonly) id<HbpKotlinx_coroutines_coreSelectClause0> onJoin __attribute__((swift_name("onJoin")));

/**
 * @note annotations
 *   kotlinx.coroutines.ExperimentalCoroutinesApi
*/
@property (readonly) id<HbpKotlinx_coroutines_coreJob> _Nullable parent __attribute__((swift_name("parent")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreDeferred")))
@protocol HbpKotlinx_coroutines_coreDeferred <HbpKotlinx_coroutines_coreJob>
@required

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)awaitWithCompletionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("await(completionHandler:)")));

/**
 * @note annotations
 *   kotlinx.coroutines.ExperimentalCoroutinesApi
*/
- (id _Nullable)getCompleted __attribute__((swift_name("getCompleted()")));

/**
 * @note annotations
 *   kotlinx.coroutines.ExperimentalCoroutinesApi
*/
- (HbpKotlinThrowable * _Nullable)getCompletionExceptionOrNull __attribute__((swift_name("getCompletionExceptionOrNull()")));
@property (readonly) id<HbpKotlinx_coroutines_coreSelectClause1> onAwait __attribute__((swift_name("onAwait")));
@end

__attribute__((swift_name("KotlinFunction")))
@protocol HbpKotlinFunction
@required
@end

__attribute__((swift_name("KotlinSuspendFunction0")))
@protocol HbpKotlinSuspendFunction0 <HbpKotlinFunction>
@required

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)invokeWithCompletionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("invoke(completionHandler:)")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreSerializersModule")))
@interface HbpKotlinx_serialization_coreSerializersModule : HbpBase

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (void)dumpToCollector:(id<HbpKotlinx_serialization_coreSerializersModuleCollector>)collector __attribute__((swift_name("dumpTo(collector:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id<HbpKotlinx_serialization_coreKSerializer> _Nullable)getContextualKClass:(id<HbpKotlinKClass>)kClass typeArgumentsSerializers:(NSArray<id<HbpKotlinx_serialization_coreKSerializer>> *)typeArgumentsSerializers __attribute__((swift_name("getContextual(kClass:typeArgumentsSerializers:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id<HbpKotlinx_serialization_coreSerializationStrategy> _Nullable)getPolymorphicBaseClass:(id<HbpKotlinKClass>)baseClass value:(id)value __attribute__((swift_name("getPolymorphic(baseClass:value:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id<HbpKotlinx_serialization_coreDeserializationStrategy> _Nullable)getPolymorphicBaseClass:(id<HbpKotlinKClass>)baseClass serializedClassName:(NSString * _Nullable)serializedClassName __attribute__((swift_name("getPolymorphic(baseClass:serializedClassName:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_serialization_jsonJson.Default")))
@interface HbpKotlinx_serialization_jsonJsonDefault : HbpKotlinx_serialization_jsonJson
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)default_ __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) HbpKotlinx_serialization_jsonJsonDefault *shared __attribute__((swift_name("shared")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable(with=NormalClass(value=kotlinx/serialization/json/JsonElementSerializer))
*/
__attribute__((swift_name("Kotlinx_serialization_jsonJsonElement")))
@interface HbpKotlinx_serialization_jsonJsonElement : HbpBase
@property (class, readonly, getter=companion) HbpKotlinx_serialization_jsonJsonElementCompanion *companion __attribute__((swift_name("companion")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_serialization_jsonJsonConfiguration")))
@interface HbpKotlinx_serialization_jsonJsonConfiguration : HbpBase
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) BOOL allowSpecialFloatingPointValues __attribute__((swift_name("allowSpecialFloatingPointValues")));
@property (readonly) BOOL allowStructuredMapKeys __attribute__((swift_name("allowStructuredMapKeys")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
@property (readonly) BOOL allowTrailingComma __attribute__((swift_name("allowTrailingComma")));
@property (readonly) NSString *classDiscriminator __attribute__((swift_name("classDiscriminator")));
@property (readonly) BOOL coerceInputValues __attribute__((swift_name("coerceInputValues")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
@property (readonly) BOOL decodeEnumsCaseInsensitive __attribute__((swift_name("decodeEnumsCaseInsensitive")));
@property (readonly) BOOL encodeDefaults __attribute__((swift_name("encodeDefaults")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
@property (readonly) BOOL explicitNulls __attribute__((swift_name("explicitNulls")));
@property (readonly) BOOL ignoreUnknownKeys __attribute__((swift_name("ignoreUnknownKeys")));
@property (readonly) BOOL isLenient __attribute__((swift_name("isLenient")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
@property (readonly) id<HbpKotlinx_serialization_jsonJsonNamingStrategy> _Nullable namingStrategy __attribute__((swift_name("namingStrategy")));
@property (readonly) BOOL prettyPrint __attribute__((swift_name("prettyPrint")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
@property (readonly) NSString *prettyPrintIndent __attribute__((swift_name("prettyPrintIndent")));
@property (readonly) BOOL useAlternativeNames __attribute__((swift_name("useAlternativeNames")));
@property (readonly) BOOL useArrayPolymorphism __attribute__((swift_name("useArrayPolymorphism")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreEncoder")))
@protocol HbpKotlinx_serialization_coreEncoder
@required
- (id<HbpKotlinx_serialization_coreCompositeEncoder>)beginCollectionDescriptor:(id<HbpKotlinx_serialization_coreSerialDescriptor>)descriptor collectionSize:(int32_t)collectionSize __attribute__((swift_name("beginCollection(descriptor:collectionSize:)")));
- (id<HbpKotlinx_serialization_coreCompositeEncoder>)beginStructureDescriptor:(id<HbpKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("beginStructure(descriptor:)")));
- (void)encodeBooleanValue:(BOOL)value __attribute__((swift_name("encodeBoolean(value:)")));
- (void)encodeByteValue:(int8_t)value __attribute__((swift_name("encodeByte(value:)")));
- (void)encodeCharValue:(unichar)value __attribute__((swift_name("encodeChar(value:)")));
- (void)encodeDoubleValue:(double)value __attribute__((swift_name("encodeDouble(value:)")));
- (void)encodeEnumEnumDescriptor:(id<HbpKotlinx_serialization_coreSerialDescriptor>)enumDescriptor index:(int32_t)index __attribute__((swift_name("encodeEnum(enumDescriptor:index:)")));
- (void)encodeFloatValue:(float)value __attribute__((swift_name("encodeFloat(value:)")));
- (id<HbpKotlinx_serialization_coreEncoder>)encodeInlineDescriptor:(id<HbpKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("encodeInline(descriptor:)")));
- (void)encodeIntValue:(int32_t)value __attribute__((swift_name("encodeInt(value:)")));
- (void)encodeLongValue:(int64_t)value __attribute__((swift_name("encodeLong(value:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (void)encodeNotNullMark __attribute__((swift_name("encodeNotNullMark()")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (void)encodeNull __attribute__((swift_name("encodeNull()")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (void)encodeNullableSerializableValueSerializer:(id<HbpKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeNullableSerializableValue(serializer:value:)")));
- (void)encodeSerializableValueSerializer:(id<HbpKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeSerializableValue(serializer:value:)")));
- (void)encodeShortValue:(int16_t)value __attribute__((swift_name("encodeShort(value:)")));
- (void)encodeStringValue:(NSString *)value __attribute__((swift_name("encodeString(value:)")));
@property (readonly) HbpKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreSerialDescriptor")))
@protocol HbpKotlinx_serialization_coreSerialDescriptor
@required

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (NSArray<id<HbpKotlinAnnotation>> *)getElementAnnotationsIndex:(int32_t)index __attribute__((swift_name("getElementAnnotations(index:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id<HbpKotlinx_serialization_coreSerialDescriptor>)getElementDescriptorIndex:(int32_t)index __attribute__((swift_name("getElementDescriptor(index:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (int32_t)getElementIndexName:(NSString *)name __attribute__((swift_name("getElementIndex(name:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (NSString *)getElementNameIndex:(int32_t)index __attribute__((swift_name("getElementName(index:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (BOOL)isElementOptionalIndex:(int32_t)index __attribute__((swift_name("isElementOptional(index:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
@property (readonly) NSArray<id<HbpKotlinAnnotation>> *annotations __attribute__((swift_name("annotations")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
@property (readonly) int32_t elementsCount __attribute__((swift_name("elementsCount")));
@property (readonly) BOOL isInline __attribute__((swift_name("isInline")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
@property (readonly) BOOL isNullable __attribute__((swift_name("isNullable")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
@property (readonly) HbpKotlinx_serialization_coreSerialKind *kind __attribute__((swift_name("kind")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
@property (readonly) NSString *serialName __attribute__((swift_name("serialName")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreDecoder")))
@protocol HbpKotlinx_serialization_coreDecoder
@required
- (id<HbpKotlinx_serialization_coreCompositeDecoder>)beginStructureDescriptor:(id<HbpKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("beginStructure(descriptor:)")));
- (BOOL)decodeBoolean __attribute__((swift_name("decodeBoolean()")));
- (int8_t)decodeByte __attribute__((swift_name("decodeByte()")));
- (unichar)decodeChar __attribute__((swift_name("decodeChar()")));
- (double)decodeDouble __attribute__((swift_name("decodeDouble()")));
- (int32_t)decodeEnumEnumDescriptor:(id<HbpKotlinx_serialization_coreSerialDescriptor>)enumDescriptor __attribute__((swift_name("decodeEnum(enumDescriptor:)")));
- (float)decodeFloat __attribute__((swift_name("decodeFloat()")));
- (id<HbpKotlinx_serialization_coreDecoder>)decodeInlineDescriptor:(id<HbpKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("decodeInline(descriptor:)")));
- (int32_t)decodeInt __attribute__((swift_name("decodeInt()")));
- (int64_t)decodeLong __attribute__((swift_name("decodeLong()")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (BOOL)decodeNotNullMark __attribute__((swift_name("decodeNotNullMark()")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (HbpKotlinNothing * _Nullable)decodeNull __attribute__((swift_name("decodeNull()")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id _Nullable)decodeNullableSerializableValueDeserializer:(id<HbpKotlinx_serialization_coreDeserializationStrategy>)deserializer __attribute__((swift_name("decodeNullableSerializableValue(deserializer:)")));
- (id _Nullable)decodeSerializableValueDeserializer:(id<HbpKotlinx_serialization_coreDeserializationStrategy>)deserializer __attribute__((swift_name("decodeSerializableValue(deserializer:)")));
- (int16_t)decodeShort __attribute__((swift_name("decodeShort()")));
- (NSString *)decodeString __attribute__((swift_name("decodeString()")));
@property (readonly) HbpKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreSelectClause")))
@protocol HbpKotlinx_coroutines_coreSelectClause
@required
@property (readonly) id clauseObject __attribute__((swift_name("clauseObject")));
@property (readonly) HbpKotlinUnit *(^(^ _Nullable onCancellationConstructor)(id<HbpKotlinx_coroutines_coreSelectInstance>, id _Nullable, id _Nullable))(HbpKotlinThrowable *) __attribute__((swift_name("onCancellationConstructor")));
@property (readonly) id _Nullable (^processResFunc)(id, id _Nullable, id _Nullable) __attribute__((swift_name("processResFunc")));
@property (readonly) void (^regFunc)(id, id<HbpKotlinx_coroutines_coreSelectInstance>, id _Nullable) __attribute__((swift_name("regFunc")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreSelectClause1")))
@protocol HbpKotlinx_coroutines_coreSelectClause1 <HbpKotlinx_coroutines_coreSelectClause>
@required
@end

__attribute__((swift_name("Kotlinx_coroutines_coreDisposableHandle")))
@protocol HbpKotlinx_coroutines_coreDisposableHandle
@required
- (void)dispose __attribute__((swift_name("dispose()")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreChildHandle")))
@protocol HbpKotlinx_coroutines_coreChildHandle <HbpKotlinx_coroutines_coreDisposableHandle>
@required
- (BOOL)childCancelledCause:(HbpKotlinThrowable *)cause __attribute__((swift_name("childCancelled(cause:)")));
@property (readonly) id<HbpKotlinx_coroutines_coreJob> _Nullable parent __attribute__((swift_name("parent")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreChildJob")))
@protocol HbpKotlinx_coroutines_coreChildJob <HbpKotlinx_coroutines_coreJob>
@required
- (void)parentCancelledParentJob:(id<HbpKotlinx_coroutines_coreParentJob>)parentJob __attribute__((swift_name("parentCancelled(parentJob:)")));
@end

__attribute__((swift_name("KotlinSequence")))
@protocol HbpKotlinSequence
@required
- (id<HbpKotlinIterator>)iterator __attribute__((swift_name("iterator()")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreSelectClause0")))
@protocol HbpKotlinx_coroutines_coreSelectClause0 <HbpKotlinx_coroutines_coreSelectClause>
@required
@end

__attribute__((swift_name("KotlinCoroutineContextKey")))
@protocol HbpKotlinCoroutineContextKey
@required
@end


/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
__attribute__((swift_name("Kotlinx_serialization_coreSerializersModuleCollector")))
@protocol HbpKotlinx_serialization_coreSerializersModuleCollector
@required
- (void)contextualKClass:(id<HbpKotlinKClass>)kClass provider:(id<HbpKotlinx_serialization_coreKSerializer> (^)(NSArray<id<HbpKotlinx_serialization_coreKSerializer>> *))provider __attribute__((swift_name("contextual(kClass:provider:)")));
- (void)contextualKClass:(id<HbpKotlinKClass>)kClass serializer:(id<HbpKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("contextual(kClass:serializer:)")));
- (void)polymorphicBaseClass:(id<HbpKotlinKClass>)baseClass actualClass:(id<HbpKotlinKClass>)actualClass actualSerializer:(id<HbpKotlinx_serialization_coreKSerializer>)actualSerializer __attribute__((swift_name("polymorphic(baseClass:actualClass:actualSerializer:)")));
- (void)polymorphicDefaultBaseClass:(id<HbpKotlinKClass>)baseClass defaultDeserializerProvider:(id<HbpKotlinx_serialization_coreDeserializationStrategy> _Nullable (^)(NSString * _Nullable))defaultDeserializerProvider __attribute__((swift_name("polymorphicDefault(baseClass:defaultDeserializerProvider:)"))) __attribute__((deprecated("Deprecated in favor of function with more precise name: polymorphicDefaultDeserializer")));
- (void)polymorphicDefaultDeserializerBaseClass:(id<HbpKotlinKClass>)baseClass defaultDeserializerProvider:(id<HbpKotlinx_serialization_coreDeserializationStrategy> _Nullable (^)(NSString * _Nullable))defaultDeserializerProvider __attribute__((swift_name("polymorphicDefaultDeserializer(baseClass:defaultDeserializerProvider:)")));
- (void)polymorphicDefaultSerializerBaseClass:(id<HbpKotlinKClass>)baseClass defaultSerializerProvider:(id<HbpKotlinx_serialization_coreSerializationStrategy> _Nullable (^)(id))defaultSerializerProvider __attribute__((swift_name("polymorphicDefaultSerializer(baseClass:defaultSerializerProvider:)")));
@end

__attribute__((swift_name("KotlinKDeclarationContainer")))
@protocol HbpKotlinKDeclarationContainer
@required
@end

__attribute__((swift_name("KotlinKAnnotatedElement")))
@protocol HbpKotlinKAnnotatedElement
@required
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.1")
*/
__attribute__((swift_name("KotlinKClassifier")))
@protocol HbpKotlinKClassifier
@required
@end

__attribute__((swift_name("KotlinKClass")))
@protocol HbpKotlinKClass <HbpKotlinKDeclarationContainer, HbpKotlinKAnnotatedElement, HbpKotlinKClassifier>
@required

/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.1")
*/
- (BOOL)isInstanceValue:(id _Nullable)value __attribute__((swift_name("isInstance(value:)")));
@property (readonly) NSString * _Nullable qualifiedName __attribute__((swift_name("qualifiedName")));
@property (readonly) NSString * _Nullable simpleName __attribute__((swift_name("simpleName")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_serialization_jsonJsonElement.Companion")))
@interface HbpKotlinx_serialization_jsonJsonElementCompanion : HbpBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) HbpKotlinx_serialization_jsonJsonElementCompanion *shared __attribute__((swift_name("shared")));
- (id<HbpKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
__attribute__((swift_name("Kotlinx_serialization_jsonJsonNamingStrategy")))
@protocol HbpKotlinx_serialization_jsonJsonNamingStrategy
@required
- (NSString *)serialNameForJsonDescriptor:(id<HbpKotlinx_serialization_coreSerialDescriptor>)descriptor elementIndex:(int32_t)elementIndex serialName:(NSString *)serialName __attribute__((swift_name("serialNameForJson(descriptor:elementIndex:serialName:)")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreCompositeEncoder")))
@protocol HbpKotlinx_serialization_coreCompositeEncoder
@required
- (void)encodeBooleanElementDescriptor:(id<HbpKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(BOOL)value __attribute__((swift_name("encodeBooleanElement(descriptor:index:value:)")));
- (void)encodeByteElementDescriptor:(id<HbpKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int8_t)value __attribute__((swift_name("encodeByteElement(descriptor:index:value:)")));
- (void)encodeCharElementDescriptor:(id<HbpKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(unichar)value __attribute__((swift_name("encodeCharElement(descriptor:index:value:)")));
- (void)encodeDoubleElementDescriptor:(id<HbpKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(double)value __attribute__((swift_name("encodeDoubleElement(descriptor:index:value:)")));
- (void)encodeFloatElementDescriptor:(id<HbpKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(float)value __attribute__((swift_name("encodeFloatElement(descriptor:index:value:)")));
- (id<HbpKotlinx_serialization_coreEncoder>)encodeInlineElementDescriptor:(id<HbpKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("encodeInlineElement(descriptor:index:)")));
- (void)encodeIntElementDescriptor:(id<HbpKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int32_t)value __attribute__((swift_name("encodeIntElement(descriptor:index:value:)")));
- (void)encodeLongElementDescriptor:(id<HbpKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int64_t)value __attribute__((swift_name("encodeLongElement(descriptor:index:value:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (void)encodeNullableSerializableElementDescriptor:(id<HbpKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index serializer:(id<HbpKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeNullableSerializableElement(descriptor:index:serializer:value:)")));
- (void)encodeSerializableElementDescriptor:(id<HbpKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index serializer:(id<HbpKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeSerializableElement(descriptor:index:serializer:value:)")));
- (void)encodeShortElementDescriptor:(id<HbpKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int16_t)value __attribute__((swift_name("encodeShortElement(descriptor:index:value:)")));
- (void)encodeStringElementDescriptor:(id<HbpKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(NSString *)value __attribute__((swift_name("encodeStringElement(descriptor:index:value:)")));
- (void)endStructureDescriptor:(id<HbpKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("endStructure(descriptor:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (BOOL)shouldEncodeElementDefaultDescriptor:(id<HbpKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("shouldEncodeElementDefault(descriptor:index:)")));
@property (readonly) HbpKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end

__attribute__((swift_name("KotlinAnnotation")))
@protocol HbpKotlinAnnotation
@required
@end


/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
__attribute__((swift_name("Kotlinx_serialization_coreSerialKind")))
@interface HbpKotlinx_serialization_coreSerialKind : HbpBase
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreCompositeDecoder")))
@protocol HbpKotlinx_serialization_coreCompositeDecoder
@required
- (BOOL)decodeBooleanElementDescriptor:(id<HbpKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeBooleanElement(descriptor:index:)")));
- (int8_t)decodeByteElementDescriptor:(id<HbpKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeByteElement(descriptor:index:)")));
- (unichar)decodeCharElementDescriptor:(id<HbpKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeCharElement(descriptor:index:)")));
- (int32_t)decodeCollectionSizeDescriptor:(id<HbpKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("decodeCollectionSize(descriptor:)")));
- (double)decodeDoubleElementDescriptor:(id<HbpKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeDoubleElement(descriptor:index:)")));
- (int32_t)decodeElementIndexDescriptor:(id<HbpKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("decodeElementIndex(descriptor:)")));
- (float)decodeFloatElementDescriptor:(id<HbpKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeFloatElement(descriptor:index:)")));
- (id<HbpKotlinx_serialization_coreDecoder>)decodeInlineElementDescriptor:(id<HbpKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeInlineElement(descriptor:index:)")));
- (int32_t)decodeIntElementDescriptor:(id<HbpKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeIntElement(descriptor:index:)")));
- (int64_t)decodeLongElementDescriptor:(id<HbpKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeLongElement(descriptor:index:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id _Nullable)decodeNullableSerializableElementDescriptor:(id<HbpKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index deserializer:(id<HbpKotlinx_serialization_coreDeserializationStrategy>)deserializer previousValue:(id _Nullable)previousValue __attribute__((swift_name("decodeNullableSerializableElement(descriptor:index:deserializer:previousValue:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (BOOL)decodeSequentially __attribute__((swift_name("decodeSequentially()")));
- (id _Nullable)decodeSerializableElementDescriptor:(id<HbpKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index deserializer:(id<HbpKotlinx_serialization_coreDeserializationStrategy>)deserializer previousValue:(id _Nullable)previousValue __attribute__((swift_name("decodeSerializableElement(descriptor:index:deserializer:previousValue:)")));
- (int16_t)decodeShortElementDescriptor:(id<HbpKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeShortElement(descriptor:index:)")));
- (NSString *)decodeStringElementDescriptor:(id<HbpKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeStringElement(descriptor:index:)")));
- (void)endStructureDescriptor:(id<HbpKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("endStructure(descriptor:)")));
@property (readonly) HbpKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinNothing")))
@interface HbpKotlinNothing : HbpBase
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinUnit")))
@interface HbpKotlinUnit : HbpBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)unit __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) HbpKotlinUnit *shared __attribute__((swift_name("shared")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreSelectInstance")))
@protocol HbpKotlinx_coroutines_coreSelectInstance
@required
- (void)disposeOnCompletionDisposableHandle:(id<HbpKotlinx_coroutines_coreDisposableHandle>)disposableHandle __attribute__((swift_name("disposeOnCompletion(disposableHandle:)")));
- (void)selectInRegistrationPhaseInternalResult:(id _Nullable)internalResult __attribute__((swift_name("selectInRegistrationPhase(internalResult:)")));
- (BOOL)trySelectClauseObject:(id)clauseObject result:(id _Nullable)result __attribute__((swift_name("trySelect(clauseObject:result:)")));
@property (readonly) id<HbpKotlinCoroutineContext> context __attribute__((swift_name("context")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreParentJob")))
@protocol HbpKotlinx_coroutines_coreParentJob <HbpKotlinx_coroutines_coreJob>
@required
- (HbpKotlinCancellationException *)getChildJobCancellationCause __attribute__((swift_name("getChildJobCancellationCause()")));
@end

#pragma pop_macro("_Nullable_result")
#pragma clang diagnostic pop
NS_ASSUME_NONNULL_END
