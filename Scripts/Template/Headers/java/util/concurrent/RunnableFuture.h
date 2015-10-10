//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/util/concurrent/RunnableFuture.java
//

#ifndef _JavaUtilConcurrentRunnableFuture_H_
#define _JavaUtilConcurrentRunnableFuture_H_

#include <j2objc/J2ObjC_header.h>
#include <j2objc/java/lang/Runnable.h>
#include <j2objc/java/util/concurrent/Future.h>

/*!
 @brief A <code>Future</code> that is <code>Runnable</code>.
 Successful execution of
 the <code>run</code> method causes completion of the <code>Future</code>
 and allows access to its results.
 @since 1.6
 @author Doug Lea
 */
@protocol JavaUtilConcurrentRunnableFuture < JavaLangRunnable, JavaUtilConcurrentFuture, NSObject, JavaObject >

/*!
 @brief Sets this Future to the result of its computation
 unless it has been cancelled.
 */
- (void)run;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaUtilConcurrentRunnableFuture)

J2OBJC_TYPE_LITERAL_HEADER(JavaUtilConcurrentRunnableFuture)

#endif // _JavaUtilConcurrentRunnableFuture_H_
