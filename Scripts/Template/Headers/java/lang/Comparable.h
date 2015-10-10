//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/lang/Comparable.java
//

#ifndef _JavaLangComparable_H_
#define _JavaLangComparable_H_

#include <j2objc/J2ObjC_header.h>

/*!
 @brief This interface should be implemented by all classes that wish to define a
 <em>natural order</em> of their instances.
 <code>java.util.Collections.sort</code> and <code>java.util.Arrays#sort</code> can then
 be used to automatically sort lists of classes that implement this interface.
 <p>
 The order rule must be both transitive (if <code>x.compareTo(y) < 0</code> and
 <code>y.compareTo(z) < 0</code>, then <code>x.compareTo(z) < 0</code> must hold) and
 invertible (the sign of the result of x.compareTo(y) must be equal to the
 negation of the sign of the result of y.compareTo(x) for all combinations of
 x and y).
 <p>
 In addition, it is recommended (but not required) that if and only if the
 result of x.compareTo(y) is zero, then the result of x.equals(y) should be
 <code>true</code>.
 */
@protocol JavaLangComparable < NSObject, JavaObject >

/*!
 @brief Compares this object to the specified object to determine their relative
 order.
 @param another
 the object to compare to this instance.
 @return a negative integer if this instance is less than <code>another</code>;
 a positive integer if this instance is greater than
 <code>another</code>; 0 if this instance has the same order as
 <code>another</code>.
 @throws ClassCastException
 if <code>another</code> cannot be converted into something
 comparable to <code>this</code> instance.
 */
- (jint)compareToWithId:(id)another;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaLangComparable)

J2OBJC_TYPE_LITERAL_HEADER(JavaLangComparable)

#endif // _JavaLangComparable_H_
