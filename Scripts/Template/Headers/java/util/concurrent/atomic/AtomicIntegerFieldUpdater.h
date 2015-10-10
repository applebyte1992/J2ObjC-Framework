//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/util/concurrent/atomic/AtomicIntegerFieldUpdater.java
//

#ifndef _JavaUtilConcurrentAtomicAtomicIntegerFieldUpdater_H_
#define _JavaUtilConcurrentAtomicAtomicIntegerFieldUpdater_H_

#include <j2objc/J2ObjC_header.h>

@class IOSClass;

/*!
 @brief A reflection-based utility that enables atomic updates to
 designated <code>volatile int</code> fields of designated classes.
 This class is designed for use in atomic data structures in which
 several fields of the same node are independently subject to atomic
 updates.
 <p>Note that the guarantees of the <code>compareAndSet</code>
 method in this class are weaker than in other atomic classes.
 Because this class cannot ensure that all uses of the field
 are appropriate for purposes of atomic access, it can
 guarantee atomicity only with respect to other invocations of
 <code>compareAndSet</code> and <code>set</code> on the same updater.
 @since 1.5
 @author Doug Lea
 */
@interface JavaUtilConcurrentAtomicAtomicIntegerFieldUpdater : NSObject

#pragma mark Public

/*!
 @brief Atomically adds the given value to the current value of the field of
 the given object managed by this updater.
 @param obj An object whose field to get and set
 @param delta the value to add
 @return the updated value
 */
- (jint)addAndGetWithId:(id)obj
                withInt:(jint)delta;

/*!
 @brief Atomically sets the field of the given object managed by this updater
 to the given updated value if the current value <code>==</code> the
 expected value.
 This method is guaranteed to be atomic with respect to
 other calls to <code>compareAndSet</code> and <code>set</code>, but not
 necessarily with respect to other changes in the field.
 @param obj An object whose field to conditionally set
 @param expect the expected value
 @param update the new value
 @return true if successful
 @throws ClassCastException if <code>obj</code> is not an instance
 of the class possessing the field established in the constructor
 */
- (jboolean)compareAndSetWithId:(id)obj
                        withInt:(jint)expect
                        withInt:(jint)update;

/*!
 @brief Atomically decrements by one the current value of the field of the
 given object managed by this updater.
 @param obj An object whose field to get and set
 @return the updated value
 */
- (jint)decrementAndGetWithId:(id)obj;

/*!
 @brief Gets the current value held in the field of the given object managed
 by this updater.
 @param obj An object whose field to get
 @return the current value
 */
- (jint)getWithId:(id)obj;

/*!
 @brief Atomically adds the given value to the current value of the field of
 the given object managed by this updater.
 @param obj An object whose field to get and set
 @param delta the value to add
 @return the previous value
 */
- (jint)getAndAddWithId:(id)obj
                withInt:(jint)delta;

/*!
 @brief Atomically decrements by one the current value of the field of the
 given object managed by this updater.
 @param obj An object whose field to get and set
 @return the previous value
 */
- (jint)getAndDecrementWithId:(id)obj;

/*!
 @brief Atomically increments by one the current value of the field of the
 given object managed by this updater.
 @param obj An object whose field to get and set
 @return the previous value
 */
- (jint)getAndIncrementWithId:(id)obj;

/*!
 @brief Atomically sets the field of the given object managed by this updater
 to the given value and returns the old value.
 @param obj An object whose field to get and set
 @param newValue the new value
 @return the previous value
 */
- (jint)getAndSetWithId:(id)obj
                withInt:(jint)newValue;

/*!
 @brief Atomically increments by one the current value of the field of the
 given object managed by this updater.
 @param obj An object whose field to get and set
 @return the updated value
 */
- (jint)incrementAndGetWithId:(id)obj;

/*!
 @brief Eventually sets the field of the given object managed by this
 updater to the given updated value.
 @param obj An object whose field to set
 @param newValue the new value
 @since 1.6
 */
- (void)lazySetWithId:(id)obj
              withInt:(jint)newValue;

/*!
 @brief Creates and returns an updater for objects with the given field.
 The Class argument is needed to check that reflective types and
 generic types match.
 @param tclass the class of the objects holding the field
 @param fieldName the name of the field to be updated
 @return the updater
 @throws IllegalArgumentException if the field is not a
 volatile integer type
 @throws RuntimeException with a nested reflection-based
 exception if the class does not hold field or is the wrong type,
 or the field is inaccessible to the caller according to Java language
 access control
 */
+ (JavaUtilConcurrentAtomicAtomicIntegerFieldUpdater *)newUpdaterWithIOSClass:(IOSClass *)tclass
                                                                 withNSString:(NSString *)fieldName OBJC_METHOD_FAMILY_NONE;

/*!
 @brief Sets the field of the given object managed by this updater to the
 given updated value.
 This operation is guaranteed to act as a volatile
 store with respect to subsequent invocations of <code>compareAndSet</code>.
 @param obj An object whose field to set
 @param newValue the new value
 */
- (void)setWithId:(id)obj
          withInt:(jint)newValue;

/*!
 @brief Atomically sets the field of the given object managed by this updater
 to the given updated value if the current value <code>==</code> the
 expected value.
 This method is guaranteed to be atomic with respect to
 other calls to <code>compareAndSet</code> and <code>set</code>, but not
 necessarily with respect to other changes in the field.
 <p><a href="package-summary.html#weakCompareAndSet">May fail
 spuriously and does not provide ordering guarantees</a>, so is
 only rarely an appropriate alternative to <code>compareAndSet</code>.
 @param obj An object whose field to conditionally set
 @param expect the expected value
 @param update the new value
 @return true if successful
 @throws ClassCastException if <code>obj</code> is not an instance
 of the class possessing the field established in the constructor
 */
- (jboolean)weakCompareAndSetWithId:(id)obj
                            withInt:(jint)expect
                            withInt:(jint)update;

#pragma mark Protected

/*!
 @brief Protected do-nothing constructor for use by subclasses.
 */
- (instancetype)init;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaUtilConcurrentAtomicAtomicIntegerFieldUpdater)

FOUNDATION_EXPORT JavaUtilConcurrentAtomicAtomicIntegerFieldUpdater *JavaUtilConcurrentAtomicAtomicIntegerFieldUpdater_newUpdaterWithIOSClass_withNSString_(IOSClass *tclass, NSString *fieldName);

FOUNDATION_EXPORT void JavaUtilConcurrentAtomicAtomicIntegerFieldUpdater_init(JavaUtilConcurrentAtomicAtomicIntegerFieldUpdater *self);

J2OBJC_TYPE_LITERAL_HEADER(JavaUtilConcurrentAtomicAtomicIntegerFieldUpdater)

#endif // _JavaUtilConcurrentAtomicAtomicIntegerFieldUpdater_H_
