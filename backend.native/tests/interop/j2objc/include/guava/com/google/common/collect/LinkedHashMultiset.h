//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/src/j2objc/guava/build_result/java/com/google/common/collect/LinkedHashMultiset.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComGoogleCommonCollectLinkedHashMultiset")
#ifdef RESTRICT_ComGoogleCommonCollectLinkedHashMultiset
#define INCLUDE_ALL_ComGoogleCommonCollectLinkedHashMultiset 0
#else
#define INCLUDE_ALL_ComGoogleCommonCollectLinkedHashMultiset 1
#endif
#undef RESTRICT_ComGoogleCommonCollectLinkedHashMultiset

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (ComGoogleCommonCollectLinkedHashMultiset_) && (INCLUDE_ALL_ComGoogleCommonCollectLinkedHashMultiset || defined(INCLUDE_ComGoogleCommonCollectLinkedHashMultiset))
#define ComGoogleCommonCollectLinkedHashMultiset_

#define RESTRICT_ComGoogleCommonCollectAbstractMapBasedMultiset 1
#define INCLUDE_ComGoogleCommonCollectAbstractMapBasedMultiset 1
#include "com/google/common/collect/AbstractMapBasedMultiset.h"

@protocol JavaLangIterable;
@protocol JavaUtilMap;

/*!
 @brief A <code>Multiset</code> implementation with predictable iteration order.Its iterator orders elements
  according to when the first occurrence of the element was added.
 When the multiset contains
  multiple instances of an element, those instances are consecutive in the iteration order. If all
  occurrences of an element are removed, after which that element is added to the multiset, the
  element will appear at the end of the iteration. 
 <p>See the Guava User Guide article on <a href="https://github.com/google/guava/wiki/NewCollectionTypesExplained#multiset">
  <code>Multiset</code>
 </a>.
 @author Kevin Bourrillion
 @author Jared Levy
 @since 2.0
 */
@interface ComGoogleCommonCollectLinkedHashMultiset : ComGoogleCommonCollectAbstractMapBasedMultiset

#pragma mark Public

/*!
 @brief Creates a new, empty <code>LinkedHashMultiset</code> using the default initial capacity.
 */
+ (ComGoogleCommonCollectLinkedHashMultiset *)create;

/*!
 @brief Creates a new, empty <code>LinkedHashMultiset</code> with the specified expected number of distinct
  elements.
 @param distinctElements the expected number of distinct elements
 @throw IllegalArgumentExceptionif <code>distinctElements</code> is negative
 */
+ (ComGoogleCommonCollectLinkedHashMultiset *)createWithInt:(jint)distinctElements;

/*!
 @brief Creates a new <code>LinkedHashMultiset</code> containing the specified elements.
 <p>This implementation is highly efficient when <code>elements</code> is itself a <code>Multiset</code>.
 @param elements the elements that the multiset should contain
 */
+ (ComGoogleCommonCollectLinkedHashMultiset *)createWithJavaLangIterable:(id<JavaLangIterable>)elements;

#pragma mark Package-Private

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)initPackagePrivateWithJavaUtilMap:(id<JavaUtilMap>)arg0 NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectLinkedHashMultiset)

FOUNDATION_EXPORT ComGoogleCommonCollectLinkedHashMultiset *ComGoogleCommonCollectLinkedHashMultiset_create(void);

FOUNDATION_EXPORT ComGoogleCommonCollectLinkedHashMultiset *ComGoogleCommonCollectLinkedHashMultiset_createWithInt_(jint distinctElements);

FOUNDATION_EXPORT ComGoogleCommonCollectLinkedHashMultiset *ComGoogleCommonCollectLinkedHashMultiset_createWithJavaLangIterable_(id<JavaLangIterable> elements);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectLinkedHashMultiset)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ComGoogleCommonCollectLinkedHashMultiset")