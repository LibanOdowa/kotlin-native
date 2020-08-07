//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/src/j2objc/guava/build_result/java/com/google/common/annotations/GwtIncompatible.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComGoogleCommonAnnotationsGwtIncompatible")
#ifdef RESTRICT_ComGoogleCommonAnnotationsGwtIncompatible
#define INCLUDE_ALL_ComGoogleCommonAnnotationsGwtIncompatible 0
#else
#define INCLUDE_ALL_ComGoogleCommonAnnotationsGwtIncompatible 1
#endif
#undef RESTRICT_ComGoogleCommonAnnotationsGwtIncompatible

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (ComGoogleCommonAnnotationsGwtIncompatible_) && (INCLUDE_ALL_ComGoogleCommonAnnotationsGwtIncompatible || defined(INCLUDE_ComGoogleCommonAnnotationsGwtIncompatible))
#define ComGoogleCommonAnnotationsGwtIncompatible_

#define RESTRICT_JavaLangAnnotationAnnotation 1
#define INCLUDE_JavaLangAnnotationAnnotation 1
#include "java/lang/annotation/Annotation.h"

@class IOSClass;

/*!
 @brief The presence of this annotation on an API indicates that the method may <em>not</em> be used with
  the <a href="http://www.gwtproject.org/">Google Web Toolkit</a> (GWT).
 <p>This annotation behaves identically to <a href="http://www.gwtproject.org/javadoc/latest/com/google/gwt/core/shared/GwtIncompatible.html">
 the
  <code>@@GwtIncompatible</code> annotation in GWT itself</a>.
 @author Charles Fry
 */
@protocol ComGoogleCommonAnnotationsGwtIncompatible < JavaLangAnnotationAnnotation >

@property (readonly) NSString *value;

- (jboolean)isEqual:(id)obj;

- (NSUInteger)hash;

@end

@interface ComGoogleCommonAnnotationsGwtIncompatible : NSObject < ComGoogleCommonAnnotationsGwtIncompatible > {
 @public
  NSString *value_;
}

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonAnnotationsGwtIncompatible)

FOUNDATION_EXPORT id<ComGoogleCommonAnnotationsGwtIncompatible> create_ComGoogleCommonAnnotationsGwtIncompatible(NSString *value);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonAnnotationsGwtIncompatible)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ComGoogleCommonAnnotationsGwtIncompatible")