//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/util/concurrent/atomic/AtomicReferenceFieldUpdater.java
//

#ifndef _JavaUtilConcurrentAtomicAtomicReferenceFieldUpdater_H_
#define _JavaUtilConcurrentAtomicAtomicReferenceFieldUpdater_H_

#include <j2objc/J2ObjC_header.h>

@class IOSClass;

/*!
 @brief A reflection-based utility that enables atomic updates to
 designated <code>volatile</code> reference fields of designated
 classes.
 This class is designed for use in atomic data structures
 in which several reference fields of the same node are
 independently subject to atomic updates. For example, a tree node
 might be declared as
 @code
 
  class Node 
   private volatile Node left, right;
   private static final AtomicReferenceFieldUpdater<Node, Node> leftUpdater =
     AtomicReferenceFieldUpdater.newUpdater(Node.class, Node.class, "left");
   private static AtomicReferenceFieldUpdater<Node, Node> rightUpdater =
     AtomicReferenceFieldUpdater.newUpdater(Node.class, Node.class, "right");
   Node getLeft() { return left; }
   boolean compareAndSetLeft(Node expect, Node update) {
     return leftUpdater.compareAndSet(this, expect, update);
   }
   // ... and so on
  
@endcode
 <p>Note that the guarantees of the <code>compareAndSet</code>
 method in this class are weaker than in other atomic classes.
 Because this class cannot ensure that all uses of the field
 are appropriate for purposes of atomic access, it can
 guarantee atomicity only with respect to other invocations of
 <code>compareAndSet</code> and <code>set</code> on the same updater.
 @since 1.5
 @author Doug Lea
 */
@interface JavaUtilConcurrentAtomicAtomicReferenceFieldUpdater : NSObject

#pragma mark Public

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
 */
- (jboolean)compareAndSetWithId:(id)obj
                         withId:(id)expect
                         withId:(id)update;

/*!
 @brief Gets the current value held in the field of the given object managed
 by this updater.
 @param obj An object whose field to get
 @return the current value
 */
- (id)getWithId:(id)obj;

/*!
 @brief Atomically sets the field of the given object managed by this updater
 to the given value and returns the old value.
 @param obj An object whose field to get and set
 @param newValue the new value
 @return the previous value
 */
- (id)getAndSetWithId:(id)obj
               withId:(id)newValue;

/*!
 @brief Eventually sets the field of the given object managed by this
 updater to the given updated value.
 @param obj An object whose field to set
 @param newValue the new value
 @since 1.6
 */
- (void)lazySetWithId:(id)obj
               withId:(id)newValue;

/*!
 @brief Creates and returns an updater for objects with the given field.
 The Class arguments are needed to check that reflective types and
 generic types match.
 @param tclass the class of the objects holding the field
 @param vclass the class of the field
 @param fieldName the name of the field to be updated
 @return the updater
 @throws IllegalArgumentException if the field is not a volatile reference type
 @throws RuntimeException with a nested reflection-based
 exception if the class does not hold field or is the wrong type,
 or the field is inaccessible to the caller according to Java language
 access control
 */
+ (JavaUtilConcurrentAtomicAtomicReferenceFieldUpdater *)newUpdaterWithIOSClass:(IOSClass *)tclass
                                                                   withIOSClass:(IOSClass *)vclass
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
           withId:(id)newValue;

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
 */
- (jboolean)weakCompareAndSetWithId:(id)obj
                             withId:(id)expect
                             withId:(id)update;

#pragma mark Protected

/*!
 @brief Protected do-nothing constructor for use by subclasses.
 */
- (instancetype)init;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaUtilConcurrentAtomicAtomicReferenceFieldUpdater)

FOUNDATION_EXPORT JavaUtilConcurrentAtomicAtomicReferenceFieldUpdater *JavaUtilConcurrentAtomicAtomicReferenceFieldUpdater_newUpdaterWithIOSClass_withIOSClass_withNSString_(IOSClass *tclass, IOSClass *vclass, NSString *fieldName);

FOUNDATION_EXPORT void JavaUtilConcurrentAtomicAtomicReferenceFieldUpdater_init(JavaUtilConcurrentAtomicAtomicReferenceFieldUpdater *self);

J2OBJC_TYPE_LITERAL_HEADER(JavaUtilConcurrentAtomicAtomicReferenceFieldUpdater)

#endif // _JavaUtilConcurrentAtomicAtomicReferenceFieldUpdater_H_
