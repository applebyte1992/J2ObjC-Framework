//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/util/Queue.java
//

#ifndef _JavaUtilQueue_H_
#define _JavaUtilQueue_H_

#include <j2objc/J2ObjC_header.h>
#include <j2objc/java/util/Collection.h>

/*!
 @brief A collection designed for holding elements prior to processing.
 Besides basic <code>Collection</code> operations,
 queues provide additional insertion, extraction, and inspection
 operations.  Each of these methods exists in two forms: one throws
 an exception if the operation fails, the other returns a special
 value (either <tt>null</tt> or <tt>false</tt>, depending on the
 operation).  The latter form of the insert operation is designed
 specifically for use with capacity-restricted <tt>Queue</tt>
 implementations; in most implementations, insert operations cannot
 fail.
 <p>
 <table BORDER CELLPADDING=3 CELLSPACING=1>
 <tr>
 <td></td>
 <td ALIGN=CENTER><em>Throws exception</em></td>
 <td ALIGN=CENTER><em>Returns special value</em></td>
 </tr>
 <tr>
 <td><b>Insert</b></td>
 <td><code>add(e)</code></td>
 <td><code>offer(e)</code></td>
 </tr>
 <tr>
 <td><b>Remove</b></td>
 <td><code>remove()</code></td>
 <td><code>poll()</code></td>
 </tr>
 <tr>
 <td><b>Examine</b></td>
 <td><code>element()</code></td>
 <td><code>peek()</code></td>
 </tr>
 </table>
 <p>Queues typically, but do not necessarily, order elements in a
 FIFO (first-in-first-out) manner.  Among the exceptions are
 priority queues, which order elements according to a supplied
 comparator, or the elements' natural ordering, and LIFO queues (or
 stacks) which order the elements LIFO (last-in-first-out).
 Whatever the ordering used, the <em>head</em> of the queue is that
 element which would be removed by a call to <code></code> or
 <code>poll()</code>.  In a FIFO queue, all new elements are inserted at
 the <em> tail</em> of the queue. Other kinds of queues may use
 different placement rules.  Every <tt>Queue</tt> implementation
 must specify its ordering properties.
 <p>The <code>offer</code> method inserts an element if possible,
 otherwise returning <tt>false</tt>.  This differs from the <code>Collection.add</code>
  method, which can fail to
 add an element only by throwing an unchecked exception.  The
 <tt>offer</tt> method is designed for use when failure is a normal,
 rather than exceptional occurrence, for example, in fixed-capacity
 (or &quot;bounded&quot;) queues.
 <p>The <code>remove()</code> and <code>poll()</code> methods remove and
 return the head of the queue.
 Exactly which element is removed from the queue is a
 function of the queue's ordering policy, which differs from
 implementation to implementation. The <tt>remove()</tt> and
 <tt>poll()</tt> methods differ only in their behavior when the
 queue is empty: the <tt>remove()</tt> method throws an exception,
 while the <tt>poll()</tt> method returns <tt>null</tt>.
 <p>The <code>element()</code> and <code>peek()</code> methods return, but do
 not remove, the head of the queue.
 <p>The <tt>Queue</tt> interface does not define the <i>blocking queue
 methods</i>, which are common in concurrent programming.  These methods,
 which wait for elements to appear or for space to become available, are
 defined in the <code>java.util.concurrent.BlockingQueue</code> interface, which
 extends this interface.
 <p><tt>Queue</tt> implementations generally do not allow insertion
 of <tt>null</tt> elements, although some implementations, such as
 <code>LinkedList</code>, do not prohibit insertion of <tt>null</tt>.
 Even in the implementations that permit it, <tt>null</tt> should
 not be inserted into a <tt>Queue</tt>, as <tt>null</tt> is also
 used as a special return value by the <tt>poll</tt> method to
 indicate that the queue contains no elements.
 <p><tt>Queue</tt> implementations generally do not define
 element-based versions of methods <tt>equals</tt> and
 <tt>hashCode</tt> but instead inherit the identity based versions
 from class <tt>Object</tt>, because element-based equality is not
 always well-defined for queues with the same elements but different
 ordering properties.
 @since 1.5
 @author Doug Lea
 */
@protocol JavaUtilQueue < JavaUtilCollection, NSObject, JavaObject >

/*!
 @brief Inserts the specified element into this queue if it is possible to do so
 immediately without violating capacity restrictions, returning
 <tt>true</tt> upon success and throwing an <tt>IllegalStateException</tt>
 if no space is currently available.
 @param e the element to add
 @return <tt>true</tt> (as specified by <code>Collection.add</code>)
 @throws IllegalStateException if the element cannot be added at this
 time due to capacity restrictions
 @throws ClassCastException if the class of the specified element
 prevents it from being added to this queue
 @throws NullPointerException if the specified element is null and
 this queue does not permit null elements
 @throws IllegalArgumentException if some property of this element
 prevents it from being added to this queue
 */
- (jboolean)addWithId:(id)e;

/*!
 @brief Inserts the specified element into this queue if it is possible to do
 so immediately without violating capacity restrictions.
 When using a capacity-restricted queue, this method is generally
 preferable to <code>add</code>, which can fail to insert an element only
 by throwing an exception.
 @param e the element to add
 @return <tt>true</tt> if the element was added to this queue, else
 <tt>false</tt>
 @throws ClassCastException if the class of the specified element
 prevents it from being added to this queue
 @throws NullPointerException if the specified element is null and
 this queue does not permit null elements
 @throws IllegalArgumentException if some property of this element
 prevents it from being added to this queue
 */
- (jboolean)offerWithId:(id)e;

/*!
 @brief Retrieves and removes the head of this queue.
 This method differs
 from <code>poll</code> only in that it throws an exception if this
 queue is empty.
 @return the head of this queue
 @throws NoSuchElementException if this queue is empty
 */
- (id)remove;

/*!
 @brief Retrieves and removes the head of this queue,
 or returns <tt>null</tt> if this queue is empty.
 @return the head of this queue, or <tt>null</tt> if this queue is empty
 */
- (id)poll;

/*!
 @brief Retrieves, but does not remove, the head of this queue.
 This method
 differs from <code>peek</code> only in that it throws an exception
 if this queue is empty.
 @return the head of this queue
 @throws NoSuchElementException if this queue is empty
 */
- (id)element;

/*!
 @brief Retrieves, but does not remove, the head of this queue,
 or returns <tt>null</tt> if this queue is empty.
 @return the head of this queue, or <tt>null</tt> if this queue is empty
 */
- (id)peek;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaUtilQueue)

J2OBJC_TYPE_LITERAL_HEADER(JavaUtilQueue)

#endif // _JavaUtilQueue_H_
