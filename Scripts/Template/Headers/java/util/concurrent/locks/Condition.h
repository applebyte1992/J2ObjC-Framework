//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/util/concurrent/locks/Condition.java
//

#ifndef _JavaUtilConcurrentLocksCondition_H_
#define _JavaUtilConcurrentLocksCondition_H_

#include <j2objc/J2ObjC_header.h>

@class JavaUtilConcurrentTimeUnitEnum;
@class JavaUtilDate;

/*!
 @brief <code>Condition</code> factors out the <code>Object</code> monitor
 methods (<code>wait</code>, <code>notify</code>
 and <code>notifyAll</code>) into distinct objects to
 give the effect of having multiple wait-sets per object, by
 combining them with the use of arbitrary <code>Lock</code> implementations.
 Where a <code>Lock</code> replaces the use of <code>synchronized</code> methods
 and statements, a <code>Condition</code> replaces the use of the Object
 monitor methods.
 <p>Conditions (also known as <em>condition queues</em> or
 <em>condition variables</em>) provide a means for one thread to
 suspend execution (to &quot;wait&quot;) until notified by another
 thread that some state condition may now be true.  Because access
 to this shared state information occurs in different threads, it
 must be protected, so a lock of some form is associated with the
 condition. The key property that waiting for a condition provides
 is that it <em>atomically</em> releases the associated lock and
 suspends the current thread, just like <code>Object.wait</code>.
 <p>A <code>Condition</code> instance is intrinsically bound to a lock.
 To obtain a <code>Condition</code> instance for a particular <code>Lock</code>
 instance use its <code>newCondition()</code> method.
 <p>As an example, suppose we have a bounded buffer which supports
 <code>put</code> and <code>take</code> methods.  If a
 <code>take</code> is attempted on an empty buffer, then the thread will block
 until an item becomes available; if a <code>put</code> is attempted on a
 full buffer, then the thread will block until a space becomes available.
 We would like to keep waiting <code>put</code> threads and <code>take</code>
 threads in separate wait-sets so that we can use the optimization of
 only notifying a single thread at a time when items or spaces become
 available in the buffer. This can be achieved using two
 <code>Condition</code> instances.
 @code

  class BoundedBuffer {
   <b>final Lock lock = new ReentrantLock();</b>
   final Condition notFull  = <b>lock.newCondition(); </b>
   final Condition notEmpty = <b>lock.newCondition(); </b>
   final Object[] items = new Object[100];
   int putptr, takeptr, count;
   public void put(Object x) throws InterruptedException {
     <b>lock.lock();
     try {</b>
       while (count == items.length)
         <b>notFull.await();</b>
       items[putptr] = x;
       if (++putptr == items.length) putptr = 0;
       ++count;
       <b>notEmpty.signal();</b>
     <b>} finally {
       lock.unlock();
     }</b>
   }
   public Object take() throws InterruptedException {
     <b>lock.lock();
     try {</b>
       while (count == 0)
         <b>notEmpty.await();</b>
       Object x = items[takeptr];
       if (++takeptr == items.length) takeptr = 0;
       --count;
       <b>notFull.signal();</b>
       return x;
     <b>} finally {
       lock.unlock();
     }</b>
   }
  }
  
@endcode
 (The <code>java.util.concurrent.ArrayBlockingQueue</code> class provides
 this functionality, so there is no reason to implement this
 sample usage class.)
 <p>A <code>Condition</code> implementation can provide behavior and semantics
 that is
 different from that of the <code>Object</code> monitor methods, such as
 guaranteed ordering for notifications, or not requiring a lock to be held
 when performing notifications.
 If an implementation provides such specialized semantics then the
 implementation must document those semantics.
 <p>Note that <code>Condition</code> instances are just normal objects and can
 themselves be used as the target in a <code>synchronized</code> statement,
 and can have their own monitor <code>wait</code> and
 <code>notification</code> methods invoked.
 Acquiring the monitor lock of a <code>Condition</code> instance, or using its
 monitor methods, has no specified relationship with acquiring the
 <code>Lock</code> associated with that <code>Condition</code> or the use of its
 waiting and signalling methods.
 It is recommended that to avoid confusion you never use <code>Condition</code>
 instances in this way, except perhaps within their own implementation.
 <p>Except where noted, passing a <code>null</code> value for any parameter
 will result in a <code>NullPointerException</code> being thrown.
 <h3>Implementation Considerations</h3>
 <p>When waiting upon a <code>Condition</code>, a &quot;<em>spurious
 wakeup</em>&quot; is permitted to occur, in
 general, as a concession to the underlying platform semantics.
 This has little practical impact on most application programs as a
 <code>Condition</code> should always be waited upon in a loop, testing
 the state predicate that is being waited for.  An implementation is
 free to remove the possibility of spurious wakeups but it is
 recommended that applications programmers always assume that they can
 occur and so always wait in a loop.
 <p>The three forms of condition waiting
 (interruptible, non-interruptible, and timed) may differ in their ease of
 implementation on some platforms and in their performance characteristics.
 In particular, it may be difficult to provide these features and maintain
 specific semantics such as ordering guarantees.
 Further, the ability to interrupt the actual suspension of the thread may
 not always be feasible to implement on all platforms.
 <p>Consequently, an implementation is not required to define exactly the
 same guarantees or semantics for all three forms of waiting, nor is it
 required to support interruption of the actual suspension of the thread.
 <p>An implementation is required to
 clearly document the semantics and guarantees provided by each of the
 waiting methods, and when an implementation does support interruption of
 thread suspension then it must obey the interruption semantics as defined
 in this interface.
 <p>As interruption generally implies cancellation, and checks for
 interruption are often infrequent, an implementation can favor responding
 to an interrupt over normal method return. This is true even if it can be
 shown that the interrupt occurred after another action that may have
 unblocked the thread. An implementation should document this behavior.
 @since 1.5
 @author Doug Lea
 */
@protocol JavaUtilConcurrentLocksCondition < NSObject, JavaObject >

/*!
 @brief Causes the current thread to wait until it is signalled or
 interrupted.
 <p>The lock associated with this <code>Condition</code> is atomically
 released and the current thread becomes disabled for thread scheduling
 purposes and lies dormant until <em>one</em> of four things happens:
 <ul>
 <li>Some other thread invokes the <code>signal</code> method for this
 <code>Condition</code> and the current thread happens to be chosen as the
 thread to be awakened; or
 <li>Some other thread invokes the <code>signalAll</code> method for this
 <code>Condition</code>; or
 <li>Some other thread interrupts the
 current thread, and interruption of thread suspension is supported; or
 <li>A &quot;<em>spurious wakeup</em>&quot; occurs.
 </ul>
 <p>In all cases, before this method can return the current thread must
 re-acquire the lock associated with this condition. When the
 thread returns it is <em>guaranteed</em> to hold this lock.
 <p>If the current thread:
 <ul>
 <li>has its interrupted status set on entry to this method; or
 <li>is interrupted while waiting
 and interruption of thread suspension is supported,
 </ul>
 then <code>InterruptedException</code> is thrown and the current thread's
 interrupted status is cleared. It is not specified, in the first
 case, whether or not the test for interruption occurs before the lock
 is released.
 <p><b>Implementation Considerations</b>
 <p>The current thread is assumed to hold the lock associated with this
 <code>Condition</code> when this method is called.
 It is up to the implementation to determine if this is
 the case and if not, how to respond. Typically, an exception will be
 thrown (such as <code>IllegalMonitorStateException</code>) and the
 implementation must document that fact.
 <p>An implementation can favor responding to an interrupt over normal
 method return in response to a signal. In that case the implementation
 must ensure that the signal is redirected to another waiting thread, if
 there is one.
 @throws InterruptedException if the current thread is interrupted
 (and interruption of thread suspension is supported)
 */
- (void)await;

/*!
 @brief Causes the current thread to wait until it is signalled.
 <p>The lock associated with this condition is atomically
 released and the current thread becomes disabled for thread scheduling
 purposes and lies dormant until <em>one</em> of three things happens:
 <ul>
 <li>Some other thread invokes the <code>signal</code> method for this
 <code>Condition</code> and the current thread happens to be chosen as the
 thread to be awakened; or
 <li>Some other thread invokes the <code>signalAll</code> method for this
 <code>Condition</code>; or
 <li>A &quot;<em>spurious wakeup</em>&quot; occurs.
 </ul>
 <p>In all cases, before this method can return the current thread must
 re-acquire the lock associated with this condition. When the
 thread returns it is <em>guaranteed</em> to hold this lock.
 <p>If the current thread's interrupted status is set when it enters
 this method, or it is interrupted
 while waiting, it will continue to wait until signalled. When it finally
 returns from this method its interrupted status will still
 be set.
 <p><b>Implementation Considerations</b>
 <p>The current thread is assumed to hold the lock associated with this
 <code>Condition</code> when this method is called.
 It is up to the implementation to determine if this is
 the case and if not, how to respond. Typically, an exception will be
 thrown (such as <code>IllegalMonitorStateException</code>) and the
 implementation must document that fact.
 */
- (void)awaitUninterruptibly;

/*!
 @brief Causes the current thread to wait until it is signalled or interrupted,
 or the specified waiting time elapses.
 <p>The lock associated with this condition is atomically
 released and the current thread becomes disabled for thread scheduling
 purposes and lies dormant until <em>one</em> of five things happens:
 <ul>
 <li>Some other thread invokes the <code>signal</code> method for this
 <code>Condition</code> and the current thread happens to be chosen as the
 thread to be awakened; or
 <li>Some other thread invokes the <code>signalAll</code> method for this
 <code>Condition</code>; or
 <li>Some other thread interrupts the
 current thread, and interruption of thread suspension is supported; or
 <li>The specified waiting time elapses; or
 <li>A &quot;<em>spurious wakeup</em>&quot; occurs.
 </ul>
 <p>In all cases, before this method can return the current thread must
 re-acquire the lock associated with this condition. When the
 thread returns it is <em>guaranteed</em> to hold this lock.
 <p>If the current thread:
 <ul>
 <li>has its interrupted status set on entry to this method; or
 <li>is interrupted while waiting
 and interruption of thread suspension is supported,
 </ul>
 then <code>InterruptedException</code> is thrown and the current thread's
 interrupted status is cleared. It is not specified, in the first
 case, whether or not the test for interruption occurs before the lock
 is released.
 <p>The method returns an estimate of the number of nanoseconds
 remaining to wait given the supplied <code>nanosTimeout</code>
 value upon return, or a value less than or equal to zero if it
 timed out. This value can be used to determine whether and how
 long to re-wait in cases where the wait returns but an awaited
 condition still does not hold. Typical uses of this method take
 the following form:
 @code
 
  boolean aMethod(long timeout, TimeUnit unit) 
   long nanos = unit.toNanos(timeout);
   lock.lock();
   try {
     while (!conditionBeingWaitedFor()) {
       if (nanos <= 0L)
         return false;
       nanos = theCondition.awaitNanos(nanos);
     }
     // ...
   } finally {
     lock.unlock();
   }
  
@endcode
 <p> Design note: This method requires a nanosecond argument so
 as to avoid truncation errors in reporting remaining times.
 Such precision loss would make it difficult for programmers to
 ensure that total waiting times are not systematically shorter
 than specified when re-waits occur.
 <p><b>Implementation Considerations</b>
 <p>The current thread is assumed to hold the lock associated with this
 <code>Condition</code> when this method is called.
 It is up to the implementation to determine if this is
 the case and if not, how to respond. Typically, an exception will be
 thrown (such as <code>IllegalMonitorStateException</code>) and the
 implementation must document that fact.
 <p>An implementation can favor responding to an interrupt over normal
 method return in response to a signal, or over indicating the elapse
 of the specified waiting time. In either case the implementation
 must ensure that the signal is redirected to another waiting thread, if
 there is one.
 @param nanosTimeout the maximum time to wait, in nanoseconds
 @return an estimate of the <code>nanosTimeout</code> value minus
 the time spent waiting upon return from this method.
 A positive value may be used as the argument to a
 subsequent call to this method to finish waiting out
 the desired time.  A value less than or equal to zero
 indicates that no time remains.
 @throws InterruptedException if the current thread is interrupted
 (and interruption of thread suspension is supported)
 */
- (jlong)awaitNanosWithLong:(jlong)nanosTimeout;

/*!
 @brief Causes the current thread to wait until it is signalled or interrupted,
 or the specified waiting time elapses.
 This method is behaviorally
 equivalent to:
 @code
  awaitNanos(unit.toNanos(time)) > 0
@endcode
 @param time the maximum time to wait
 @param unit the time unit of the <code>time</code> argument
 @return <code>false</code> if the waiting time detectably elapsed
 before return from the method, else <code>true</code>
 @throws InterruptedException if the current thread is interrupted
 (and interruption of thread suspension is supported)
 */
- (jboolean)awaitWithLong:(jlong)time
withJavaUtilConcurrentTimeUnitEnum:(JavaUtilConcurrentTimeUnitEnum *)unit;

/*!
 @brief Causes the current thread to wait until it is signalled or interrupted,
 or the specified deadline elapses.
 <p>The lock associated with this condition is atomically
 released and the current thread becomes disabled for thread scheduling
 purposes and lies dormant until <em>one</em> of five things happens:
 <ul>
 <li>Some other thread invokes the <code>signal</code> method for this
 <code>Condition</code> and the current thread happens to be chosen as the
 thread to be awakened; or
 <li>Some other thread invokes the <code>signalAll</code> method for this
 <code>Condition</code>; or
 <li>Some other thread interrupts the
 current thread, and interruption of thread suspension is supported; or
 <li>The specified deadline elapses; or
 <li>A &quot;<em>spurious wakeup</em>&quot; occurs.
 </ul>
 <p>In all cases, before this method can return the current thread must
 re-acquire the lock associated with this condition. When the
 thread returns it is <em>guaranteed</em> to hold this lock.
 <p>If the current thread:
 <ul>
 <li>has its interrupted status set on entry to this method; or
 <li>is interrupted while waiting
 and interruption of thread suspension is supported,
 </ul>
 then <code>InterruptedException</code> is thrown and the current thread's
 interrupted status is cleared. It is not specified, in the first
 case, whether or not the test for interruption occurs before the lock
 is released.
 <p>The return value indicates whether the deadline has elapsed,
 which can be used as follows:
 @code
 
  boolean aMethod(Date deadline) 
   boolean stillWaiting = true;
   lock.lock();
   try {
     while (!conditionBeingWaitedFor()) {
       if (!stillWaiting)
         return false;
       stillWaiting = theCondition.awaitUntil(deadline);
     }
     // ...
   } finally {
     lock.unlock();
   }
  
@endcode
 <p><b>Implementation Considerations</b>
 <p>The current thread is assumed to hold the lock associated with this
 <code>Condition</code> when this method is called.
 It is up to the implementation to determine if this is
 the case and if not, how to respond. Typically, an exception will be
 thrown (such as <code>IllegalMonitorStateException</code>) and the
 implementation must document that fact.
 <p>An implementation can favor responding to an interrupt over normal
 method return in response to a signal, or over indicating the passing
 of the specified deadline. In either case the implementation
 must ensure that the signal is redirected to another waiting thread, if
 there is one.
 @param deadline the absolute time to wait until
 @return <code>false</code> if the deadline has elapsed upon return, else
 <code>true</code>
 @throws InterruptedException if the current thread is interrupted
 (and interruption of thread suspension is supported)
 */
- (jboolean)awaitUntilWithJavaUtilDate:(JavaUtilDate *)deadline;

/*!
 @brief Wakes up one waiting thread.
 <p>If any threads are waiting on this condition then one
 is selected for waking up. That thread must then re-acquire the
 lock before returning from <code>await</code>.
 <p><b>Implementation Considerations</b>
 <p>An implementation may (and typically does) require that the
 current thread hold the lock associated with this <code>Condition</code>
  when this method is called. Implementations must
 document this precondition and any actions taken if the lock is
 not held. Typically, an exception such as <code>IllegalMonitorStateException</code>
  will be thrown.
 */
- (void)signal;

/*!
 @brief Wakes up all waiting threads.
 <p>If any threads are waiting on this condition then they are
 all woken up. Each thread must re-acquire the lock before it can
 return from <code>await</code>.
 <p><b>Implementation Considerations</b>
 <p>An implementation may (and typically does) require that the
 current thread hold the lock associated with this <code>Condition</code>
  when this method is called. Implementations must
 document this precondition and any actions taken if the lock is
 not held. Typically, an exception such as <code>IllegalMonitorStateException</code>
  will be thrown.
 */
- (void)signalAll;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaUtilConcurrentLocksCondition)

J2OBJC_TYPE_LITERAL_HEADER(JavaUtilConcurrentLocksCondition)

#endif // _JavaUtilConcurrentLocksCondition_H_
