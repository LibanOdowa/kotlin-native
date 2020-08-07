//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/src/j2objc/testing/mockito/build_result/java/org/mockito/internal/util/reflection/Fields.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgMockitoInternalUtilReflectionFields")
#ifdef RESTRICT_OrgMockitoInternalUtilReflectionFields
#define INCLUDE_ALL_OrgMockitoInternalUtilReflectionFields 0
#else
#define INCLUDE_ALL_OrgMockitoInternalUtilReflectionFields 1
#endif
#undef RESTRICT_OrgMockitoInternalUtilReflectionFields

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (OrgMockitoInternalUtilReflectionFields_) && (INCLUDE_ALL_OrgMockitoInternalUtilReflectionFields || defined(INCLUDE_OrgMockitoInternalUtilReflectionFields))
#define OrgMockitoInternalUtilReflectionFields_

@class IOSObjectArray;
@class OrgMockitoInternalUtilReflectionFields_InstanceFields;
@protocol OrgMockitoInternalUtilCollectionsListUtil_Filter;

/*!
 @brief Small fluent reflection tools to work with fields.
 Code is very new and might need rework.
 */
@interface OrgMockitoInternalUtilReflectionFields : NSObject

#pragma mark Public

- (instancetype __nonnull)init;

/*!
 @brief Instance fields declared in the class and superclasses of the given instance.
 @param instance Instance from which declared fields will be retrieved.
 @return InstanceFields of this object instance.
 */
+ (OrgMockitoInternalUtilReflectionFields_InstanceFields *)allDeclaredFieldsOfWithId:(id)instance;

/*!
 @brief Accept fields annotated by the given annotations.
 @param annotations Annotation types to check.
 @return The filter.
 */
+ (id<OrgMockitoInternalUtilCollectionsListUtil_Filter>)annotatedByWithIOSClassArray:(IOSObjectArray *)annotations;

/*!
 @brief Instance fields declared in the class of the given instance.
 @param instance Instance from which declared fields will be retrieved.
 @return InstanceFields of this object instance.
 */
+ (OrgMockitoInternalUtilReflectionFields_InstanceFields *)declaredFieldsOfWithId:(id)instance;

/*!
 @brief Accept fields with non null value.
 @return The filter.
 */
+ (id<OrgMockitoInternalUtilCollectionsListUtil_Filter>)syntheticField;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgMockitoInternalUtilReflectionFields)

FOUNDATION_EXPORT void OrgMockitoInternalUtilReflectionFields_init(OrgMockitoInternalUtilReflectionFields *self);

FOUNDATION_EXPORT OrgMockitoInternalUtilReflectionFields_InstanceFields *OrgMockitoInternalUtilReflectionFields_allDeclaredFieldsOfWithId_(id instance);

FOUNDATION_EXPORT OrgMockitoInternalUtilReflectionFields_InstanceFields *OrgMockitoInternalUtilReflectionFields_declaredFieldsOfWithId_(id instance);

FOUNDATION_EXPORT id<OrgMockitoInternalUtilCollectionsListUtil_Filter> OrgMockitoInternalUtilReflectionFields_annotatedByWithIOSClassArray_(IOSObjectArray *annotations);

FOUNDATION_EXPORT id<OrgMockitoInternalUtilCollectionsListUtil_Filter> OrgMockitoInternalUtilReflectionFields_syntheticField(void);

J2OBJC_TYPE_LITERAL_HEADER(OrgMockitoInternalUtilReflectionFields)

#endif

#if !defined (OrgMockitoInternalUtilReflectionFields_InstanceFields_) && (INCLUDE_ALL_OrgMockitoInternalUtilReflectionFields || defined(INCLUDE_OrgMockitoInternalUtilReflectionFields_InstanceFields))
#define OrgMockitoInternalUtilReflectionFields_InstanceFields_

@protocol JavaUtilList;
@protocol OrgMockitoInternalUtilCollectionsListUtil_Filter;

@interface OrgMockitoInternalUtilReflectionFields_InstanceFields : NSObject

#pragma mark Public

- (instancetype __nonnull)initWithId:(id)instance
                    withJavaUtilList:(id<JavaUtilList>)instanceFields;

- (id<JavaUtilList>)assignedValues;

- (OrgMockitoInternalUtilReflectionFields_InstanceFields *)filterWithOrgMockitoInternalUtilCollectionsListUtil_Filter:(id<OrgMockitoInternalUtilCollectionsListUtil_Filter>)withFilter;

- (id<JavaUtilList>)instanceFields;

- (id<JavaUtilList>)names;

- (OrgMockitoInternalUtilReflectionFields_InstanceFields *)notNull;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)init NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgMockitoInternalUtilReflectionFields_InstanceFields)

FOUNDATION_EXPORT void OrgMockitoInternalUtilReflectionFields_InstanceFields_initWithId_withJavaUtilList_(OrgMockitoInternalUtilReflectionFields_InstanceFields *self, id instance, id<JavaUtilList> instanceFields);

FOUNDATION_EXPORT OrgMockitoInternalUtilReflectionFields_InstanceFields *new_OrgMockitoInternalUtilReflectionFields_InstanceFields_initWithId_withJavaUtilList_(id instance, id<JavaUtilList> instanceFields) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgMockitoInternalUtilReflectionFields_InstanceFields *create_OrgMockitoInternalUtilReflectionFields_InstanceFields_initWithId_withJavaUtilList_(id instance, id<JavaUtilList> instanceFields);

J2OBJC_TYPE_LITERAL_HEADER(OrgMockitoInternalUtilReflectionFields_InstanceFields)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgMockitoInternalUtilReflectionFields")