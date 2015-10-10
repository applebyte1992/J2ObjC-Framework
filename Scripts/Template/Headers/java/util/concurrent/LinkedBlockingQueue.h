//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/util/concurrent/LinkedBlockingQueue.java
//

#ifndef _JavaUtilConcurrentLinkedBlockingQueue_H_
#define _JavaUtilConcurrentLinkedBlockingQueue_H_

#include <j2objc/J2ObjC_header.h>
#include <j2objc/java/io/Serializable.h>
#include <j2objc/java/util/AbstractQueue.h>
#include <j2objc/java/util/concurrent/BlockingQueue.h>

@class IOSObjectArray;
@class JavaUtilConcurrentLinkedBlockingQueue_Node;
@class JavaUtilConcurrentTimeUnitEnum;
@protocol JavaUtilCollection;
@protocol JavaUtilIterator;

/*!
 @brief An optionally-bounded blocking queue based on
 linked nodes.
 This queue orders elements FIFO (first-in-first-out).
 The <em>head</em> of the queue is that element that has been on the
 queue the longest time.
 The <em>tail</em> of the queue is that element that has been on the
 queue the shortest time. New elements
 are inserted at the tail of the queue, and the queue retrieval
 operations obtain elements at the head of the queue.
 Linked queues typically have higher throughput than array-based queues but
 less predictable performance in most concurrent applications.
 <p>The optional capacity bound constructor argument serves as a
 way to prevent excessive queue expansion. The capacity, if unspecified,
 is equal to <code>Integer.MAX_VALUE</code>.  Linked nodes are
 dynamically created upon each insertion unless this would bring the
 queue above capacity.
 <p>This class and its iterator implement all of the
 <em>optional</em> methods of the <code>Collection</code> and <code>Iterator</code>
  interfaces.
 @since 1.5
 @author Doug Lea
 */
@interface JavaUtilConcurrentLinkedBlockingQueue : JavaUtilAbstractQueue < JavaUtilConcurrentBlockingQueue, JavaIoSerializable > {
 @public
  /*!
   @brief Head of linked list.
   Invariant: head.item == null
   */
  JavaUtilConcurrentLinkedBlockingQueue_Node *head_;
}

#pragma mark Public

/*!
 @brief Creates a <code>LinkedBlockingQueue</code> with a capacity of
 <code>Integer.MAX_VALUE</code>.
 */
- (instancetype)init;

/*!
 @brief Creates a <code>LinkedBlockingQueue</code> with a capacity of
 <code>Integer.MAX_VALUE</code>, initially containing the elements of the
 given collection,
 added in traversal order of the collection's iterator.
 @param c the collection of elements to initially contain
 @throws NullPointerException if the specified collection or any
 of its elements are null
 */
- (instancetype)initWithJavaUtilCollection:(id<JavaUtilCollection>)c;

/*!
 @brief Creates a <code>LinkedBlockingQueue</code> with the given (fixed) capacity.
 @param capacity the capacity of this queue
 @throws IllegalArgumentException if <code>capacity</code> is not greater
 than zero
 */
- (instancetype)initWithInt:(jint)capacity;

/*!
 @brief Atomically removes all of the elements from this queue.
 The queue will be empty after this call returns.
 */
- (void)clear;

/*!
 @brief Returns <code>true</code> if this queue contains the specified element.
 More formally, returns <code>true</code> if and only if this queue contains
 at least one element <code>e</code> such that <code>o.equals(e)</code>.
 @param o object to be checked for containment in this queue
 @return <code>true</code> if this queue contains the specified element
 */
- (jboolean)containsWithId:(id)o;

/*!
 @throws UnsupportedOperationException
 @throws ClassCastException
 @throws NullPointerException
 @throws IllegalArgumentException
 */
- (jint)drainToWithJavaUtilCollection:(id<JavaUtilCollection>)c;

/*!
 @throws UnsupportedOperationException
 @throws ClassCastException
 @throws NullPointerException
 @throws IllegalArgumentException
 */
- (jint)drainToWithJavaUtilCollection:(id<JavaUtilCollection>)c
                              withInt:(jint)maxElements;

/*!
 @brief Returns an iterator over the elements in this queue in proper sequence.
 The elements will be returned in order from first (head) to last (tail).
 <p>The returned iterator is a "weakly consistent" iterator that
 will never throw <code>ConcurrentModificationException</code>
 , and guarantees to traverse
 elements as they existed upon construction of the iterator, and
 may (but is not guaranteed to) reflect any modifications
 subsequent to construction.
 @return an iterator over the elements in this queue in proper sequence
 */
- (id<JavaUtilIterator>)iterator;

/*!
 @brief Inserts the specified element at the tail of this queue if it is
 possible to do so immediately without exceeding the queue's capacity,
 returning <code>true</code> upon success and <code>false</code> if this queue
 is full.
 When using a capacity-restricted queue, this method is generally
 preferable to method <code>add</code>, which can fail to
 insert an element only by throwing an exception.
 @throws NullPointerException if the specified element is null
 */
- (jboolean)offerWithId:(id)e;

/*!
 @brief Inserts the specified element at the tail of this queue, waiting if
 necessary up to the specified wait time for space to become available.
 @return <code>true</code> if successful, or <code>false</code> if
 the specified waiting time elapses before space is available
 @throws InterruptedException
 @throws NullPointerException
 */
- (jboolean)offerWithId:(id)e
               withLong:(jlong)timeout
withJavaUtilConcurrentTimeUnitEnum:(JavaUtilConcurrentTimeUnitEnum *)unit;

- (id)peek;

- (id)poll;

- (id)pollWithLong:(jlong)timeout
withJavaUtilConcurrentTimeUnitEnum:(JavaUtilConcurrentTimeUnitEnum *)unit;

/*!
 @brief Inserts the specified element at the tail of this queue, waiting if
 necessary for space to become available.
 @throws InterruptedException
 @throws NullPointerException
 */
- (void)putWithId:(id)e;

/*!
 @brief Returns the number of additional elements that this queue can ideally
 (in the absence of memory or resource constraints) accept without
 blocking.
 This is always equal to the initial capacity of this queue
 less the current <code>size</code> of this queue.
 <p>Note that you <em>cannot</em> always tell if an attempt to insert
 an element will succeed by inspecting <code>remainingCapacity</code>
 because it may be the case that another thread is about to
 insert or remove an element.
 */
- (jint)remainingCapacity;

/*!
 @brief Removes a single instance of the specified element from this queue,
 if it is present.
 More formally, removes an element <code>e</code> such
 that <code>o.equals(e)</code>, if this queue contains one or more such
 elements.
 Returns <code>true</code> if this queue contained the specified element
 (or equivalently, if this queue changed as a result of the call).
 @param o element to be removed from this queue, if present
 @return <code>true</code> if this queue changed as a result of the call
 */
- (jboolean)removeWithId:(id)o;

/*!
 @brief Returns the number of elements in this queue.
 @return the number of elements in this queue
 */
- (jint)size;

- (id)take;

/*!
 @brief Returns an array containing all of the elements in this queue, in
 proper sequence.
 <p>The returned array will be "safe" in that no references to it are
 maintained by this queue.  (In other words, this method must allocate
 a new array).  The caller is thus free to modify the returned array.
 <p>This method acts as bridge between array-based and collection-based
 APIs.
 @return an array containing all of the elements in this queue
 */
- (IOSObjectArray *)toArray;

/*!
 @brief Returns an array containing all of the elements in this queue, in
 proper sequence; the runtime type of the returned array is that of
 the specified array.
 If the queue fits in the specified array, it
 is returned therein.  Otherwise, a new array is allocated with the
 runtime type of the specified array and the size of this queue.
 <p>If this queue fits in the specified array with room to spare
 (i.e., the array has more elements than this queue), the element in
 the array immediately following the end of the queue is set to
 <code>null</code>.
 <p>Like the <code>toArray()</code> method, this method acts as bridge between
 array-based and collection-based APIs.  Further, this method allows
 precise control over the runtime type of the output array, and may,
 under certain circumstances, be used to save allocation costs.
 <p>Suppose <code>x</code> is a queue known to contain only strings.
 The following code can be used to dump the queue into a newly
 allocated array of <code>String</code>:
 @code
  String[] y = x.toArray(new String[0]);
@endcode
 Note that <code>toArray(new Object[0])</code> is identical in function to
 <code>toArray()</code>.
 @param a the array into which the elements of the queue are to
 be stored, if it is big enough; otherwise, a new array of the
 same runtime type is allocated for this purpose
 @return an array containing all of the elements in this queue
 @throws ArrayStoreException if the runtime type of the specified array
 is not a supertype of the runtime type of every element in
 this queue
 @throws NullPointerException if the specified array is null
 */
- (IOSObjectArray *)toArrayWithNSObjectArray:(IOSObjectArray *)a;

- (NSString *)description;

#pragma mark Package-Private

/*!
 @brief Locks to prevent both puts and takes.
 */
- (void)fullyLock;

/*!
 @brief Unlocks to allow both puts and takes.
 */
- (void)fullyUnlock;

/*!
 @brief Unlinks interior Node p with predecessor trail.
 */
- (void)unlinkWithJavaUtilConcurrentLinkedBlockingQueue_Node:(JavaUtilConcurrentLinkedBlockingQueue_Node *)p
              withJavaUtilConcurrentLinkedBlockingQueue_Node:(JavaUtilConcurrentLinkedBlockingQueue_Node *)trail;


@end

J2OBJC_EMPTY_STATIC_INIT(JavaUtilConcurrentLinkedBlockingQueue)

J2OBJC_FIELD_SETTER(JavaUtilConcurrentLinkedBlockingQueue, head_, JavaUtilConcurrentLinkedBlockingQueue_Node *)

FOUNDATION_EXPORT void JavaUtilConcurrentLinkedBlockingQueue_init(JavaUtilConcurrentLinkedBlockingQueue *self);

FOUNDATION_EXPORT JavaUtilConcurrentLinkedBlockingQueue *new_JavaUtilConcurrentLinkedBlockingQueue_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void JavaUtilConcurrentLinkedBlockingQueue_initWithInt_(JavaUtilConcurrentLinkedBlockingQueue *self, jint capacity);

FOUNDATION_EXPORT JavaUtilConcurrentLinkedBlockingQueue *new_JavaUtilConcurrentLinkedBlockingQueue_initWithInt_(jint capacity) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void JavaUtilConcurrentLinkedBlockingQueue_initWithJavaUtilCollection_(JavaUtilConcurrentLinkedBlockingQueue *self, id<JavaUtilCollection> c);

FOUNDATION_EXPORT JavaUtilConcurrentLinkedBlockingQueue *new_JavaUtilConcurrentLinkedBlockingQueue_initWithJavaUtilCollection_(id<JavaUtilCollection> c) NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(JavaUtilConcurrentLinkedBlockingQueue)

/*!
 @brief Linked list node class
 */
@interface JavaUtilConcurrentLinkedBlockingQueue_Node : NSObject {
 @public
  id item_;
  /*!
   @brief One of:
 - the real successor Node
 - this Node, meaning the successor is head.next
 - null, meaning there is no successor (this is the last node)
   */
  JavaUtilConcurrentLinkedBlockingQueue_Node *next_;
}

#pragma mark Package-Private

- (instancetype)initWithId:(id)x;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaUtilConcurrentLinkedBlockingQueue_Node)

J2OBJC_FIELD_SETTER(JavaUtilConcurrentLinkedBlockingQueue_Node, item_, id)
J2OBJC_FIELD_SETTER(JavaUtilConcurrentLinkedBlockingQueue_Node, next_, JavaUtilConcurrentLinkedBlockingQueue_Node *)

FOUNDATION_EXPORT void JavaUtilConcurrentLinkedBlockingQueue_Node_initWithId_(JavaUtilConcurrentLinkedBlockingQueue_Node *self, id x);

FOUNDATION_EXPORT JavaUtilConcurrentLinkedBlockingQueue_Node *new_JavaUtilConcurrentLinkedBlockingQueue_Node_initWithId_(id x) NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(JavaUtilConcurrentLinkedBlockingQueue_Node)

#endif // _JavaUtilConcurrentLinkedBlockingQueue_H_
