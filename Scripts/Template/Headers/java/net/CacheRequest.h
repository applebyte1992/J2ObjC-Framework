//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/net/CacheRequest.java
//

#ifndef _JavaNetCacheRequest_H_
#define _JavaNetCacheRequest_H_

#include <j2objc/J2ObjC_header.h>

@class JavaIoOutputStream;

/*!
 @brief <code>CacheRequest</code> is a kind of channel for storing resource data in the
 <code>ResponseCache</code>.
 A protocol handler calls the <code>OutputStream</code>
 which is provided by the <code>CacheRequest</code> object, to store the resource
 data into the cache. It also allows the user to interrupt and abort the
 current store operation by calling the method <code>abort</code>. If an <code>IOException</code>
  occurs while reading the response or writing data to the cache,
 the current cache store operation is abandoned.
 */
@interface JavaNetCacheRequest : NSObject

#pragma mark Public

/*!
 @brief This implementation does nothing.
 */
- (instancetype)init;

/*!
 @brief Aborts the current cache operation.
 If an <code>IOException</code> occurs
 while reading the response or writing resource data to the cache, the
 current cache store operation is aborted.
 */
- (void)abort;

/*!
 @brief Returns an <code>OutputStream</code> which is used to write the response body.
 @return an <code>OutputStream</code> which is used to write the response body.
 @throws IOException
 if an I/O error is encountered during writing response body
 operation.
 */
- (JavaIoOutputStream *)getBody;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaNetCacheRequest)

FOUNDATION_EXPORT void JavaNetCacheRequest_init(JavaNetCacheRequest *self);

J2OBJC_TYPE_LITERAL_HEADER(JavaNetCacheRequest)

#endif // _JavaNetCacheRequest_H_
