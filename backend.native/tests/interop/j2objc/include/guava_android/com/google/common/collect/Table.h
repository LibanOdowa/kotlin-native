//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/src/j2objc/guava/android/build_result/java/com/google/common/collect/Table.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComGoogleCommonCollectTable")
#ifdef RESTRICT_ComGoogleCommonCollectTable
#define INCLUDE_ALL_ComGoogleCommonCollectTable 0
#else
#define INCLUDE_ALL_ComGoogleCommonCollectTable 1
#endif
#undef RESTRICT_ComGoogleCommonCollectTable

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (ComGoogleCommonCollectTable_) && (INCLUDE_ALL_ComGoogleCommonCollectTable || defined(INCLUDE_ComGoogleCommonCollectTable))
#define ComGoogleCommonCollectTable_

@protocol JavaUtilCollection;
@protocol JavaUtilMap;
@protocol JavaUtilSet;

/*!
 @brief A collection that associates an ordered pair of keys, called a row key and a column key, with a
  single value.A table may be sparse, with only a small fraction of row key / column key pairs
  possessing a corresponding value.
 <p>The mappings corresponding to a given row key may be viewed as a <code>Map</code> whose keys are
  the columns. The reverse is also available, associating a column with a row key / value map. Note
  that, in some implementations, data access by column key may have fewer supported operations or
  worse performance than data access by row key. 
 <p>The methods returning collections or maps always return views of the underlying table.
  Updating the table can change the contents of those collections, and updating the collections
  will change the table. 
 <p>All methods that modify the table are optional, and the views returned by the table may or may
  not be modifiable. When modification isn't supported, those methods will throw an <code>UnsupportedOperationException</code>
 .
  
 <p>See the Guava User Guide article on <a href="https://github.com/google/guava/wiki/NewCollectionTypesExplained#table">
  <code>Table</code></a>.
 @author Jared Levy
 @since 7.0
 */
@protocol ComGoogleCommonCollectTable < JavaObject >

/*!
 @brief Returns <code>true</code> if the table contains a mapping with the specified row and column keys.
 @param rowKey key of row to search for
 @param columnKey key of column to search for
 */
- (jboolean)containsWithId:(id __nullable)rowKey
                    withId:(id __nullable)columnKey;

/*!
 @brief Returns <code>true</code> if the table contains a mapping with the specified row key.
 @param rowKey key of row to search for
 */
- (jboolean)containsRowWithId:(id __nullable)rowKey;

/*!
 @brief Returns <code>true</code> if the table contains a mapping with the specified column.
 @param columnKey key of column to search for
 */
- (jboolean)containsColumnWithId:(id __nullable)columnKey;

/*!
 @brief Returns <code>true</code> if the table contains a mapping with the specified value.
 @param value value to search for
 */
- (jboolean)containsValueWithId:(id __nullable)value;

/*!
 @brief Returns the value corresponding to the given row and column keys, or <code>null</code> if no such
  mapping exists.
 @param rowKey key of row to search for
 @param columnKey key of column to search for
 */
- (id)getWithId:(id __nullable)rowKey
         withId:(id __nullable)columnKey;

/*!
 @brief Returns <code>true</code> if the table contains no mappings.
 */
- (jboolean)isEmpty;

/*!
 @brief Returns the number of row key / column key / value mappings in the table.
 */
- (jint)size;

/*!
 @brief Compares the specified object with this table for equality.Two tables are equal when their
  cell views, as returned by <code>cellSet</code>, are equal.
 */
- (jboolean)isEqual:(id __nullable)obj;

/*!
 @brief Returns the hash code for this table.The hash code of a table is defined as the hash code of
  its cell view, as returned by <code>cellSet</code>.
 */
- (NSUInteger)hash;

/*!
 @brief Removes all mappings from the table.
 */
- (void)clear;

/*!
 @brief Associates the specified value with the specified keys.If the table already contained a
  mapping for those keys, the old value is replaced with the specified value.
 @param rowKey row key that the value should be associated with
 @param columnKey column key that the value should be associated with
 @param value value to be associated with the specified keys
 @return the value previously associated with the keys, or <code>null</code> if no mapping existed
      for the keys
 */
- (id __nullable)putWithId:(id __nonnull)rowKey
                    withId:(id __nonnull)columnKey
                    withId:(id __nonnull)value;

/*!
 @brief Copies all mappings from the specified table to this table.The effect is equivalent to calling 
 <code>put</code> with each row key / column key / value mapping in <code>table</code>.
 @param table the table to add to this table
 */
- (void)putAllWithComGoogleCommonCollectTable:(id<ComGoogleCommonCollectTable> __nonnull)table;

/*!
 @brief Removes the mapping, if any, associated with the given keys.
 @param rowKey row key of mapping to be removed
 @param columnKey column key of mapping to be removed
 @return the value previously associated with the keys, or <code>null</code> if no such value existed
 */
- (id __nullable)removeWithId:(id __nullable)rowKey
                       withId:(id __nullable)columnKey;

/*!
 @brief Returns a view of all mappings that have the given row key.For each row key / column key /
  value mapping in the table with that row key, the returned map associates the column key with
  the value.
 If no mappings in the table have the provided row key, an empty map is returned. 
 <p>Changes to the returned map will update the underlying table, and vice versa.
 @param rowKey key of row to search for in the table
 @return the corresponding map from column keys to values
 */
- (id<JavaUtilMap>)rowWithId:(id __nonnull)rowKey;

/*!
 @brief Returns a view of all mappings that have the given column key.For each row key / column key /
  value mapping in the table with that column key, the returned map associates the row key with
  the value.
 If no mappings in the table have the provided column key, an empty map is returned. 
 <p>Changes to the returned map will update the underlying table, and vice versa.
 @param columnKey key of column to search for in the table
 @return the corresponding map from row keys to values
 */
- (id<JavaUtilMap>)columnWithId:(id __nonnull)columnKey;

/*!
 @brief Returns a set of all row key / column key / value triplets.Changes to the returned set will
  update the underlying table, and vice versa.
 The cell set does not support the <code>add</code> or 
 <code>addAll</code> methods.
 @return set of table cells consisting of row key / column key / value triplets
 */
- (id<JavaUtilSet>)cellSet;

/*!
 @brief Returns a set of row keys that have one or more values in the table.Changes to the set will
  update the underlying table, and vice versa.
 @return set of row keys
 */
- (id<JavaUtilSet>)rowKeySet;

/*!
 @brief Returns a set of column keys that have one or more values in the table.Changes to the set will
  update the underlying table, and vice versa.
 @return set of column keys
 */
- (id<JavaUtilSet>)columnKeySet;

/*!
 @brief Returns a collection of all values, which may contain duplicates.Changes to the returned
  collection will update the underlying table, and vice versa.
 @return collection of values
 */
- (id<JavaUtilCollection>)values;

/*!
 @brief Returns a view that associates each row key with the corresponding map from column keys to
  values.Changes to the returned map will update this table.
 The returned map does not support 
 <code>put()</code> or <code>putAll()</code>, or <code>setValue()</code> on its entries. 
 <p>In contrast, the maps returned by <code>rowMap().get()</code> have the same behavior as those
  returned by <code>row</code>. Those maps may support <code>setValue()</code>, <code>put()</code>, and <code>putAll()</code>
 .
 @return a map view from each row key to a secondary map from column keys to values
 */
- (id<JavaUtilMap>)rowMap;

/*!
 @brief Returns a view that associates each column key with the corresponding map from row keys to
  values.Changes to the returned map will update this table.
 The returned map does not support 
 <code>put()</code> or <code>putAll()</code>, or <code>setValue()</code> on its entries. 
 <p>In contrast, the maps returned by <code>columnMap().get()</code> have the same behavior as those
  returned by <code>column</code>. Those maps may support <code>setValue()</code>, <code>put()</code>, and 
 <code>putAll()</code>.
 @return a map view from each column key to a secondary map from row keys to values
 */
- (id<JavaUtilMap>)columnMap;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectTable)

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectTable)

#endif

#if !defined (ComGoogleCommonCollectTable_Cell_) && (INCLUDE_ALL_ComGoogleCommonCollectTable || defined(INCLUDE_ComGoogleCommonCollectTable_Cell))
#define ComGoogleCommonCollectTable_Cell_

/*!
 @brief Row key / column key / value triplet corresponding to a mapping in a table.
 @since 7.0
 */
@protocol ComGoogleCommonCollectTable_Cell < JavaObject >

/*!
 @brief Returns the row key of this cell.
 */
- (id __nullable)getRowKey;

/*!
 @brief Returns the column key of this cell.
 */
- (id __nullable)getColumnKey;

/*!
 @brief Returns the value of this cell.
 */
- (id __nullable)getValue;

/*!
 @brief Compares the specified object with this cell for equality.Two cells are equal when they have
  equal row keys, column keys, and values.
 */
- (jboolean)isEqual:(id __nullable)obj;

/*!
 @brief Returns the hash code of this cell.
 <p>The hash code of a table cell is equal to <code>Objects.hashCode</code><code>(e.getRowKey(),
  e.getColumnKey(), e.getValue())</code>
 .
 */
- (NSUInteger)hash;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectTable_Cell)

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectTable_Cell)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ComGoogleCommonCollectTable")