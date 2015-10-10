//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/tmp/j2objc/guava/sources/com/google/common/collect/AbstractTable.java
//

#include <j2objc/J2ObjC_header.h>

#pragma push_macro("ComGoogleCommonCollectAbstractTable_INCLUDE_ALL")
#if ComGoogleCommonCollectAbstractTable_RESTRICT
#define ComGoogleCommonCollectAbstractTable_INCLUDE_ALL 0
#else
#define ComGoogleCommonCollectAbstractTable_INCLUDE_ALL 1
#endif
#undef ComGoogleCommonCollectAbstractTable_RESTRICT

#if !defined (_ComGoogleCommonCollectAbstractTable_) && (ComGoogleCommonCollectAbstractTable_INCLUDE_ALL || ComGoogleCommonCollectAbstractTable_INCLUDE)
#define _ComGoogleCommonCollectAbstractTable_

#define ComGoogleCommonCollectTable_RESTRICT 1
#define ComGoogleCommonCollectTable_INCLUDE 1
#include <j2objc/com/google/common/collect/Table.h>

@protocol JavaUtilCollection;
@protocol JavaUtilIterator;
@protocol JavaUtilSet;

@interface ComGoogleCommonCollectAbstractTable : NSObject < ComGoogleCommonCollectTable >

#pragma mark Public

- (id<JavaUtilSet>)cellSet;

- (void)clear;

- (id<JavaUtilSet>)columnKeySet;

- (jboolean)containsWithId:(id)rowKey
                    withId:(id)columnKey;

- (jboolean)containsColumnWithId:(id)columnKey;

- (jboolean)containsRowWithId:(id)rowKey;

- (jboolean)containsValueWithId:(id)value;

- (jboolean)isEqual:(id)obj;

- (id)getWithId:(id)rowKey
         withId:(id)columnKey;

- (NSUInteger)hash;

- (jboolean)isEmpty;

- (id)putWithId:(id)rowKey
         withId:(id)columnKey
         withId:(id)value;

- (void)putAllWithComGoogleCommonCollectTable:(id<ComGoogleCommonCollectTable>)table;

- (id)removeWithId:(id)rowKey
            withId:(id)columnKey;

- (id<JavaUtilSet>)rowKeySet;

- (NSString *)description;

- (id<JavaUtilCollection>)values;

#pragma mark Package-Private

- (instancetype)init;

- (id<JavaUtilIterator>)cellIterator;

- (id<JavaUtilSet>)createCellSet;

- (id<JavaUtilCollection>)createValues;

- (id<JavaUtilIterator>)valuesIterator;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectAbstractTable)

FOUNDATION_EXPORT void ComGoogleCommonCollectAbstractTable_init(ComGoogleCommonCollectAbstractTable *self);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectAbstractTable)

#endif

#if !defined (_ComGoogleCommonCollectAbstractTable_CellSet_) && (ComGoogleCommonCollectAbstractTable_INCLUDE_ALL || ComGoogleCommonCollectAbstractTable_CellSet_INCLUDE)
#define _ComGoogleCommonCollectAbstractTable_CellSet_

#define JavaUtilAbstractSet_RESTRICT 1
#define JavaUtilAbstractSet_INCLUDE 1
#include <j2objc/java/util/AbstractSet.h>

@class ComGoogleCommonCollectAbstractTable;
@protocol JavaUtilIterator;

@interface ComGoogleCommonCollectAbstractTable_CellSet : JavaUtilAbstractSet

#pragma mark Public

- (void)clear;

- (jboolean)containsWithId:(id)o;

- (id<JavaUtilIterator>)iterator;

- (jboolean)removeWithId:(id)o;

- (jint)size;

#pragma mark Package-Private

- (instancetype)initWithComGoogleCommonCollectAbstractTable:(ComGoogleCommonCollectAbstractTable *)outer$;


@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectAbstractTable_CellSet)

FOUNDATION_EXPORT void ComGoogleCommonCollectAbstractTable_CellSet_initWithComGoogleCommonCollectAbstractTable_(ComGoogleCommonCollectAbstractTable_CellSet *self, ComGoogleCommonCollectAbstractTable *outer$);

FOUNDATION_EXPORT ComGoogleCommonCollectAbstractTable_CellSet *new_ComGoogleCommonCollectAbstractTable_CellSet_initWithComGoogleCommonCollectAbstractTable_(ComGoogleCommonCollectAbstractTable *outer$) NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectAbstractTable_CellSet)

#endif

#if !defined (_ComGoogleCommonCollectAbstractTable_Values_) && (ComGoogleCommonCollectAbstractTable_INCLUDE_ALL || ComGoogleCommonCollectAbstractTable_Values_INCLUDE)
#define _ComGoogleCommonCollectAbstractTable_Values_

#define JavaUtilAbstractCollection_RESTRICT 1
#define JavaUtilAbstractCollection_INCLUDE 1
#include <j2objc/java/util/AbstractCollection.h>

@class ComGoogleCommonCollectAbstractTable;
@protocol JavaUtilIterator;

@interface ComGoogleCommonCollectAbstractTable_Values : JavaUtilAbstractCollection

#pragma mark Public

- (void)clear;

- (jboolean)containsWithId:(id)o;

- (id<JavaUtilIterator>)iterator;

- (jint)size;

#pragma mark Package-Private

- (instancetype)initWithComGoogleCommonCollectAbstractTable:(ComGoogleCommonCollectAbstractTable *)outer$;


@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectAbstractTable_Values)

FOUNDATION_EXPORT void ComGoogleCommonCollectAbstractTable_Values_initWithComGoogleCommonCollectAbstractTable_(ComGoogleCommonCollectAbstractTable_Values *self, ComGoogleCommonCollectAbstractTable *outer$);

FOUNDATION_EXPORT ComGoogleCommonCollectAbstractTable_Values *new_ComGoogleCommonCollectAbstractTable_Values_initWithComGoogleCommonCollectAbstractTable_(ComGoogleCommonCollectAbstractTable *outer$) NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectAbstractTable_Values)

#endif

#pragma pop_macro("ComGoogleCommonCollectAbstractTable_INCLUDE_ALL")
