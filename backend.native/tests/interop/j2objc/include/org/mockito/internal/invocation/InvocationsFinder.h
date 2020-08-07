//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/src/j2objc/testing/mockito/build_result/java/org/mockito/internal/invocation/InvocationsFinder.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgMockitoInternalInvocationInvocationsFinder")
#ifdef RESTRICT_OrgMockitoInternalInvocationInvocationsFinder
#define INCLUDE_ALL_OrgMockitoInternalInvocationInvocationsFinder 0
#else
#define INCLUDE_ALL_OrgMockitoInternalInvocationInvocationsFinder 1
#endif
#undef RESTRICT_OrgMockitoInternalInvocationInvocationsFinder

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (OrgMockitoInternalInvocationInvocationsFinder_) && (INCLUDE_ALL_OrgMockitoInternalInvocationInvocationsFinder || defined(INCLUDE_OrgMockitoInternalInvocationInvocationsFinder))
#define OrgMockitoInternalInvocationInvocationsFinder_

@protocol JavaUtilList;
@protocol OrgMockitoInternalVerificationApiInOrderContext;
@protocol OrgMockitoInvocationInvocation;
@protocol OrgMockitoInvocationLocation;
@protocol OrgMockitoInvocationMatchableInvocation;

@interface OrgMockitoInternalInvocationInvocationsFinder : NSObject

#pragma mark Public

+ (id<JavaUtilList>)findAllMatchingUnverifiedChunksWithJavaUtilList:(id<JavaUtilList>)invocations
                        withOrgMockitoInvocationMatchableInvocation:(id<OrgMockitoInvocationMatchableInvocation>)wanted
                withOrgMockitoInternalVerificationApiInOrderContext:(id<OrgMockitoInternalVerificationApiInOrderContext>)orderingContext;

+ (id<OrgMockitoInvocationInvocation>)findFirstMatchingUnverifiedInvocationWithJavaUtilList:(id<JavaUtilList>)invocations
                                                withOrgMockitoInvocationMatchableInvocation:(id<OrgMockitoInvocationMatchableInvocation>)wanted
                                        withOrgMockitoInternalVerificationApiInOrderContext:(id<OrgMockitoInternalVerificationApiInOrderContext>)context;

+ (id<OrgMockitoInvocationInvocation>)findFirstUnverifiedWithJavaUtilList:(id<JavaUtilList>)invocations;

/*!
 @brief i3 is unverified here:
  i1, i2, i3
      v
  all good here:
  i1, i2, i3
      v   v
 @param context
 @param orderedInvocations
 */
+ (id<OrgMockitoInvocationInvocation>)findFirstUnverifiedInOrderWithOrgMockitoInternalVerificationApiInOrderContext:(id<OrgMockitoInternalVerificationApiInOrderContext>)context
                                                                                                   withJavaUtilList:(id<JavaUtilList>)orderedInvocations;

+ (id<JavaUtilList>)findInvocationsWithJavaUtilList:(id<JavaUtilList>)invocations
        withOrgMockitoInvocationMatchableInvocation:(id<OrgMockitoInvocationMatchableInvocation>)wanted;

/*!
 @brief some examples how it works:
  Given invocations sequence:
  1,1,2,1
  if wanted is 1 and mode is times(2) then returns
  1,1
  if wanted is 1 and mode is atLeast() then returns
  1,1,1
  if wanted is 1 and mode is times(x), where x !
 = 2 then returns
  1,1,1
 */
+ (id<JavaUtilList>)findMatchingChunkWithJavaUtilList:(id<JavaUtilList>)invocations
          withOrgMockitoInvocationMatchableInvocation:(id<OrgMockitoInvocationMatchableInvocation>)wanted
                                              withInt:(jint)wantedCount
  withOrgMockitoInternalVerificationApiInOrderContext:(id<OrgMockitoInternalVerificationApiInOrderContext>)context;

+ (id<OrgMockitoInvocationInvocation>)findPreviousVerifiedInOrderWithJavaUtilList:(id<JavaUtilList>)invocations
                              withOrgMockitoInternalVerificationApiInOrderContext:(id<OrgMockitoInternalVerificationApiInOrderContext>)context;

+ (id<OrgMockitoInvocationInvocation>)findSimilarInvocationWithJavaUtilList:(id<JavaUtilList>)invocations
                                withOrgMockitoInvocationMatchableInvocation:(id<OrgMockitoInvocationMatchableInvocation>)wanted;

+ (id<JavaUtilList>)getAllLocationsWithJavaUtilList:(id<JavaUtilList>)invocations;

+ (id<OrgMockitoInvocationLocation>)getLastLocationWithJavaUtilList:(id<JavaUtilList>)invocations;

#pragma mark Package-Private

+ (id<OrgMockitoInvocationInvocation>)findFirstUnverifiedWithJavaUtilList:(id<JavaUtilList>)invocations
                                                                   withId:(id)mock;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgMockitoInternalInvocationInvocationsFinder)

FOUNDATION_EXPORT id<JavaUtilList> OrgMockitoInternalInvocationInvocationsFinder_findInvocationsWithJavaUtilList_withOrgMockitoInvocationMatchableInvocation_(id<JavaUtilList> invocations, id<OrgMockitoInvocationMatchableInvocation> wanted);

FOUNDATION_EXPORT id<JavaUtilList> OrgMockitoInternalInvocationInvocationsFinder_findAllMatchingUnverifiedChunksWithJavaUtilList_withOrgMockitoInvocationMatchableInvocation_withOrgMockitoInternalVerificationApiInOrderContext_(id<JavaUtilList> invocations, id<OrgMockitoInvocationMatchableInvocation> wanted, id<OrgMockitoInternalVerificationApiInOrderContext> orderingContext);

FOUNDATION_EXPORT id<JavaUtilList> OrgMockitoInternalInvocationInvocationsFinder_findMatchingChunkWithJavaUtilList_withOrgMockitoInvocationMatchableInvocation_withInt_withOrgMockitoInternalVerificationApiInOrderContext_(id<JavaUtilList> invocations, id<OrgMockitoInvocationMatchableInvocation> wanted, jint wantedCount, id<OrgMockitoInternalVerificationApiInOrderContext> context);

FOUNDATION_EXPORT id<OrgMockitoInvocationInvocation> OrgMockitoInternalInvocationInvocationsFinder_findFirstMatchingUnverifiedInvocationWithJavaUtilList_withOrgMockitoInvocationMatchableInvocation_withOrgMockitoInternalVerificationApiInOrderContext_(id<JavaUtilList> invocations, id<OrgMockitoInvocationMatchableInvocation> wanted, id<OrgMockitoInternalVerificationApiInOrderContext> context);

FOUNDATION_EXPORT id<OrgMockitoInvocationInvocation> OrgMockitoInternalInvocationInvocationsFinder_findSimilarInvocationWithJavaUtilList_withOrgMockitoInvocationMatchableInvocation_(id<JavaUtilList> invocations, id<OrgMockitoInvocationMatchableInvocation> wanted);

FOUNDATION_EXPORT id<OrgMockitoInvocationInvocation> OrgMockitoInternalInvocationInvocationsFinder_findFirstUnverifiedWithJavaUtilList_(id<JavaUtilList> invocations);

FOUNDATION_EXPORT id<OrgMockitoInvocationInvocation> OrgMockitoInternalInvocationInvocationsFinder_findFirstUnverifiedWithJavaUtilList_withId_(id<JavaUtilList> invocations, id mock);

FOUNDATION_EXPORT id<OrgMockitoInvocationLocation> OrgMockitoInternalInvocationInvocationsFinder_getLastLocationWithJavaUtilList_(id<JavaUtilList> invocations);

FOUNDATION_EXPORT id<OrgMockitoInvocationInvocation> OrgMockitoInternalInvocationInvocationsFinder_findPreviousVerifiedInOrderWithJavaUtilList_withOrgMockitoInternalVerificationApiInOrderContext_(id<JavaUtilList> invocations, id<OrgMockitoInternalVerificationApiInOrderContext> context);

FOUNDATION_EXPORT id<JavaUtilList> OrgMockitoInternalInvocationInvocationsFinder_getAllLocationsWithJavaUtilList_(id<JavaUtilList> invocations);

FOUNDATION_EXPORT id<OrgMockitoInvocationInvocation> OrgMockitoInternalInvocationInvocationsFinder_findFirstUnverifiedInOrderWithOrgMockitoInternalVerificationApiInOrderContext_withJavaUtilList_(id<OrgMockitoInternalVerificationApiInOrderContext> context, id<JavaUtilList> orderedInvocations);

J2OBJC_TYPE_LITERAL_HEADER(OrgMockitoInternalInvocationInvocationsFinder)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgMockitoInternalInvocationInvocationsFinder")