// Generated by Apple Swift version 4.2.1 effective-4.1.50 (swiftlang-1000.11.42 clang-1000.11.45.1)
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wgcc-compat"

#if !defined(__has_include)
# define __has_include(x) 0
#endif
#if !defined(__has_attribute)
# define __has_attribute(x) 0
#endif
#if !defined(__has_feature)
# define __has_feature(x) 0
#endif
#if !defined(__has_warning)
# define __has_warning(x) 0
#endif

#if __has_include(<swift/objc-prologue.h>)
# include <swift/objc-prologue.h>
#endif

#pragma clang diagnostic ignored "-Wauto-import"
#include <objc/NSObject.h>
#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>

#if !defined(SWIFT_TYPEDEFS)
# define SWIFT_TYPEDEFS 1
# if __has_include(<uchar.h>)
#  include <uchar.h>
# elif !defined(__cplusplus)
typedef uint_least16_t char16_t;
typedef uint_least32_t char32_t;
# endif
typedef float swift_float2  __attribute__((__ext_vector_type__(2)));
typedef float swift_float3  __attribute__((__ext_vector_type__(3)));
typedef float swift_float4  __attribute__((__ext_vector_type__(4)));
typedef double swift_double2  __attribute__((__ext_vector_type__(2)));
typedef double swift_double3  __attribute__((__ext_vector_type__(3)));
typedef double swift_double4  __attribute__((__ext_vector_type__(4)));
typedef int swift_int2  __attribute__((__ext_vector_type__(2)));
typedef int swift_int3  __attribute__((__ext_vector_type__(3)));
typedef int swift_int4  __attribute__((__ext_vector_type__(4)));
typedef unsigned int swift_uint2  __attribute__((__ext_vector_type__(2)));
typedef unsigned int swift_uint3  __attribute__((__ext_vector_type__(3)));
typedef unsigned int swift_uint4  __attribute__((__ext_vector_type__(4)));
#endif

#if !defined(SWIFT_PASTE)
# define SWIFT_PASTE_HELPER(x, y) x##y
# define SWIFT_PASTE(x, y) SWIFT_PASTE_HELPER(x, y)
#endif
#if !defined(SWIFT_METATYPE)
# define SWIFT_METATYPE(X) Class
#endif
#if !defined(SWIFT_CLASS_PROPERTY)
# if __has_feature(objc_class_property)
#  define SWIFT_CLASS_PROPERTY(...) __VA_ARGS__
# else
#  define SWIFT_CLASS_PROPERTY(...)
# endif
#endif

#if __has_attribute(objc_runtime_name)
# define SWIFT_RUNTIME_NAME(X) __attribute__((objc_runtime_name(X)))
#else
# define SWIFT_RUNTIME_NAME(X)
#endif
#if __has_attribute(swift_name)
# define SWIFT_COMPILE_NAME(X) __attribute__((swift_name(X)))
#else
# define SWIFT_COMPILE_NAME(X)
#endif
#if __has_attribute(objc_method_family)
# define SWIFT_METHOD_FAMILY(X) __attribute__((objc_method_family(X)))
#else
# define SWIFT_METHOD_FAMILY(X)
#endif
#if __has_attribute(noescape)
# define SWIFT_NOESCAPE __attribute__((noescape))
#else
# define SWIFT_NOESCAPE
#endif
#if __has_attribute(warn_unused_result)
# define SWIFT_WARN_UNUSED_RESULT __attribute__((warn_unused_result))
#else
# define SWIFT_WARN_UNUSED_RESULT
#endif
#if __has_attribute(noreturn)
# define SWIFT_NORETURN __attribute__((noreturn))
#else
# define SWIFT_NORETURN
#endif
#if !defined(SWIFT_CLASS_EXTRA)
# define SWIFT_CLASS_EXTRA
#endif
#if !defined(SWIFT_PROTOCOL_EXTRA)
# define SWIFT_PROTOCOL_EXTRA
#endif
#if !defined(SWIFT_ENUM_EXTRA)
# define SWIFT_ENUM_EXTRA
#endif
#if !defined(SWIFT_CLASS)
# if __has_attribute(objc_subclassing_restricted)
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# else
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# endif
#endif

#if !defined(SWIFT_PROTOCOL)
# define SWIFT_PROTOCOL(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
# define SWIFT_PROTOCOL_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
#endif

#if !defined(SWIFT_EXTENSION)
# define SWIFT_EXTENSION(M) SWIFT_PASTE(M##_Swift_, __LINE__)
#endif

#if !defined(OBJC_DESIGNATED_INITIALIZER)
# if __has_attribute(objc_designated_initializer)
#  define OBJC_DESIGNATED_INITIALIZER __attribute__((objc_designated_initializer))
# else
#  define OBJC_DESIGNATED_INITIALIZER
# endif
#endif
#if !defined(SWIFT_ENUM_ATTR)
# if defined(__has_attribute) && __has_attribute(enum_extensibility)
#  define SWIFT_ENUM_ATTR(_extensibility) __attribute__((enum_extensibility(_extensibility)))
# else
#  define SWIFT_ENUM_ATTR(_extensibility)
# endif
#endif
#if !defined(SWIFT_ENUM)
# define SWIFT_ENUM(_type, _name, _extensibility) enum _name : _type _name; enum SWIFT_ENUM_ATTR(_extensibility) SWIFT_ENUM_EXTRA _name : _type
# if __has_feature(generalized_swift_name)
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME, _extensibility) enum _name : _type _name SWIFT_COMPILE_NAME(SWIFT_NAME); enum SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_ENUM_ATTR(_extensibility) SWIFT_ENUM_EXTRA _name : _type
# else
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME, _extensibility) SWIFT_ENUM(_type, _name, _extensibility)
# endif
#endif
#if !defined(SWIFT_UNAVAILABLE)
# define SWIFT_UNAVAILABLE __attribute__((unavailable))
#endif
#if !defined(SWIFT_UNAVAILABLE_MSG)
# define SWIFT_UNAVAILABLE_MSG(msg) __attribute__((unavailable(msg)))
#endif
#if !defined(SWIFT_AVAILABILITY)
# define SWIFT_AVAILABILITY(plat, ...) __attribute__((availability(plat, __VA_ARGS__)))
#endif
#if !defined(SWIFT_DEPRECATED)
# define SWIFT_DEPRECATED __attribute__((deprecated))
#endif
#if !defined(SWIFT_DEPRECATED_MSG)
# define SWIFT_DEPRECATED_MSG(...) __attribute__((deprecated(__VA_ARGS__)))
#endif
#if __has_feature(attribute_diagnose_if_objc)
# define SWIFT_DEPRECATED_OBJC(Msg) __attribute__((diagnose_if(1, Msg, "warning")))
#else
# define SWIFT_DEPRECATED_OBJC(Msg) SWIFT_DEPRECATED_MSG(Msg)
#endif
#if __has_feature(modules)
@import Foundation;
@import ObjectiveC;
@import QuartzCore;
@import RealmSwift;
@import UIKit;
#endif

#pragma clang diagnostic ignored "-Wproperty-attribute-mismatch"
#pragma clang diagnostic ignored "-Wduplicate-method-arg"
#if __has_warning("-Wpragma-clang-attribute")
# pragma clang diagnostic ignored "-Wpragma-clang-attribute"
#endif
#pragma clang diagnostic ignored "-Wunknown-pragmas"
#pragma clang diagnostic ignored "-Wnullability"

#if __has_attribute(external_source_symbol)
# pragma push_macro("any")
# undef any
# pragma clang attribute push(__attribute__((external_source_symbol(language="Swift", defined_in="QLiEERMobileOrderSDK",generated_declaration))), apply_to=any(function,enum,objc_interface,objc_category,objc_protocol))
# pragma pop_macro("any")
#endif



@class NSCoder;
@class NSBundle;

SWIFT_CLASS("_TtC20QLiEERMobileOrderSDK12CAPSPageMenu")
@interface CAPSPageMenu : UIViewController
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)initWithNibName:(NSString * _Nullable)nibNameOrNil bundle:(NSBundle * _Nullable)nibBundleOrNil SWIFT_UNAVAILABLE;
@end


@interface CAPSPageMenu (SWIFT_EXTENSION(QLiEERMobileOrderSDK)) <UIGestureRecognizerDelegate>
@end



@class UIScrollView;

@interface CAPSPageMenu (SWIFT_EXTENSION(QLiEERMobileOrderSDK)) <UIScrollViewDelegate>
- (void)scrollViewDidScroll:(UIScrollView * _Nonnull)scrollView;
- (void)scrollViewDidEndDecelerating:(UIScrollView * _Nonnull)scrollView;
@end


@interface CAPSPageMenu (SWIFT_EXTENSION(QLiEERMobileOrderSDK))
- (void)viewDidLayoutSubviews;
@end


SWIFT_PROTOCOL("_TtP20QLiEERMobileOrderSDK20CAPSPageMenuDelegate_")
@protocol CAPSPageMenuDelegate
@optional
- (void)willMoveToPage:(UIViewController * _Nonnull)controller index:(NSInteger)index;
- (void)didMoveToPage:(UIViewController * _Nonnull)controller index:(NSInteger)index;
@end

typedef SWIFT_ENUM(NSInteger, Environment, closed) {
  EnvironmentStage = 0,
  EnvironmentProduction = 1,
  EnvironmentDev = 2,
};







typedef SWIFT_ENUM(NSInteger, OrderSortType, closed) {
  OrderSortTypeCreateTime = 0,
  OrderSortTypeReservationTime = 1,
};

typedef SWIFT_ENUM(NSInteger, PushType, closed) {
  PushTypeQlieer = 0,
  PushTypeInline = 1,
};

@protocol QLiEERMobileSDKDelegate;

SWIFT_CLASS("_TtC20QLiEERMobileOrderSDK15QLiEERMobileSDK")
@interface QLiEERMobileSDK : NSObject
/// 目前的未讀訂單數量
SWIFT_CLASS_PROPERTY(@property (nonatomic, class) NSInteger unreadCount;)
+ (NSInteger)unreadCount SWIFT_WARN_UNUSED_RESULT;
+ (void)setUnreadCount:(NSInteger)value;
/// 設定SDK運行伺服器
/// 測試時請代入 Stage
+ (void)setWithEnvironment:(enum Environment)environment;
+ (void)start;
+ (void)stop;
/// 檢查目前token是否有效
/// true: 有效，不必傳access token直接開啟行動點餐頁面
/// false: 無效，開啟行動點餐時需帶有效的access token
///
/// returns:
/// token是否有效
+ (BOOL)checkTokenIsValid SWIFT_WARN_UNUSED_RESULT;
+ (void)launchMobileViewControllerWithAccessToken:(NSString * _Nullable)accessToken deviceToken:(NSString * _Nonnull)deviceToken pushType:(enum PushType)pushType withCancelBtn:(BOOL)withCancelBtn orderSortType:(enum OrderSortType)orderSortType mobileSDKDelegate:(id <QLiEERMobileSDKDelegate> _Nonnull)mobileSDKDelegate completion:(void (^ _Nonnull)(NSInteger, UIViewController * _Nullable))completion;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end

@class UIView;

SWIFT_PROTOCOL("_TtP20QLiEERMobileOrderSDK23QLiEERMobileSDKDelegate_")
@protocol QLiEERMobileSDKDelegate <NSObject>
/// 訂單狀態是否可改變callback
/// \param orderID 訂單ID
///
/// \param inAction 訂單狀態
///
/// \param sourceView 觸發的button
///
/// \param callback 是否可更改狀態(true/false)
///
- (void)orderWillChangeWithOrderID:(NSString * _Nonnull)orderID inAction:(NSInteger)inAction sourceView:(UIView * _Nonnull)sourceView callback:(SWIFT_NOESCAPE void (^ _Nonnull)(BOOL))callback;
/// 訂單狀態是否可封存callback
/// \param orderId 訂單ID
///
/// \param sourceView 觸發的button
///
/// \param callback 是否可更改狀態(true/false)
///
- (void)orderWillArchiveWithOrderId:(NSString * _Nonnull)orderId sourceView:(UIView * _Nonnull)sourceView callback:(SWIFT_NOESCAPE void (^ _Nonnull)(BOOL))callback;
/// 未讀數更新
/// \param latestNumber 最新未讀數
///
- (void)unreadCountUpdatedWithLatestNumber:(NSInteger)latestNumber;
/// 通知token失效，使用者須重新塞入正確的token重啟頁面
- (void)tokenInvalid;
@end











#if __has_attribute(external_source_symbol)
# pragma clang attribute pop
#endif
#pragma clang diagnostic pop
