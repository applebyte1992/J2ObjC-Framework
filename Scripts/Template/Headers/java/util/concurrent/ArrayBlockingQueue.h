//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/util/concurrent/ArrayBlockingQueue.java
//

#ifndef _JavaUtilConcurrentArrayBlockingQueue_H_
#define _JavaUtilConcurrentArrayBlockingQueue_H_

#include <j2objc/J2ObjC_header.h>
#include <j2objc/java/io/Serializable.h>
#include <j2objc/java/util/AbstractQueue.h>
#include <j2objc/java/util/concurrent/BlockingQueue.h>

@class IOSObjectArray;
@class JavaUtilConcurrentArrayBlockingQueue_Itr;
@class JavaUtilConcurrentArrayBlockingQueue_Itrs;
@class JavaUtilConcurrentLocksReentrantLock;
@class JavaUtilConcurrentTimeUnitEnum;
@protocol JavaUtilCollection;
@protocol JavaUtilIterator;

/*!
 @brief A bounded blocking queue backed by an
 array.
 This queue orders elements FIFO (first-in-first-out).  The
 <em>head</em> of the queue is that element that has been on the
 queue the longest time.  The <em>tail</em> of the queue is that
 element that has been on the queue the shortest time. New elements
 are inserted at the tail of the queue, and the queue retrieval
 operations obtain elements at the head of the queue.
 <p>This is a classic &quot;bounded buffer&quot;, in which a
 fixed-sized array holds elements inserted by producers and
 extracted by consumers.  Once created, the capacity cannot be
 changed.  Attempts to <code>put</code> an element into a full queue
 will result in the operation blocking; attempts to <code>take</code> an
 element from an empty queue will similarly block.
 <p>This class supports an optional fairness policy for ordering
 waiting producer and consumer threads.  By default, this ordering
 is not guaranteed. However, a queue constructed with fairness set
 to <code>true</code> grants threads access in FIFO order. Fairness
 generally decreases throughput but reduces variability and avoids
 starvation.
 <p>This class and its iterator implement all of the
 <em>optional</em> methods of the <code>Collection</code> and <code>Iterator</code>
  interfaces.
 @since 1.5
 @author Doug Lea
 */
@interface JavaUtilConcurrentArrayBlockingQueue : JavaUtilAbstractQueue < JavaUtilConcurrentBlockingQueue, JavaIoSerializable > {
 @public
  /*!
   @brief The queued items
   */
  IOSObjectArray *items_;
  /*!
   @brief items index for next take, poll, peek or remove
   */
  jint takeIndex_;
  /*!
   @brief items index for next put, offer, or add
   */
  jint putIndex_;
  /*!
   @brief Number of elements in the queue
   */
  jint count_;
  /*!
   @brief Main lock guarding all access
   */
  JavaUtilConcurrentLocksReentrantLock *lock_;
  /*!
   @brief Shared state for currently active iterators, or null if there
 are known not to be any.
   Allows queue operations to update
 iterator state.
   */
  JavaUtilConcurrentArrayBlockingQueue_Itrs *itrs_;
}

#pragma mark Public

/*!
 @brief Creates an <code>ArrayBlockingQueue</code> with the given (fixed)
 capacity and default access policy.
 @param capacity the capacity of this queue
 @throws IllegalArgumentException if <code>capacity < 1</code>
 */
- (instancetype)initWithInt:(jint)capacity;

/*!
 @brief Creates an <code>ArrayBlockingQueue</code> with the given (fixed)
 capacity and the specified access policy.
 @param capacity the capacity of this queue
 @param fair if <code>true</code> then queue accesses for threads blocked
 on insertion or removal, are processed in FIFO order;
 if <code>false</code> the access order is unspecified.
 @throws IllegalArgumentException if <code>capacity < 1</code>
 */
- (instancetype)initWithInt:(jint)capacity
                withBoolean:(jboolean)fair;

/*!
 @brief Creates an <code>ArrayBlockingQueue</code> with the given (fixed)
 capacity, the specified access policy and initially containing the
 elements of the given collection,
 added in traversal order of the collection's iterator.
 @param capacity the capacity of this queue
 @param fair if <code>true</code> then queue accesses for threads blocked
 on insertion or removal, are processed in FIFO order;
 if <code>false</code> the access order is unspecified.
 @param c the collection of elements to initially contain
 @throws IllegalArgumentException if <code>capacity</code> is less than
 <code>c.size()</code>, or less than 1.
 @throws NullPointerException if the specified collection or any
 of its elements are null
 */
- (instancetype)initWithInt:(jint)capacity
                withBoolean:(jboolean)fair
     withJavaUtilCollection:(id<JavaUtilCollection>)c;

/*!
 @brief Inserts the specified element at the tail of this queue if it is
 possible to do so immediately without exceeding the queue's capacity,
 returning <code>true</code> upon success and throwing an
 <code>IllegalStateException</code> if this queue is full.
 @param e the element to add
 @return <code>true</code> (as specified by <code>Collection.add</code>)
 @throws IllegalStateException if this queue is full
 @throws NullPointerException if the specified element is null
 */
- (jboolean)addWithId:(id)e;

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
 <p>The returned iterator is
 <a href="package-summary.html#Weakly"><i>weakly consistent</i></a>.
 @return an iterator over the elements in this queue in proper sequence
 */
- (id<JavaUtilIterator>)iterator;

/*!
 @brief Inserts the specified element at the tail of this queue if it is
 possible to do so immediately without exceeding the queue's capacity,
 returning <code>true</code> upon success and <code>false</code> if this queue
 is full.
 This method is generally preferable to method <code>add</code>,
 which can fail to insert an element only by throwing an exception.
 @throws NullPointerException if the specified element is null
 */
- (jboolean)offerWithId:(id)e;

/*!
 @brief Inserts the specified element at the tail of this queue, waiting
 up to the specified wait time for space to become available if
 the queue is full.
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
 @brief Inserts the specified element at the tail of this queue, waiting
 for space to become available if the queue is full.
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
 <p>Removal of interior elements in circular array based queues
 is an intrinsically slow and disruptive operation, so should
 be undertaken only in exceptional circumstances, ideally
 only when the queue is known not to be accessible by other
 threads.
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
 @brief Circularly decrements array index i.
 */
- (jint)decWithInt:(jint)i;

/*!
 @brief Returns item at index i.
 */
- (id)itemAtWithInt:(jint)i;

/*!
 @brief Deletes item at array index removeIndex.
 Utility for remove(Object) and iterator.remove.
 Call only when holding lock.
 */
- (void)removeAtWithInt:(jint)removeIndex;


@end

J2OBJC_EMPTY_STATIC_INIT(JavaUtilConcurrentArrayBlockingQueue)

J2OBJC_FIELD_SETTER(JavaUtilConcurrentArrayBlockingQueue, items_, IOSObjectArray *)
J2OBJC_FIELD_SETTER(JavaUtilConcurrentArrayBlockingQueue, lock_, JavaUtilConcurrentLocksReentrantLock *)
J2OBJC_FIELD_SETTER(JavaUtilConcurrentArrayBlockingQueue, itrs_, JavaUtilConcurrentArrayBlockingQueue_Itrs *)

FOUNDATION_EXPORT void JavaUtilConcurrentArrayBlockingQueue_initWithInt_(JavaUtilConcurrentArrayBlockingQueue *self, jint capacity);

FOUNDATION_EXPORT JavaUtilConcurrentArrayBlockingQueue *new_JavaUtilConcurrentArrayBlockingQueue_initWithInt_(jint capacity) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void JavaUtilConcurrentArrayBlockingQueue_initWithInt_withBoolean_(JavaUtilConcurrentArrayBlockingQueue *self, jint capacity, jboolean fair);

FOUNDATION_EXPORT JavaUtilConcurrentArrayBlockingQueue *new_JavaUtilConcurrentArrayBlockingQueue_initWithInt_withBoolean_(jint capacity, jboolean fair) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void JavaUtilConcurrentArrayBlockingQueue_initWithInt_withBoolean_withJavaUtilCollection_(JavaUtilConcurrentArrayBlockingQueue *self, jint capacity, jboolean fair, id<JavaUtilCollection> c);

FOUNDATION_EXPORT JavaUtilConcurrentArrayBlockingQueue *new_JavaUtilConcurrentArrayBlockingQueue_initWithInt_withBoolean_withJavaUtilCollection_(jint capacity, jboolean fair, id<JavaUtilCollection> c) NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(JavaUtilConcurrentArrayBlockingQueue)

/*!
 @brief Shared data between iterators and their queue, allowing queue
 modifications to update iterators when elements are removed.
 This adds a lot of complexity for the sake of correctly
 handling some uncommon operations, but the combination of
 circular-arrays and supporting interior removes (i.e., those
 not at head) would cause iterators to sometimes lose their
 places and/or (re)report elements they shouldn't.  To avoid
 this, when a queue has one or more iterators, it keeps iterator
 state consistent by:
 (1) keeping track of the number of "cycles", that is, the
 number of times takeIndex has wrapped around to 0.
 (2) notifying all iterators via the callback removedAt whenever
 an interior element is removed (and thus other elements may
 be shifted).
 These suffice to eliminate iterator inconsistencies, but
 unfortunately add the secondary responsibility of maintaining
 the list of iterators.  We track all active iterators in a
 simple linked list (accessed only when the queue's lock is
 held) of weak references to Itr.  The list is cleaned up using
 3 different mechanisms:
 (1) Whenever a new iterator is created, do some O(1) checking for
 stale list elements.
 (2) Whenever takeIndex wraps around to 0, check for iterators
 that have been unused for more than one wrap-around cycle.
 (3) Whenever the queue becomes empty, all iterators are notified
 and this entire data structure is discarded.
 So in addition to the removedAt callback that is necessary for
 correctness, iterators have the shutdown and takeIndexWrapped
 callbacks that help remove stale iterators from the list.
 Whenever a list element is examined, it is expunged if either
 the GC has determined that the iterator is discarded, or if the
 iterator reports that it is "detached" (does not need any
 further state updates).  Overhead is maximal when takeIndex
 never advances, iterators are discarded before they are
 exhausted, and all removals are interior removes, in which case
 all stale iterators are discovered by the GC.  But even in this
 case we don't increase the amortized complexity.
 Care must be taken to keep list sweeping methods from
 reentrantly invoking another such method, causing subtle
 corruption bugs.
 */
@interface JavaUtilConcurrentArrayBlockingQueue_Itrs : NSObject {
 @public
  /*!
   @brief Incremented whenever takeIndex wraps around to 0
   */
  jint cycles_;
}

#pragma mark Package-Private

- (instancetype)initWithJavaUtilConcurrentArrayBlockingQueue:(JavaUtilConcurrentArrayBlockingQueue *)outer$
                withJavaUtilConcurrentArrayBlockingQueue_Itr:(JavaUtilConcurrentArrayBlockingQueue_Itr *)initial;

/*!
 @brief Sweeps itrs, looking for and expunging stale iterators.
 If at least one was found, tries harder to find more.
 Called only from iterating thread.
 @param tryHarder whether to start in try-harder mode, because
 there is known to be at least one iterator to collect
 */
- (void)doSomeSweepingWithBoolean:(jboolean)tryHarder;

/*!
 @brief Called whenever an element has been dequeued (at takeIndex).
 */
- (void)elementDequeued;

/*!
 @brief Called whenever the queue becomes empty.
 Notifies all active iterators that the queue is empty,
 clears all weak refs, and unlinks the itrs datastructure.
 */
- (void)queueIsEmpty;

/*!
 @brief Adds a new iterator to the linked list of tracked iterators.
 */
- (void)register__WithJavaUtilConcurrentArrayBlockingQueue_Itr:(JavaUtilConcurrentArrayBlockingQueue_Itr *)itr;

/*!
 @brief Called whenever an interior remove (not at takeIndex) occurred.
 Notifies all iterators, and expunges any that are now stale.
 */
- (void)removedAtWithInt:(jint)removedIndex;

/*!
 @brief Called whenever takeIndex wraps around to 0.
 Notifies all iterators, and expunges any that are now stale.
 */
- (void)takeIndexWrapped;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaUtilConcurrentArrayBlockingQueue_Itrs)

FOUNDATION_EXPORT void JavaUtilConcurrentArrayBlockingQueue_Itrs_initWithJavaUtilConcurrentArrayBlockingQueue_withJavaUtilConcurrentArrayBlockingQueue_Itr_(JavaUtilConcurrentArrayBlockingQueue_Itrs *self, JavaUtilConcurrentArrayBlockingQueue *outer$, JavaUtilConcurrentArrayBlockingQueue_Itr *initial);

FOUNDATION_EXPORT JavaUtilConcurrentArrayBlockingQueue_Itrs *new_JavaUtilConcurrentArrayBlockingQueue_Itrs_initWithJavaUtilConcurrentArrayBlockingQueue_withJavaUtilConcurrentArrayBlockingQueue_Itr_(JavaUtilConcurrentArrayBlockingQueue *outer$, JavaUtilConcurrentArrayBlockingQueue_Itr *initial) NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(JavaUtilConcurrentArrayBlockingQueue_Itrs)

#endif // _JavaUtilConcurrentArrayBlockingQueue_H_
