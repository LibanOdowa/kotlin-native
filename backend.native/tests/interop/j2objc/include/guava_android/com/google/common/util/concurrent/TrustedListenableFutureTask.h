//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/src/j2objc/guava/android/build_result/java/com/google/common/util/concurrent/TrustedListenableFutureTask.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComGoogleCommonUtilConcurrentTrustedListenableFutureTask")
#ifdef RESTRICT_ComGoogleCommonUtilConcurrentTrustedListenableFutureTask
#define INCLUDE_ALL_ComGoogleCommonUtilConcurrentTrustedListenableFutureTask 0
#else
#define INCLUDE_ALL_ComGoogleCommonUtilConcurrentTrustedListenableFutureTask 1
#endif
#undef RESTRICT_ComGoogleCommonUtilConcurrentTrustedListenableFutureTask

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (ComGoogleCommonUtilConcurrentTrustedListenableFutureTask_) && (INCLUDE_ALL_ComGoogleCommonUtilConcurrentTrustedListenableFutureTask || defined(INCLUDE_ComGoogleCommonUtilConcurrentTrustedListenableFutureTask))
#define ComGoogleCommonUtilConcurrentTrustedListenableFutureTask_

#define RESTRICT_ComGoogleCommonUtilConcurrentAbstractFuture 1
#define INCLUDE_ComGoogleCommonUtilConcurrentAbstractFuture_TrustedFuture 1
#include "com/google/common/util/concurrent/AbstractFuture.h"

#define RESTRICT_JavaUtilConcurrentRunnableFuture 1
#define INCLUDE_JavaUtilConcurrentRunnableFuture 1
#include "java/util/concurrent/RunnableFuture.h"

@protocol ComGoogleCommonUtilConcurrentAsyncCallable;
@protocol JavaLangRunnable;
@protocol JavaUtilConcurrentCallable;

/*!
 @brief A <code>RunnableFuture</code> that also implements the <code>ListenableFuture</code> interface.
 <p>This should be used in preference to <code>ListenableFutureTask</code> when possible for
  performance reasons.
 */
@interface ComGoogleCommonUtilConcurrentTrustedListenableFutureTask : ComGoogleCommonUtilConcurrentAbstractFuture_TrustedFuture < JavaUtilConcurrentRunnableFuture >

#pragma mark Public

- (void)run;

#pragma mark Protected

- (void)afterDone;

- (NSString *)pendingToString;

#pragma mark Package-Private

- (instancetype __nonnull)initPackagePrivateWithComGoogleCommonUtilConcurrentAsyncCallable:(id<ComGoogleCommonUtilConcurrentAsyncCallable> __nonnull)callable;

- (instancetype __nonnull)initPackagePrivateWithJavaUtilConcurrentCallable:(id<JavaUtilConcurrentCallable> __nonnull)callable;

+ (ComGoogleCommonUtilConcurrentTrustedListenableFutureTask *)createWithComGoogleCommonUtilConcurrentAsyncCallable:(id<ComGoogleCommonUtilConcurrentAsyncCallable> __nonnull)callable;

+ (ComGoogleCommonUtilConcurrentTrustedListenableFutureTask *)createWithJavaUtilConcurrentCallable:(id<JavaUtilConcurrentCallable> __nonnull)callable;

/*!
 @brief Creates a <code>ListenableFutureTask</code> that will upon running, execute the given <code>Runnable</code>
 , and arrange that <code>get</code> will return the given result on successful completion.
 @param runnable the runnable task
 @param result the result to return on successful completion. If you don't need a particular      result, consider using constructions of the form: 
 <code>ListenableFuture<?> f =
      ListenableFutureTask.create(runnable, null)</code>
 */
+ (ComGoogleCommonUtilConcurrentTrustedListenableFutureTask *)createWithJavaLangRunnable:(id<JavaLangRunnable> __nonnull)runnable
                                                                                  withId:(id __nullable)result;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)init NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonUtilConcurrentTrustedListenableFutureTask)

FOUNDATION_EXPORT ComGoogleCommonUtilConcurrentTrustedListenableFutureTask *ComGoogleCommonUtilConcurrentTrustedListenableFutureTask_createWithComGoogleCommonUtilConcurrentAsyncCallable_(id<ComGoogleCommonUtilConcurrentAsyncCallable> callable);

FOUNDATION_EXPORT ComGoogleCommonUtilConcurrentTrustedListenableFutureTask *ComGoogleCommonUtilConcurrentTrustedListenableFutureTask_createWithJavaUtilConcurrentCallable_(id<JavaUtilConcurrentCallable> callable);

FOUNDATION_EXPORT ComGoogleCommonUtilConcurrentTrustedListenableFutureTask *ComGoogleCommonUtilConcurrentTrustedListenableFutureTask_createWithJavaLangRunnable_withId_(id<JavaLangRunnable> runnable, id result);

FOUNDATION_EXPORT void ComGoogleCommonUtilConcurrentTrustedListenableFutureTask_initPackagePrivateWithJavaUtilConcurrentCallable_(ComGoogleCommonUtilConcurrentTrustedListenableFutureTask *self, id<JavaUtilConcurrentCallable> callable);

FOUNDATION_EXPORT ComGoogleCommonUtilConcurrentTrustedListenableFutureTask *new_ComGoogleCommonUtilConcurrentTrustedListenableFutureTask_initPackagePrivateWithJavaUtilConcurrentCallable_(id<JavaUtilConcurrentCallable> callable) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ComGoogleCommonUtilConcurrentTrustedListenableFutureTask *create_ComGoogleCommonUtilConcurrentTrustedListenableFutureTask_initPackagePrivateWithJavaUtilConcurrentCallable_(id<JavaUtilConcurrentCallable> callable);

FOUNDATION_EXPORT void ComGoogleCommonUtilConcurrentTrustedListenableFutureTask_initPackagePrivateWithComGoogleCommonUtilConcurrentAsyncCallable_(ComGoogleCommonUtilConcurrentTrustedListenableFutureTask *self, id<ComGoogleCommonUtilConcurrentAsyncCallable> callable);

FOUNDATION_EXPORT ComGoogleCommonUtilConcurrentTrustedListenableFutureTask *new_ComGoogleCommonUtilConcurrentTrustedListenableFutureTask_initPackagePrivateWithComGoogleCommonUtilConcurrentAsyncCallable_(id<ComGoogleCommonUtilConcurrentAsyncCallable> callable) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ComGoogleCommonUtilConcurrentTrustedListenableFutureTask *create_ComGoogleCommonUtilConcurrentTrustedListenableFutureTask_initPackagePrivateWithComGoogleCommonUtilConcurrentAsyncCallable_(id<ComGoogleCommonUtilConcurrentAsyncCallable> callable);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonUtilConcurrentTrustedListenableFutureTask)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ComGoogleCommonUtilConcurrentTrustedListenableFutureTask")