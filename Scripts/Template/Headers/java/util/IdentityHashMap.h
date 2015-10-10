//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/util/IdentityHashMap.java
//

#ifndef _JavaUtilIdentityHashMap_H_
#define _JavaUtilIdentityHashMap_H_

#include <j2objc/J2ObjC_header.h>
#include <j2objc/java/io/Serializable.h>
#include <j2objc/java/util/AbstractCollection.h>
#include <j2objc/java/util/AbstractMap.h>
#include <j2objc/java/util/AbstractSet.h>
#include <j2objc/java/util/Iterator.h>
#include <j2objc/java/util/Map.h>
#include <j2objc/java/util/MapEntry.h>

@class IOSObjectArray;
@protocol JavaUtilCollection;
@protocol JavaUtilSet;

/*!
 @brief IdentityHashMap is a variant on HashMap which tests equality by reference
 instead of equality by value.
 Basically, keys and values are compared for
 equality by checking if their references are equal rather than by calling the
 "equals" function.
 <p>
 <b>Note: This class intentionally violates the general contract of <code>Map</code>
 's on comparing objects by their <code>equals</code> method.</b>
 <p>
 IdentityHashMap uses open addressing (linear probing in particular) for
 collision resolution. This is different from HashMap which uses Chaining.
 <p>
 Like HashMap, IdentityHashMap is not thread safe, so access by multiple
 threads must be synchronized by an external mechanism such as
 Collections.synchronizedMap.
 @since 1.4
 */
@interface JavaUtilIdentityHashMap : JavaUtilAbstractMap < JavaUtilMap, JavaIoSerializable, NSCopying > {
 @public
  IOSObjectArray *elementData_;
  jint size_;
  jint threshold_;
  jint modCount_;
}

#pragma mark Public

/*!
 @brief Creates an IdentityHashMap with default expected maximum size.
 */
- (instancetype)init;

/*!
 @brief Creates an IdentityHashMap with the specified maximum size parameter.
 @param maxSize
 The estimated maximum number of entries that will be put in
 this map.
 */
- (instancetype)initWithInt:(jint)maxSize;

/*!
 @brief Creates an IdentityHashMap using the given map as initial values.
 @param map
 A map of (key,value) pairs to copy into the IdentityHashMap.
 */
- (instancetype)initWithJavaUtilMap:(id<JavaUtilMap>)map;

/*!
 @brief Removes all elements from this map, leaving it empty.
 */
- (void)clear;

/*!
 @brief Returns a new IdentityHashMap with the same mappings and size as this
 one.
 @return a shallow copy of this IdentityHashMap.
 */
- (id)clone;

/*!
 @brief Returns whether this map contains the specified key.
 @param key
 the key to search for.
 @return <code>true</code> if this map contains the specified key,
 <code>false</code> otherwise.
 */
- (jboolean)containsKeyWithId:(id)key;

/*!
 @brief Returns whether this map contains the specified value.
 @param value
 the value to search for.
 @return <code>true</code> if this map contains the specified value,
 <code>false</code> otherwise.
 */
- (jboolean)containsValueWithId:(id)value;

/*!
 @brief Returns a set containing all of the mappings in this map.
 Each mapping is
 an instance of <code>Map.Entry</code>. As the set is backed by this map,
 changes in one will be reflected in the other.
 @return a set of the mappings.
 */
- (id<JavaUtilSet>)entrySet;

/*!
 @brief Compares this map with other objects.
 This map is equal to another map is
 it represents the same set of mappings. With this map, two mappings are
 the same if both the key and the value are equal by reference. When
 compared with a map that is not an IdentityHashMap, the equals method is
 neither necessarily symmetric (a.equals(b) implies b.equals(a)) nor
 transitive (a.equals(b) and b.equals(c) implies a.equals(c)).
 @param object
 the object to compare to.
 @return whether the argument object is equal to this object.
 */
- (jboolean)isEqual:(id)object;

/*!
 @brief Returns the value of the mapping with the specified key.
 @param key
 the key.
 @return the value of the mapping with the specified key.
 */
- (id)getWithId:(id)key;

/*!
 @brief Returns whether this IdentityHashMap has no elements.
 @return <code>true</code> if this IdentityHashMap has no elements,
 <code>false</code> otherwise.
 */
- (jboolean)isEmpty;

/*!
 @brief Returns a set of the keys contained in this map.
 The set is backed by
 this map so changes to one are reflected by the other. The set does not
 support adding.
 @return a set of the keys.
 */
- (id<JavaUtilSet>)keySet;

/*!
 @brief Maps the specified key to the specified value.
 @param key
 the key.
 @param value
 the value.
 @return the value of any previous mapping with the specified key or
 <code>null</code> if there was no such mapping.
 */
- (id)putWithId:(id)key
         withId:(id)value;

/*!
 @brief Copies all the mappings in the specified map to this map.
 These mappings
 will replace all mappings that this map had for any of the keys currently
 in the given map.
 @param map
 the map to copy mappings from.
 @throws NullPointerException
 if <code>map</code> is <code>null</code>.
 */
- (void)putAllWithJavaUtilMap:(id<JavaUtilMap>)map;

/*!
 @brief Removes the mapping with the specified key from this map.
 @param key
 the key of the mapping to remove.
 @return the value of the removed mapping, or <code>null</code> if no mapping
 for the specified key was found.
 */
- (id)removeWithId:(id)key;

/*!
 @brief Returns the number of mappings in this IdentityHashMap.
 @return the number of mappings in this IdentityHashMap.
 */
- (jint)size;

/*!
 @brief Returns a collection of the values contained in this map.
 The collection
 is backed by this map so changes to one are reflected by the other. The
 collection supports remove, removeAll, retainAll and clear operations,
 and it does not support add or addAll operations.
 <p>
 This method returns a collection which is the subclass of
 AbstractCollection. The iterator method of this subclass returns a
 "wrapper object" over the iterator of map's entrySet(). The <code>size</code>
 method wraps the map's size method and the <code>contains</code> method wraps
 the map's containsValue method.
 <p>
 The collection is created when this method is called for the first time
 and returned in response to all subsequent calls. This method may return
 different collections when multiple concurrent calls occur, since no
 synchronization is performed.
 @return a collection of the values contained in this map.
 */
- (id<JavaUtilCollection>)values;

@end

J2OBJC_STATIC_INIT(JavaUtilIdentityHashMap)

J2OBJC_FIELD_SETTER(JavaUtilIdentityHashMap, elementData_, IOSObjectArray *)

FOUNDATION_EXPORT void JavaUtilIdentityHashMap_init(JavaUtilIdentityHashMap *self);

FOUNDATION_EXPORT JavaUtilIdentityHashMap *new_JavaUtilIdentityHashMap_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void JavaUtilIdentityHashMap_initWithInt_(JavaUtilIdentityHashMap *self, jint maxSize);

FOUNDATION_EXPORT JavaUtilIdentityHashMap *new_JavaUtilIdentityHashMap_initWithInt_(jint maxSize) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void JavaUtilIdentityHashMap_initWithJavaUtilMap_(JavaUtilIdentityHashMap *self, id<JavaUtilMap> map);

FOUNDATION_EXPORT JavaUtilIdentityHashMap *new_JavaUtilIdentityHashMap_initWithJavaUtilMap_(id<JavaUtilMap> map) NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(JavaUtilIdentityHashMap)

@interface JavaUtilIdentityHashMap_IdentityHashMapEntry : JavaUtilMapEntry

#pragma mark Public

- (id)clone;

- (jboolean)isEqual:(id)object;

- (NSUInteger)hash;

- (id)setValueWithId:(id)object;

- (NSString *)description;

#pragma mark Package-Private

- (instancetype)initWithJavaUtilIdentityHashMap:(JavaUtilIdentityHashMap *)map
                                         withId:(id)theKey
                                         withId:(id)theValue;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaUtilIdentityHashMap_IdentityHashMapEntry)

FOUNDATION_EXPORT void JavaUtilIdentityHashMap_IdentityHashMapEntry_initWithJavaUtilIdentityHashMap_withId_withId_(JavaUtilIdentityHashMap_IdentityHashMapEntry *self, JavaUtilIdentityHashMap *map, id theKey, id theValue);

FOUNDATION_EXPORT JavaUtilIdentityHashMap_IdentityHashMapEntry *new_JavaUtilIdentityHashMap_IdentityHashMapEntry_initWithJavaUtilIdentityHashMap_withId_withId_(JavaUtilIdentityHashMap *map, id theKey, id theValue) NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(JavaUtilIdentityHashMap_IdentityHashMapEntry)

@interface JavaUtilIdentityHashMap_IdentityHashMapIterator : NSObject < JavaUtilIterator > {
 @public
  JavaUtilIdentityHashMap *associatedMap_;
  jint expectedModCount_;
  id<JavaUtilMapEntry_Type> type_;
  jboolean canRemove_;
}

#pragma mark Public

- (jboolean)hasNext;

- (id)next;

- (void)remove;

#pragma mark Package-Private

- (instancetype)initWithJavaUtilMapEntry_Type:(id<JavaUtilMapEntry_Type>)value
                  withJavaUtilIdentityHashMap:(JavaUtilIdentityHashMap *)hm;

- (void)checkConcurrentMod;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaUtilIdentityHashMap_IdentityHashMapIterator)

J2OBJC_FIELD_SETTER(JavaUtilIdentityHashMap_IdentityHashMapIterator, associatedMap_, JavaUtilIdentityHashMap *)
J2OBJC_FIELD_SETTER(JavaUtilIdentityHashMap_IdentityHashMapIterator, type_, id<JavaUtilMapEntry_Type>)

FOUNDATION_EXPORT void JavaUtilIdentityHashMap_IdentityHashMapIterator_initWithJavaUtilMapEntry_Type_withJavaUtilIdentityHashMap_(JavaUtilIdentityHashMap_IdentityHashMapIterator *self, id<JavaUtilMapEntry_Type> value, JavaUtilIdentityHashMap *hm);

FOUNDATION_EXPORT JavaUtilIdentityHashMap_IdentityHashMapIterator *new_JavaUtilIdentityHashMap_IdentityHashMapIterator_initWithJavaUtilMapEntry_Type_withJavaUtilIdentityHashMap_(id<JavaUtilMapEntry_Type> value, JavaUtilIdentityHashMap *hm) NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(JavaUtilIdentityHashMap_IdentityHashMapIterator)

@interface JavaUtilIdentityHashMap_IdentityHashMapEntrySet : JavaUtilAbstractSet

#pragma mark Public

- (instancetype)initWithJavaUtilIdentityHashMap:(JavaUtilIdentityHashMap *)hm;

- (void)clear;

- (jboolean)containsWithId:(id)object;

- (id<JavaUtilIterator>)iterator;

- (jboolean)removeWithId:(id)object;

- (jint)size;

#pragma mark Package-Private

- (JavaUtilIdentityHashMap *)hashMap;


@end

J2OBJC_EMPTY_STATIC_INIT(JavaUtilIdentityHashMap_IdentityHashMapEntrySet)

FOUNDATION_EXPORT void JavaUtilIdentityHashMap_IdentityHashMapEntrySet_initWithJavaUtilIdentityHashMap_(JavaUtilIdentityHashMap_IdentityHashMapEntrySet *self, JavaUtilIdentityHashMap *hm);

FOUNDATION_EXPORT JavaUtilIdentityHashMap_IdentityHashMapEntrySet *new_JavaUtilIdentityHashMap_IdentityHashMapEntrySet_initWithJavaUtilIdentityHashMap_(JavaUtilIdentityHashMap *hm) NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(JavaUtilIdentityHashMap_IdentityHashMapEntrySet)

@interface JavaUtilIdentityHashMap_KeySet : JavaUtilAbstractSet

#pragma mark Public

- (void)clear;

- (jboolean)containsWithId:(id)object;

- (id<JavaUtilIterator>)iterator;

- (jboolean)removeWithId:(id)key;

- (jint)size;

#pragma mark Package-Private

- (instancetype)initWithJavaUtilIdentityHashMap:(JavaUtilIdentityHashMap *)outer$;


@end

J2OBJC_EMPTY_STATIC_INIT(JavaUtilIdentityHashMap_KeySet)

FOUNDATION_EXPORT void JavaUtilIdentityHashMap_KeySet_initWithJavaUtilIdentityHashMap_(JavaUtilIdentityHashMap_KeySet *self, JavaUtilIdentityHashMap *outer$);

FOUNDATION_EXPORT JavaUtilIdentityHashMap_KeySet *new_JavaUtilIdentityHashMap_KeySet_initWithJavaUtilIdentityHashMap_(JavaUtilIdentityHashMap *outer$) NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(JavaUtilIdentityHashMap_KeySet)

@interface JavaUtilIdentityHashMap_ValuesCollection : JavaUtilAbstractCollection

#pragma mark Public

- (void)clear;

- (jboolean)containsWithId:(id)object;

- (id<JavaUtilIterator>)iterator;

- (jboolean)removeWithId:(id)object;

- (jint)size;

#pragma mark Package-Private

- (instancetype)initWithJavaUtilIdentityHashMap:(JavaUtilIdentityHashMap *)outer$;


@end

J2OBJC_EMPTY_STATIC_INIT(JavaUtilIdentityHashMap_ValuesCollection)

FOUNDATION_EXPORT void JavaUtilIdentityHashMap_ValuesCollection_initWithJavaUtilIdentityHashMap_(JavaUtilIdentityHashMap_ValuesCollection *self, JavaUtilIdentityHashMap *outer$);

FOUNDATION_EXPORT JavaUtilIdentityHashMap_ValuesCollection *new_JavaUtilIdentityHashMap_ValuesCollection_initWithJavaUtilIdentityHashMap_(JavaUtilIdentityHashMap *outer$) NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(JavaUtilIdentityHashMap_ValuesCollection)

#endif // _JavaUtilIdentityHashMap_H_
