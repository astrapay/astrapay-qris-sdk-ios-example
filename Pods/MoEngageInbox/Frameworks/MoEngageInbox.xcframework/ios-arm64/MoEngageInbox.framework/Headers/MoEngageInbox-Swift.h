#if 0
#elif defined(__arm64__) && __arm64__
// Generated by Apple Swift version 5.9.2 (swiftlang-5.9.2.2.56 clang-1500.1.0.2.5)
#ifndef MOENGAGEINBOX_SWIFT_H
#define MOENGAGEINBOX_SWIFT_H
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
#if defined(__OBJC__)
#include <Foundation/Foundation.h>
#endif
#if defined(__cplusplus)
#include <cstdint>
#include <cstddef>
#include <cstdbool>
#include <cstring>
#include <stdlib.h>
#include <new>
#include <type_traits>
#else
#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>
#include <string.h>
#endif
#if defined(__cplusplus)
#if defined(__arm64e__) && __has_include(<ptrauth.h>)
# include <ptrauth.h>
#else
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wreserved-macro-identifier"
# ifndef __ptrauth_swift_value_witness_function_pointer
#  define __ptrauth_swift_value_witness_function_pointer(x)
# endif
# ifndef __ptrauth_swift_class_method_pointer
#  define __ptrauth_swift_class_method_pointer(x)
# endif
#pragma clang diagnostic pop
#endif
#endif

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
#if !defined(SWIFT_RUNTIME_NAME)
# if __has_attribute(objc_runtime_name)
#  define SWIFT_RUNTIME_NAME(X) __attribute__((objc_runtime_name(X)))
# else
#  define SWIFT_RUNTIME_NAME(X) 
# endif
#endif
#if !defined(SWIFT_COMPILE_NAME)
# if __has_attribute(swift_name)
#  define SWIFT_COMPILE_NAME(X) __attribute__((swift_name(X)))
# else
#  define SWIFT_COMPILE_NAME(X) 
# endif
#endif
#if !defined(SWIFT_METHOD_FAMILY)
# if __has_attribute(objc_method_family)
#  define SWIFT_METHOD_FAMILY(X) __attribute__((objc_method_family(X)))
# else
#  define SWIFT_METHOD_FAMILY(X) 
# endif
#endif
#if !defined(SWIFT_NOESCAPE)
# if __has_attribute(noescape)
#  define SWIFT_NOESCAPE __attribute__((noescape))
# else
#  define SWIFT_NOESCAPE 
# endif
#endif
#if !defined(SWIFT_RELEASES_ARGUMENT)
# if __has_attribute(ns_consumed)
#  define SWIFT_RELEASES_ARGUMENT __attribute__((ns_consumed))
# else
#  define SWIFT_RELEASES_ARGUMENT 
# endif
#endif
#if !defined(SWIFT_WARN_UNUSED_RESULT)
# if __has_attribute(warn_unused_result)
#  define SWIFT_WARN_UNUSED_RESULT __attribute__((warn_unused_result))
# else
#  define SWIFT_WARN_UNUSED_RESULT 
# endif
#endif
#if !defined(SWIFT_NORETURN)
# if __has_attribute(noreturn)
#  define SWIFT_NORETURN __attribute__((noreturn))
# else
#  define SWIFT_NORETURN 
# endif
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
#if !defined(SWIFT_RESILIENT_CLASS)
# if __has_attribute(objc_class_stub)
#  define SWIFT_RESILIENT_CLASS(SWIFT_NAME) SWIFT_CLASS(SWIFT_NAME) __attribute__((objc_class_stub))
#  define SWIFT_RESILIENT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_class_stub)) SWIFT_CLASS_NAMED(SWIFT_NAME)
# else
#  define SWIFT_RESILIENT_CLASS(SWIFT_NAME) SWIFT_CLASS(SWIFT_NAME)
#  define SWIFT_RESILIENT_CLASS_NAMED(SWIFT_NAME) SWIFT_CLASS_NAMED(SWIFT_NAME)
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
# if __has_attribute(enum_extensibility)
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
#if !defined(SWIFT_WEAK_IMPORT)
# define SWIFT_WEAK_IMPORT __attribute__((weak_import))
#endif
#if !defined(SWIFT_DEPRECATED)
# define SWIFT_DEPRECATED __attribute__((deprecated))
#endif
#if !defined(SWIFT_DEPRECATED_MSG)
# define SWIFT_DEPRECATED_MSG(...) __attribute__((deprecated(__VA_ARGS__)))
#endif
#if !defined(SWIFT_DEPRECATED_OBJC)
# if __has_feature(attribute_diagnose_if_objc)
#  define SWIFT_DEPRECATED_OBJC(Msg) __attribute__((diagnose_if(1, Msg, "warning")))
# else
#  define SWIFT_DEPRECATED_OBJC(Msg) SWIFT_DEPRECATED_MSG(Msg)
# endif
#endif
#if defined(__OBJC__)
#if !defined(IBSegueAction)
# define IBSegueAction 
#endif
#endif
#if !defined(SWIFT_EXTERN)
# if defined(__cplusplus)
#  define SWIFT_EXTERN extern "C"
# else
#  define SWIFT_EXTERN extern
# endif
#endif
#if !defined(SWIFT_CALL)
# define SWIFT_CALL __attribute__((swiftcall))
#endif
#if !defined(SWIFT_INDIRECT_RESULT)
# define SWIFT_INDIRECT_RESULT __attribute__((swift_indirect_result))
#endif
#if !defined(SWIFT_CONTEXT)
# define SWIFT_CONTEXT __attribute__((swift_context))
#endif
#if !defined(SWIFT_ERROR_RESULT)
# define SWIFT_ERROR_RESULT __attribute__((swift_error_result))
#endif
#if defined(__cplusplus)
# define SWIFT_NOEXCEPT noexcept
#else
# define SWIFT_NOEXCEPT 
#endif
#if !defined(SWIFT_C_INLINE_THUNK)
# if __has_attribute(always_inline)
# if __has_attribute(nodebug)
#  define SWIFT_C_INLINE_THUNK inline __attribute__((always_inline)) __attribute__((nodebug))
# else
#  define SWIFT_C_INLINE_THUNK inline __attribute__((always_inline))
# endif
# else
#  define SWIFT_C_INLINE_THUNK inline
# endif
#endif
#if defined(_WIN32)
#if !defined(SWIFT_IMPORT_STDLIB_SYMBOL)
# define SWIFT_IMPORT_STDLIB_SYMBOL __declspec(dllimport)
#endif
#else
#if !defined(SWIFT_IMPORT_STDLIB_SYMBOL)
# define SWIFT_IMPORT_STDLIB_SYMBOL 
#endif
#endif
#if defined(__OBJC__)
#if __has_feature(objc_modules)
#if __has_warning("-Watimport-in-framework-header")
#pragma clang diagnostic ignored "-Watimport-in-framework-header"
#endif
@import Foundation;
@import ObjectiveC;
@import UIKit;
#endif

#endif
#pragma clang diagnostic ignored "-Wproperty-attribute-mismatch"
#pragma clang diagnostic ignored "-Wduplicate-method-arg"
#if __has_warning("-Wpragma-clang-attribute")
# pragma clang diagnostic ignored "-Wpragma-clang-attribute"
#endif
#pragma clang diagnostic ignored "-Wunknown-pragmas"
#pragma clang diagnostic ignored "-Wnullability"
#pragma clang diagnostic ignored "-Wdollar-in-identifier-extension"

#if __has_attribute(external_source_symbol)
# pragma push_macro("any")
# undef any
# pragma clang attribute push(__attribute__((external_source_symbol(language="Swift", defined_in="MoEngageInbox",generated_declaration))), apply_to=any(function,enum,objc_interface,objc_category,objc_protocol))
# pragma pop_macro("any")
#endif

#if defined(__OBJC__)
@class NSString;
@class NSDate;
@class NSCoder;

/// Inbox Message model
SWIFT_CLASS("_TtC13MoEngageInbox18MoEngageInboxEntry")
@interface MoEngageInboxEntry : NSObject <NSCoding>
/// MoEngage Account Identifier
@property (nonatomic, readonly, copy) NSString * _Nonnull appID;
/// Unique campaign Identifier
@property (nonatomic, copy) NSString * _Nullable campaignID;
/// Entire notification payload
@property (nonatomic, copy) NSDictionary<NSString *, id> * _Nonnull notificationPayloadDict;
/// Dict which contains  additional key-value for when Navigate To Screen action is performed.
@property (nonatomic, copy) NSDictionary<NSString *, id> * _Nonnull screenDataDict;
/// Custom moengage dict in notification payload
@property (nonatomic, copy) NSDictionary<NSString *, id> * _Nonnull moengageDict;
/// Notification title
@property (nonatomic, readonly, copy) NSString * _Nonnull notificationTitle;
/// Notification subtitle
@property (nonatomic, readonly, copy) NSString * _Nonnull notificationSubTitle;
/// Notification body
@property (nonatomic, copy) NSString * _Nonnull notificationBody;
/// Notification sound
@property (nonatomic, readonly, copy) NSString * _Nullable notificationSound;
/// Media url of the basic notification
@property (nonatomic, readonly, copy) NSString * _Nullable notificationMediaURL;
/// TimeStamp when notification is received by the device
@property (nonatomic, readonly, copy) NSDate * _Nullable receivedDate;
/// TimeStamp when notification is clicked by the user
@property (nonatomic, readonly, copy) NSDate * _Nullable clickedDate;
/// Inbox expiry date post which message will be removed from inbox. By defauly its 30 days
@property (nonatomic, copy) NSDate * _Nullable inboxExpiryDate;
/// If the action is Navigate to Screen, then <code>screenName</code> indicates the value.
@property (nonatomic, readonly, copy) NSString * _Nullable screenName;
/// If the action is DeepLink, the <code>deepLinkURL</code> indicates the url
@property (nonatomic, readonly, copy) NSString * _Nullable deepLinkURL;
/// If the action is RichLanding, then <code>richLandingURL</code> indicates the value.
@property (nonatomic, readonly, copy) NSString * _Nullable richLandingURL;
/// If the action is Coupon Code, then <code>couponCode</code> indicates the value.
@property (nonatomic, readonly, copy) NSString * _Nullable couponCode;
/// Value indicates if the inbox message is clicked by the user.
@property (nonatomic, readonly) BOOL isRead;
/// :nodoc:
- (void)encodeWithCoder:(NSCoder * _Nonnull)aCoder;
/// :nodoc:
- (nonnull instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end

@class UIColor;
@class UIFont;

/// Model to set up the navigation bar when pushing the Inbox ViewController
SWIFT_CLASS("_TtC13MoEngageInbox31MoEngageInboxNavigationBarStyle")
@interface MoEngageInboxNavigationBarStyle : NSObject
/// The tint color to be  applied to the navigationBar background.
@property (nonatomic, strong) UIColor * _Nullable navigationBarColor;
/// The tint color to  be applied to the navigation items and bar button items.
@property (nonatomic, strong) UIColor * _Nullable navigationBarTintColor;
/// Text color for navigationBar title
@property (nonatomic, strong) UIColor * _Nullable navigationBarTitleColor;
/// Font for the navigationBar title
@property (nonatomic, strong) UIFont * _Nullable navigationBarTitleFont;
/// A Boolean value that indicates whether the navigation bar is translucent. Default value is false
@property (nonatomic) BOOL navigationBarTransluscent;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end

@class MoEngageAccountMeta;

/// An interface for processing Inbox sync actions
SWIFT_PROTOCOL("_TtP13MoEngageInbox27MoEngageInboxStatusDelegate_")
@protocol MoEngageInboxStatusDelegate
@optional
/// Callback received when inbox sync is completed
/// \param accountMeta MoEngageAccount information
///
- (void)inboxSyncedSuccessfullyWithAccountMeta:(MoEngageAccountMeta * _Nonnull)accountMeta;
@end


/// Model that handles Inbox UI
SWIFT_CLASS("_TtC13MoEngageInbox28MoEngageInboxUIConfiguration")
@interface MoEngageInboxUIConfiguration : NSObject
/// Set the navigation bar title.
@property (nonatomic, copy) NSString * _Nonnull navigationBarTitle;
/// Set the style for navigation bar
@property (nonatomic, strong) MoEngageInboxNavigationBarStyle * _Nullable navigationBarStyle;
/// Pass true to reload inbox on pull to refresh
@property (nonatomic) BOOL enablePullToRefresh;
/// UIColor to be applied for UIRefreshControl. Default value is #525252
@property (nonatomic, strong) UIColor * _Nonnull pullToRefreshTintColor;
/// Background color for Inbox ViewController. Default value is #E5E5E5
@property (nonatomic, strong) UIColor * _Nonnull inboxViewControllerBGColor;
/// Background color for Inbox TableView. Default value is #E5E5E5
@property (nonatomic, strong) UIColor * _Nonnull inboxTableViewBGColor;
/// Background Color for Inbox Cell.Default value is #EEEEEE
@property (nonatomic, strong) UIColor * _Nonnull cellDefaultBackgroundColor;
/// Background Color for unread inbox message. Default value is white
@property (nonatomic, strong) UIColor * _Nonnull cellUnreadBackgroundColor;
/// Cell background color when inbox message is clicked. Default value is #111111
@property (nonatomic, strong) UIColor * _Nonnull cellSelectionTintColor;
/// Text color for title in inbox cell. Default value is #424242.
@property (nonatomic, strong) UIColor * _Nonnull cellHeaderLabelTextColor;
/// Text color for message in inbox cell. Default value is #616161.
@property (nonatomic, strong) UIColor * _Nonnull cellMessageLabelTextColor;
/// Text color for date in inbox cell.Default value is #9E9E9E.
@property (nonatomic, strong) UIColor * _Nonnull cellTimestampLabelTextColor;
/// Font for title in inbox cell. Default font is Bold with size 17.0
@property (nonatomic, strong) UIFont * _Nonnull cellHeaderLabelFont;
/// Font for message in inbox cell. Default font is Regular with size 14.0
@property (nonatomic, strong) UIFont * _Nonnull cellMessageLabelFont;
/// Font for timestamp in inbox cell. Default font is Regular with size 14.0
@property (nonatomic, strong) UIFont * _Nonnull cellTimestampLabelFont;
/// TimeStamp format for the date displayed in Inbox ViewController. Default is “dd-MMM”.
@property (nonatomic, copy) NSString * _Nonnull timestampDateFormat;
/// Text  displayed on Inbox ViewController when its empty
@property (nonatomic, copy) NSString * _Nonnull emptyInboxText;
/// Text color for the message displayed when inbox is empty. Default color is #414141
@property (nonatomic, strong) UIColor * _Nonnull emptyInboxTextColor;
/// Font for the message displayed when inbox is empty. Default font is Regular with size 17.0
@property (nonatomic, strong) UIFont * _Nonnull emptyInboxTextFont;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end

@class NSBundle;

/// :nodoc:
SWIFT_CLASS("_TtC13MoEngageInbox27MoEngageInboxViewController")
@interface MoEngageInboxViewController : UIViewController
- (void)viewDidLoad;
- (nonnull instancetype)initWithNibName:(NSString * _Nullable)nibNameOrNil bundle:(NSBundle * _Nullable)nibBundleOrNil OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)coder OBJC_DESIGNATED_INITIALIZER;
@end


@class UITableView;
@class NSIndexPath;
@class UITableViewCell;

@interface MoEngageInboxViewController (SWIFT_EXTENSION(MoEngageInbox)) <UITableViewDataSource, UITableViewDelegate>
- (NSInteger)numberOfSectionsInTableView:(UITableView * _Nonnull)tableView SWIFT_WARN_UNUSED_RESULT;
- (NSInteger)tableView:(UITableView * _Nonnull)tableView numberOfRowsInSection:(NSInteger)section SWIFT_WARN_UNUSED_RESULT;
- (UITableViewCell * _Nonnull)tableView:(UITableView * _Nonnull)tableView cellForRowAtIndexPath:(NSIndexPath * _Nonnull)indexPath SWIFT_WARN_UNUSED_RESULT;
- (void)tableView:(UITableView * _Nonnull)tableView didHighlightRowAtIndexPath:(NSIndexPath * _Nonnull)indexPath;
- (void)tableView:(UITableView * _Nonnull)tableView didUnhighlightRowAtIndexPath:(NSIndexPath * _Nonnull)indexPath;
- (void)tableView:(UITableView * _Nonnull)tableView didSelectRowAtIndexPath:(NSIndexPath * _Nonnull)indexPath;
- (BOOL)tableView:(UITableView * _Nonnull)tableView canEditRowAtIndexPath:(NSIndexPath * _Nonnull)indexPath SWIFT_WARN_UNUSED_RESULT;
- (void)tableView:(UITableView * _Nonnull)tableView commitEditingStyle:(UITableViewCellEditingStyle)editingStyle forRowAtIndexPath:(NSIndexPath * _Nonnull)indexPath;
@end


/// Inbox View Protocol
SWIFT_PROTOCOL("_TtP13MoEngageInbox35MoEngageInboxViewControllerDelegate_")
@protocol MoEngageInboxViewControllerDelegate
@optional
/// Callback received when <code>MoEngageInboxViewController</code> is dismissed
- (void)inboxViewControllerDismissed;
/// Callback received when inbox item is deleted from <code>MoEngageInboxViewController</code>
/// \param inboxItem Inbox item model
///
- (void)inboxEntryDeleted:(MoEngageInboxEntry * _Nonnull)inboxItem;
/// Callback received when inbox item is clicked from <code>MoEngageInboxViewController</code>
/// \param inboxItem Inbox item model
///
- (void)inboxEntryClicked:(MoEngageInboxEntry * _Nonnull)inboxItem;
@end

@class UINavigationController;

/// Class to configure the Inbox
SWIFT_CLASS("_TtC13MoEngageInbox16MoEngageSDKInbox")
@interface MoEngageSDKInbox : NSObject
/// Singleton instance
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, strong) MoEngageSDKInbox * _Nonnull sharedInstance;)
+ (MoEngageSDKInbox * _Nonnull)sharedInstance SWIFT_WARN_UNUSED_RESULT;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
/// Fetch inbox messages.
/// \param appID MoEngage Account Identifier.
///
/// \param completionBlock completion block with inbox messages and account information.
///
- (void)getInboxMessagesForAppID:(NSString * _Nullable)appID withCompletionBlock:(void (^ _Nonnull)(NSArray<MoEngageInboxEntry *> * _Nonnull, MoEngageAccountMeta * _Nullable))completionBlock;
/// Fetch inbox message count
/// \param appID MoEngage Account Identifier.
///
/// \param completionBlock completion block with inbox message account and account information.
///
- (void)getAllNotificationCountForAppID:(NSString * _Nullable)appID withCompletionBlock:(void (^ _Nonnull)(NSInteger, MoEngageAccountMeta * _Nullable))completionBlock;
/// Fetch unread inbox message count.
/// \param appID MoEngage Account Identifier.
///
/// \param completionBlock completion block with unread message count and account information.
///
- (void)getUnreadNotificationCountForAppID:(NSString * _Nullable)appID withCompletionBlock:(void (^ _Nonnull)(NSInteger, MoEngageAccountMeta * _Nullable))completionBlock;
/// Perform the action associated with Inbox message
/// \param cid campaign Identifier of the inbox message
///
/// \param appID MoEngage Account Identifier.
///
- (void)processInboxNotificationWithCampaignID:(NSString * _Nonnull)cid forAppID:(NSString * _Nullable)appID;
/// Mark the inbox message as Clicked and Read.
/// \param cid campaign Identifier of the inbox message
///
/// \param appID MoEngage Account Identifier.
///
/// \param completionHandler completion block with Bool value indicating the status of update.
///
- (void)markInboxNotificationClickedWithCampaignID:(NSString * _Nonnull)cid forAppID:(NSString * _Nullable)appID completionHandler:(void (^ _Nullable)(BOOL))completionHandler;
/// Track Inbox clicked event
/// \param cid campaign Identifier of the inbox message
///
/// \param appID MoEngage Account Identifier.
///
- (void)trackInboxClickWithCampaignID:(NSString * _Nonnull)cid forAppID:(NSString * _Nullable)appID;
/// Remove inbox message based on Campaign id
/// \param cid Campaign Identifier of the inbox message
///
/// \param appID MoEngage Account Identifier.
///
/// \param completionHandler Completion block with Bool value indicating the status of update.
///
- (void)removeInboxMessageWithCampaignID:(NSString * _Nonnull)cid forAppID:(NSString * _Nullable)appID completionHandler:(void (^ _Nullable)(BOOL))completionHandler;
/// Remove all inbox messages
/// \param appID MoEngage Account Identifier.
///
/// \param completionHandler Completion block with Bool value indicating the status of update.
///
- (void)removeInboxMessagesForAppID:(NSString * _Nullable)appID completionHandler:(void (^ _Nullable)(BOOL))completionHandler;
/// Present InboxController
/// \param uiConfig instance of <code>MoEngageInboxUIConfiguration</code> which contains inbox UI information.
///
/// \param appID MoEngage Account Identifier.
///
- (void)presentInboxViewControllerWithUIConfiguration:(MoEngageInboxUIConfiguration * _Nullable)uiConfig withInboxWithControllerDelegate:(id <MoEngageInboxViewControllerDelegate> _Nullable)delegate forAppID:(NSString * _Nullable)appID;
/// Push InboxController
/// \param navController UINavigationController to push the inbox controller
///
/// \param uiConfig instance of <code>MoEngageInboxUIConfiguration</code> which contains inbox UI information
///
/// \param appID MoEngage Account Identifier.
///
- (void)pushInboxViewControllerToNavigationController:(UINavigationController * _Nonnull)navController withUIConfiguration:(MoEngageInboxUIConfiguration * _Nullable)uiConfig withInboxWithControllerDelegate:(id <MoEngageInboxViewControllerDelegate> _Nullable)delegate forAppID:(NSString * _Nullable)appID;
/// Fetch the <code>MoEngageInboxViewController</code>
/// \param uiConfig instance of <code>MoEngageInboxUIConfiguration</code> which contains inbox UI information
///
/// \param delegate instance that confirms to <code>MoEngageInboxViewControllerDelegate</code> protocol.
///
/// \param appID MoEngage Account Identifier.
///
/// \param completionBlock completion block with <code>MoEngageInboxViewController</code> instance.
///
- (void)getInboxViewControllerWithUIConfiguration:(MoEngageInboxUIConfiguration * _Nullable)uiConfig withInboxWithControllerDelegate:(id <MoEngageInboxViewControllerDelegate> _Nullable)delegate forAppID:(NSString * _Nullable)appID withCompletionBlock:(void (^ _Nonnull)(MoEngageInboxViewController * _Nullable))completionBlock;
/// Set the inbox delegate to receive the callback on actions performed on <code>MoEngageInboxViewController</code>
/// \param delegate Instance that confirms to <code>MoEngageInboxStatusDelegate</code> protocol.
///
/// \param appID MoEngage Account Identifier.
///
- (void)setInboxDelegateWithDelegate:(id <MoEngageInboxStatusDelegate> _Nonnull)delegate forAppID:(NSString * _Nullable)appID;
@end

#endif
#if __has_attribute(external_source_symbol)
# pragma clang attribute pop
#endif
#if defined(__cplusplus)
#endif
#pragma clang diagnostic pop
#endif

#else
#error unsupported Swift architecture
#endif