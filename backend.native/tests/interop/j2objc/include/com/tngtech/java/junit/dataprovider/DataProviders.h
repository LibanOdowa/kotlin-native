//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/src/j2objc/junit/build_result/java/com/tngtech/java/junit/dataprovider/DataProviders.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComTngtechJavaJunitDataproviderDataProviders")
#ifdef RESTRICT_ComTngtechJavaJunitDataproviderDataProviders
#define INCLUDE_ALL_ComTngtechJavaJunitDataproviderDataProviders 0
#else
#define INCLUDE_ALL_ComTngtechJavaJunitDataproviderDataProviders 1
#endif
#undef RESTRICT_ComTngtechJavaJunitDataproviderDataProviders

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (ComTngtechJavaJunitDataproviderDataProviders_) && (INCLUDE_ALL_ComTngtechJavaJunitDataproviderDataProviders || defined(INCLUDE_ComTngtechJavaJunitDataproviderDataProviders))
#define ComTngtechJavaJunitDataproviderDataProviders_

@class IOSClass;
@class IOSObjectArray;
@protocol JavaLangIterable;

@interface ComTngtechJavaJunitDataproviderDataProviders : NSObject

#pragma mark Public

- (instancetype __nonnull)init;

/*!
 @brief Helper method to create an <code>Object</code> array containing all the given arguments, e.g.
 @code

   <code>
  Object[] a = $("test", 4); 
  </code>
   
@endcode
 @param args which should be contained in the resulting <code>Object</code>  array
 @return an <code>Object</code> array containing all the given <code>args</code>
 - seealso: #$$
 */
+ (IOSObjectArray *)$WithNSObjectArray:(IOSObjectArray *)args;

/*!
 @brief Helper method to create an array of the given <code>Object</code> arrays, e.g.
 @code

   <code>
  // @@formatter:off
  Object[][] b = $$(
           $("",        0),
           $("test",    4),
           $("foo bar", 7),
       );
  // @@formatter:on 
  </code>
   
@endcode
 @param args which should be contained in the resulting array of <code>Object</code>  array
 @return an array of <code>Object</code> arrays containing all the given <code>args</code>
 - seealso: #$
 */
+ (IOSObjectArray *)$$WithNSObjectArray2:(IOSObjectArray *)args;

/*!
 @brief Creates a dataprovider test for each combination of elements of the two provided data providers.
 @code

   <code>
  Object[][] r = crossProduct(dataProviderMethod1, dataProviderMethod2); 
  </code>
   
@endcode
 @param rows1 of first dataprovider which should be cross producted with the second
 @param rows2 of second dataprovider which should be cross producted with the first
 @return an <code>Object</code> array array containing the cross product of the given <code>rows</code>
 */
+ (IOSObjectArray *)crossProductWithNSObjectArray2:(IOSObjectArray *)rows1
                                withNSObjectArray2:(IOSObjectArray *)rows2;

/*!
 @brief Creates a dataprovider test for each value in the given <code>Enum</code> class.
 @param enumClass for which each value is wrapped into an array of <code>Object</code>  arrays
 @return an array which contains <code>Object</code> arrays for each single value in the given <code>Enum</code>
 @throw NullPointerExceptioniif given <code>enumClass</code> is <code>null</code>
 */
+ (IOSObjectArray *)testForEachWithIOSClass:(IOSClass *)enumClass;

/*!
 @brief Creates a dataprovider test for each element in the given <code>Iterable</code>.
 @param args which are wrapped in <code>Object</code>  arrays and combined to <code>Object</code><code>[][]</code>
 @return an array which contains <code>Object</code> arrays for each single element in the given <code>Iterable</code>
 @throw NullPointerExceptioniif given <code>args</code> is <code>null</code>
 */
+ (IOSObjectArray *)testForEachWithJavaLangIterable:(id<JavaLangIterable>)args;

/*!
 @brief Creates a dataprovider test for each argument.
 @param args which are wrapped in <code>Object</code>  arrays and combined to <code>Object</code><code>[][]</code>
 @return an array which contains <code>Object</code> arrays for each single argument
 */
+ (IOSObjectArray *)testForEachWithNSObjectArray:(IOSObjectArray *)args;

@end

J2OBJC_EMPTY_STATIC_INIT(ComTngtechJavaJunitDataproviderDataProviders)

FOUNDATION_EXPORT void ComTngtechJavaJunitDataproviderDataProviders_init(ComTngtechJavaJunitDataproviderDataProviders *self);

FOUNDATION_EXPORT ComTngtechJavaJunitDataproviderDataProviders *new_ComTngtechJavaJunitDataproviderDataProviders_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ComTngtechJavaJunitDataproviderDataProviders *create_ComTngtechJavaJunitDataproviderDataProviders_init(void);

FOUNDATION_EXPORT IOSObjectArray *ComTngtechJavaJunitDataproviderDataProviders_$WithNSObjectArray_(IOSObjectArray *args);

FOUNDATION_EXPORT IOSObjectArray *ComTngtechJavaJunitDataproviderDataProviders_$$WithNSObjectArray2_(IOSObjectArray *args);

FOUNDATION_EXPORT IOSObjectArray *ComTngtechJavaJunitDataproviderDataProviders_testForEachWithNSObjectArray_(IOSObjectArray *args);

FOUNDATION_EXPORT IOSObjectArray *ComTngtechJavaJunitDataproviderDataProviders_testForEachWithJavaLangIterable_(id<JavaLangIterable> args);

FOUNDATION_EXPORT IOSObjectArray *ComTngtechJavaJunitDataproviderDataProviders_testForEachWithIOSClass_(IOSClass *enumClass);

FOUNDATION_EXPORT IOSObjectArray *ComTngtechJavaJunitDataproviderDataProviders_crossProductWithNSObjectArray2_withNSObjectArray2_(IOSObjectArray *rows1, IOSObjectArray *rows2);

J2OBJC_TYPE_LITERAL_HEADER(ComTngtechJavaJunitDataproviderDataProviders)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ComTngtechJavaJunitDataproviderDataProviders")