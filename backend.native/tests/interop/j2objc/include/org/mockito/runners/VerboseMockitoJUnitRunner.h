//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/src/j2objc/testing/mockito/build_result/java/org/mockito/runners/VerboseMockitoJUnitRunner.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgMockitoRunnersVerboseMockitoJUnitRunner")
#ifdef RESTRICT_OrgMockitoRunnersVerboseMockitoJUnitRunner
#define INCLUDE_ALL_OrgMockitoRunnersVerboseMockitoJUnitRunner 0
#else
#define INCLUDE_ALL_OrgMockitoRunnersVerboseMockitoJUnitRunner 1
#endif
#undef RESTRICT_OrgMockitoRunnersVerboseMockitoJUnitRunner

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (OrgMockitoRunnersVerboseMockitoJUnitRunner_) && (INCLUDE_ALL_OrgMockitoRunnersVerboseMockitoJUnitRunner || defined(INCLUDE_OrgMockitoRunnersVerboseMockitoJUnitRunner))
#define OrgMockitoRunnersVerboseMockitoJUnitRunner_

#define RESTRICT_OrgJunitRunnerRunner 1
#define INCLUDE_OrgJunitRunnerRunner 1
#include "org/junit/runner/Runner.h"

#define RESTRICT_OrgJunitRunnerManipulationFilterable 1
#define INCLUDE_OrgJunitRunnerManipulationFilterable 1
#include "org/junit/runner/manipulation/Filterable.h"

@class IOSClass;
@class OrgJunitRunnerDescription;
@class OrgJunitRunnerManipulationFilter;
@class OrgJunitRunnerNotificationRunNotifier;
@protocol OrgMockitoInternalRunnersInternalRunner;

/*!
 */
__attribute__((deprecated))
@interface OrgMockitoRunnersVerboseMockitoJUnitRunner : OrgJunitRunnerRunner < OrgJunitRunnerManipulationFilterable >

#pragma mark Public

- (instancetype __nonnull)initWithIOSClass:(IOSClass *)klass;

- (void)filterWithOrgJunitRunnerManipulationFilter:(OrgJunitRunnerManipulationFilter *)filter;

- (OrgJunitRunnerDescription *)getDescription;

- (void)runWithOrgJunitRunnerNotificationRunNotifier:(OrgJunitRunnerNotificationRunNotifier *)notifier;

#pragma mark Package-Private

- (instancetype __nonnull)initWithOrgMockitoInternalRunnersInternalRunner:(id<OrgMockitoInternalRunnersInternalRunner>)runner;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)init NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgMockitoRunnersVerboseMockitoJUnitRunner)

FOUNDATION_EXPORT void OrgMockitoRunnersVerboseMockitoJUnitRunner_initWithIOSClass_(OrgMockitoRunnersVerboseMockitoJUnitRunner *self, IOSClass *klass);

FOUNDATION_EXPORT OrgMockitoRunnersVerboseMockitoJUnitRunner *new_OrgMockitoRunnersVerboseMockitoJUnitRunner_initWithIOSClass_(IOSClass *klass) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgMockitoRunnersVerboseMockitoJUnitRunner *create_OrgMockitoRunnersVerboseMockitoJUnitRunner_initWithIOSClass_(IOSClass *klass);

FOUNDATION_EXPORT void OrgMockitoRunnersVerboseMockitoJUnitRunner_initWithOrgMockitoInternalRunnersInternalRunner_(OrgMockitoRunnersVerboseMockitoJUnitRunner *self, id<OrgMockitoInternalRunnersInternalRunner> runner);

FOUNDATION_EXPORT OrgMockitoRunnersVerboseMockitoJUnitRunner *new_OrgMockitoRunnersVerboseMockitoJUnitRunner_initWithOrgMockitoInternalRunnersInternalRunner_(id<OrgMockitoInternalRunnersInternalRunner> runner) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgMockitoRunnersVerboseMockitoJUnitRunner *create_OrgMockitoRunnersVerboseMockitoJUnitRunner_initWithOrgMockitoInternalRunnersInternalRunner_(id<OrgMockitoInternalRunnersInternalRunner> runner);

J2OBJC_TYPE_LITERAL_HEADER(OrgMockitoRunnersVerboseMockitoJUnitRunner)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgMockitoRunnersVerboseMockitoJUnitRunner")