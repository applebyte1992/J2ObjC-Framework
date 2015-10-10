//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/nio/ByteOrder.java
//

#ifndef _JavaNioByteOrder_H_
#define _JavaNioByteOrder_H_

#include <j2objc/J2ObjC_header.h>

/*!
 @brief Defines byte order constants.
 */
@interface JavaNioByteOrder : NSObject {
 @public
  /*!
   @brief This is the only thing that ByteOrder is really used for: to know whether we need to swap
 bytes to get this order, given bytes in native order.
   (That is, this is the opposite of
 the hypothetical "isNativeOrder".)
    - needed in libcore.io too.
   */
  jboolean needsSwap_;
}

#pragma mark Public

/*!
 @brief Returns the current platform byte order.
 @return the byte order object, which is either LITTLE_ENDIAN or
 BIG_ENDIAN.
 */
+ (JavaNioByteOrder *)nativeOrder;

/*!
 @brief Returns a string that describes this object.
 @return "BIG_ENDIAN" for <code>ByteOrder.BIG_ENDIAN</code>
 objects, "LITTLE_ENDIAN" for
 <code>ByteOrder.LITTLE_ENDIAN</code> objects.
 */
- (NSString *)description;

@end

J2OBJC_STATIC_INIT(JavaNioByteOrder)

FOUNDATION_EXPORT JavaNioByteOrder *JavaNioByteOrder_BIG_ENDIAN__;
J2OBJC_STATIC_FIELD_GETTER(JavaNioByteOrder, BIG_ENDIAN__, JavaNioByteOrder *)

FOUNDATION_EXPORT JavaNioByteOrder *JavaNioByteOrder_LITTLE_ENDIAN__;
J2OBJC_STATIC_FIELD_GETTER(JavaNioByteOrder, LITTLE_ENDIAN__, JavaNioByteOrder *)

FOUNDATION_EXPORT JavaNioByteOrder *JavaNioByteOrder_nativeOrder();

J2OBJC_TYPE_LITERAL_HEADER(JavaNioByteOrder)

#endif // _JavaNioByteOrder_H_
