//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/src/j2objc/guava/android/build_result/java/com/google/common/collect/WellBehavedMap.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComGoogleCommonCollectWellBehavedMap")
#ifdef RESTRICT_ComGoogleCommonCollectWellBehavedMap
#define INCLUDE_ALL_ComGoogleCommonCollectWellBehavedMap 0
#else
#define INCLUDE_ALL_ComGoogleCommonCollectWellBehavedMap 1
#endif
#undef RESTRICT_ComGoogleCommonCollectWellBehavedMap

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (ComGoogleCommonCollectWellBehavedMap_) && (INCLUDE_ALL_ComGoogleCommonCollectWellBehavedMap || defined(INCLUDE_ComGoogleCommonCollectWellBehavedMap))
#define ComGoogleCommonCollectWellBehavedMap_

#define RESTRICT_ComGoogleCommonCollectForwardingMap 1
#define INCLUDE_ComGoogleCommonCollectForwardingMap 1
#include "com/google/common/collect/ForwardingMap.h"

@protocol JavaUtilMap;
@protocol JavaUtilSet;

/*!
 @brief Workaround for <a href="http://bugs.sun.com/bugdatabase/view_bug.do?
 bug_id=6312706">EnumMap
  bug</a>.If you want to pass an <code>EnumMap</code>, with the intention of using its <code>entrySet()</code>
  method, you should wrap the <code>EnumMap</code> in this class instead. 
 <p>This class is not thread-safe even if the underlying map is.
 @author Dimitris Andreou
 */
@interface ComGoogleCommonCollectWellBehavedMap : ComGoogleCommonCollectForwardingMap

#pragma mark Public

- (id<JavaUtilSet>)entrySet;

#pragma mark Protected

- (id<JavaUtilMap>)delegate;

#pragma mark Package-Private

/*!
 @brief Wraps the given map into a <code>WellBehavedEntriesMap</code>, which intercepts its <code>entrySet()</code>
  method by taking the <code>Set<K> keySet()</code> and transforming it to <code>Set<Entry<K, V>></code>
 .All other invocations are delegated as-is.
 */
+ (ComGoogleCommonCollectWellBehavedMap *)wrapWithJavaUtilMap:(id<JavaUtilMap> __nonnull)delegate;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)init NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectWellBehavedMap)

FOUNDATION_EXPORT ComGoogleCommonCollectWellBehavedMap *ComGoogleCommonCollectWellBehavedMap_wrapWithJavaUtilMap_(id<JavaUtilMap> delegate);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectWellBehavedMap)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ComGoogleCommonCollectWellBehavedMap")