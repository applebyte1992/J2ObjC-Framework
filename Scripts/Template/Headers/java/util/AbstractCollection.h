//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/util/AbstractCollection.java
//

#ifndef _JavaUtilAbstractCollection_H_
#define _JavaUtilAbstractCollection_H_

#include <j2objc/J2ObjC_header.h>
#include <j2objc/java/util/Collection.h>

@class IOSObjectArray;
@protocol JavaUtilIterator;

/*!
 @brief Class <code>AbstractCollection</code> is an abstract implementation of the <code>Collection</code>
  interface.
 A subclass must implement the abstract methods <code>iterator()</code>
  and <code>size()</code> to create an immutable collection. To create a
 modifiable collection it's necessary to override the <code>add()</code> method that
 currently throws an <code>UnsupportedOperationException</code>.
 @since 1.2
 */
@interface JavaUtilAbstractCollection : NSObject < JavaUtilCollection >

#pragma mark Public

- (jboolean)addWithId:(id)object;

/*!
 @brief Attempts to add all of the objects contained in <code>collection</code>
 to the contents of this <code>Collection</code> (optional).
 This implementation
 iterates over the given <code>Collection</code> and calls <code>add</code> for each
 element. If any of these calls return <code>true</code>, then <code>true</code> is
 returned as result of this method call, <code>false</code> otherwise. If this
 <code>Collection</code> does not support adding elements, an <code>UnsupportedOperationException</code>
  is thrown.
 <p>
 If the passed <code>Collection</code> is changed during the process of adding elements
 to this <code>Collection</code>, the behavior depends on the behavior of the passed
 <code>Collection</code>.
 @param collection
 the collection of objects.
 @return <code>true</code> if this <code>Collection</code> is modified, <code>false</code>
 otherwise.
 @throws UnsupportedOperationException
 if adding to this <code>Collection</code> is not supported.
 @throws ClassCastException
 if the class of an object is inappropriate for this
 <code>Collection</code>.
 @throws IllegalArgumentException
 if an object cannot be added to this <code>Collection</code>.
 @throws NullPointerException
 if <code>collection</code> is <code>null</code>, or if it contains
 <code>null</code> elements and this <code>Collection</code> does not support
 such elements.
 */
- (jboolean)addAllWithJavaUtilCollection:(id<JavaUtilCollection>)collection;

/*!
 @brief Removes all elements from this <code>Collection</code>, leaving it empty (optional).
 This implementation iterates over this <code>Collection</code> and calls the <code>remove</code>
  method on each element. If the iterator does not support removal
 of elements, an <code>UnsupportedOperationException</code> is thrown.
 <p>
 Concrete implementations usually can clear a <code>Collection</code> more efficiently
 and should therefore overwrite this method.
 @throws UnsupportedOperationException
 it the iterator does not support removing elements from
 this <code>Collection</code>
 */
- (void)clear;

/*!
 @brief Tests whether this <code>Collection</code> contains the specified object.
 This
 implementation iterates over this <code>Collection</code> and tests, whether any
 element is equal to the given object. If <code>object != null</code> then
 <code>object.equals(e)</code> is called for each element <code>e</code> returned by
 the iterator until the element is found. If <code>object == null</code> then
 each element <code>e</code> returned by the iterator is compared with the test
 <code>e == null</code>.
 @param object
 the object to search for.
 @return <code>true</code> if object is an element of this <code>Collection</code>, <code>false</code>
  otherwise.
 @throws ClassCastException
 if the object to look for isn't of the correct type.
 @throws NullPointerException
 if the object to look for is <code>null</code> and this
 <code>Collection</code> doesn't support <code>null</code> elements.
 */
- (jboolean)containsWithId:(id)object;

/*!
 @brief Tests whether this <code>Collection</code> contains all objects contained in the
 specified <code>Collection</code>.
 This implementation iterates over the specified
 <code>Collection</code>. If one element returned by the iterator is not contained in
 this <code>Collection</code>, then <code>false</code> is returned; <code>true</code> otherwise.
 @param collection
 the collection of objects.
 @return <code>true</code> if all objects in the specified <code>Collection</code> are
 elements of this <code>Collection</code>, <code>false</code> otherwise.
 @throws ClassCastException
 if one or more elements of <code>collection</code> isn't of the
 correct type.
 @throws NullPointerException
 if <code>collection</code> contains at least one <code>null</code>
 element and this <code>Collection</code> doesn't support <code>null</code>
 elements.
 @throws NullPointerException
 if <code>collection</code> is <code>null</code>.
 */
- (jboolean)containsAllWithJavaUtilCollection:(id<JavaUtilCollection>)collection;

/*!
 @brief Returns if this <code>Collection</code> contains no elements.
 This implementation
 tests, whether <code>size</code> returns 0.
 @return <code>true</code> if this <code>Collection</code> has no elements, <code>false</code>
 otherwise.
 */
- (jboolean)isEmpty;

/*!
 @brief Returns an instance of <code>Iterator</code> that may be used to access the
 objects contained by this <code>Collection</code>.
 The order in which the elements are
 returned by the <code>Iterator</code> is not defined unless the instance of the
 <code>Collection</code> has a defined order.  In that case, the elements are returned in that order.
 <p>
 In this class this method is declared abstract and has to be implemented
 by concrete <code>Collection</code> implementations.
 @return an iterator for accessing the <code>Collection</code> contents.
 */
- (id<JavaUtilIterator>)iterator;

/*!
 @brief Removes one instance of the specified object from this <code>Collection</code> if one
 is contained (optional).
 This implementation iterates over this
 <code>Collection</code> and tests for each element <code>e</code> returned by the iterator,
 whether <code>e</code> is equal to the given object. If <code>object != null</code>
 then this test is performed using <code>object.equals(e)</code>, otherwise
 using <code>object == null</code>. If an element equal to the given object is
 found, then the <code>remove</code> method is called on the iterator and
 <code>true</code> is returned, <code>false</code> otherwise. If the iterator does
 not support removing elements, an <code>UnsupportedOperationException</code>
 is thrown.
 @param object
 the object to remove.
 @return <code>true</code> if this <code>Collection</code> is modified, <code>false</code>
 otherwise.
 @throws UnsupportedOperationException
 if removing from this <code>Collection</code> is not supported.
 @throws ClassCastException
 if the object passed is not of the correct type.
 @throws NullPointerException
 if <code>object</code> is <code>null</code> and this <code>Collection</code>
 doesn't support <code>null</code> elements.
 */
- (jboolean)removeWithId:(id)object;

/*!
 @brief Removes all occurrences in this <code>Collection</code> of each object in the
 specified <code>Collection</code> (optional).
 After this method returns none of the
 elements in the passed <code>Collection</code> can be found in this <code>Collection</code>
 anymore.
 <p>
 This implementation iterates over this <code>Collection</code> and tests for each
 element <code>e</code> returned by the iterator, whether it is contained in
 the specified <code>Collection</code>. If this test is positive, then the <code>remove</code>
  method is called on the iterator. If the iterator does not
 support removing elements, an <code>UnsupportedOperationException</code> is
 thrown.
 @param collection
 the collection of objects to remove.
 @return <code>true</code> if this <code>Collection</code> is modified, <code>false</code>
 otherwise.
 @throws UnsupportedOperationException
 if removing from this <code>Collection</code> is not supported.
 @throws ClassCastException
 if one or more elements of <code>collection</code> isn't of the
 correct type.
 @throws NullPointerException
 if <code>collection</code> contains at least one <code>null</code>
 element and this <code>Collection</code> doesn't support <code>null</code>
 elements.
 @throws NullPointerException
 if <code>collection</code> is <code>null</code>.
 */
- (jboolean)removeAllWithJavaUtilCollection:(id<JavaUtilCollection>)collection;

/*!
 @brief Removes all objects from this <code>Collection</code> that are not also found in the
 <code>Collection</code> passed (optional).
 After this method returns this <code>Collection</code>
 will only contain elements that also can be found in the <code>Collection</code>
 passed to this method.
 <p>
 This implementation iterates over this <code>Collection</code> and tests for each
 element <code>e</code> returned by the iterator, whether it is contained in
 the specified <code>Collection</code>. If this test is negative, then the <code>remove</code>
  method is called on the iterator. If the iterator does not
 support removing elements, an <code>UnsupportedOperationException</code> is
 thrown.
 @param collection
 the collection of objects to retain.
 @return <code>true</code> if this <code>Collection</code> is modified, <code>false</code>
 otherwise.
 @throws UnsupportedOperationException
 if removing from this <code>Collection</code> is not supported.
 @throws ClassCastException
 if one or more elements of <code>collection</code>
 isn't of the correct type.
 @throws NullPointerException
 if <code>collection</code> contains at least one
 <code>null</code> element and this <code>Collection</code> doesn't support
 <code>null</code> elements.
 @throws NullPointerException
 if <code>collection</code> is <code>null</code>.
 */
- (jboolean)retainAllWithJavaUtilCollection:(id<JavaUtilCollection>)collection;

/*!
 @brief Returns a count of how many objects this <code>Collection</code> contains.
 <p>
 In this class this method is declared abstract and has to be implemented
 by concrete <code>Collection</code> implementations.
 @return how many objects this <code>Collection</code> contains, or <code>Integer.MAX_VALUE</code>
 if there are more than <code>Integer.MAX_VALUE</code> elements in this
 <code>Collection</code>.
 */
- (jint)size;

- (IOSObjectArray *)toArray;

- (IOSObjectArray *)toArrayWithNSObjectArray:(IOSObjectArray *)contents;

/*!
 @brief Returns the string representation of this <code>Collection</code>.
 The presentation
 has a specific format. It is enclosed by square brackets ("[]"). Elements
 are separated by ', ' (comma and space).
 @return the string representation of this <code>Collection</code>.
 */
- (NSString *)description;

#pragma mark Protected

/*!
 @brief Constructs a new instance of this AbstractCollection.
 */
- (instancetype)init;

#pragma mark Package-Private


@end

J2OBJC_EMPTY_STATIC_INIT(JavaUtilAbstractCollection)

FOUNDATION_EXPORT void JavaUtilAbstractCollection_init(JavaUtilAbstractCollection *self);

J2OBJC_TYPE_LITERAL_HEADER(JavaUtilAbstractCollection)

#endif // _JavaUtilAbstractCollection_H_
