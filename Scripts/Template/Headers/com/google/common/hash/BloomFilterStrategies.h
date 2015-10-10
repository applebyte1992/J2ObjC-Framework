//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/tmp/j2objc/guava/sources/com/google/common/hash/BloomFilterStrategies.java
//

#include <j2objc/J2ObjC_header.h>

#pragma push_macro("ComGoogleCommonHashBloomFilterStrategies_INCLUDE_ALL")
#if ComGoogleCommonHashBloomFilterStrategies_RESTRICT
#define ComGoogleCommonHashBloomFilterStrategies_INCLUDE_ALL 0
#else
#define ComGoogleCommonHashBloomFilterStrategies_INCLUDE_ALL 1
#endif
#undef ComGoogleCommonHashBloomFilterStrategies_RESTRICT

#if !defined (_ComGoogleCommonHashBloomFilterStrategiesEnum_) && (ComGoogleCommonHashBloomFilterStrategies_INCLUDE_ALL || ComGoogleCommonHashBloomFilterStrategiesEnum_INCLUDE)
#define _ComGoogleCommonHashBloomFilterStrategiesEnum_

#define JavaLangEnum_RESTRICT 1
#define JavaLangEnum_INCLUDE 1
#include <j2objc/java/lang/Enum.h>

#define ComGoogleCommonHashBloomFilter_RESTRICT 1
#define ComGoogleCommonHashBloomFilter_Strategy_INCLUDE 1
#include <j2objc/com/google/common/hash/BloomFilter.h>

typedef NS_ENUM(NSUInteger, ComGoogleCommonHashBloomFilterStrategies) {
  ComGoogleCommonHashBloomFilterStrategies_MURMUR128_MITZ_32 = 0,
  ComGoogleCommonHashBloomFilterStrategies_MURMUR128_MITZ_64 = 1,
};

@interface ComGoogleCommonHashBloomFilterStrategiesEnum : JavaLangEnum < NSCopying, ComGoogleCommonHashBloomFilter_Strategy >

#pragma mark Package-Private

+ (IOSObjectArray *)values;
FOUNDATION_EXPORT IOSObjectArray *ComGoogleCommonHashBloomFilterStrategiesEnum_values();

+ (ComGoogleCommonHashBloomFilterStrategiesEnum *)valueOfWithNSString:(NSString *)name;
FOUNDATION_EXPORT ComGoogleCommonHashBloomFilterStrategiesEnum *ComGoogleCommonHashBloomFilterStrategiesEnum_valueOfWithNSString_(NSString *name);

- (id)copyWithZone:(NSZone *)zone;

@end

J2OBJC_STATIC_INIT(ComGoogleCommonHashBloomFilterStrategiesEnum)

FOUNDATION_EXPORT ComGoogleCommonHashBloomFilterStrategiesEnum *ComGoogleCommonHashBloomFilterStrategiesEnum_values_[];

#define ComGoogleCommonHashBloomFilterStrategiesEnum_MURMUR128_MITZ_32 ComGoogleCommonHashBloomFilterStrategiesEnum_values_[ComGoogleCommonHashBloomFilterStrategies_MURMUR128_MITZ_32]
J2OBJC_ENUM_CONSTANT_GETTER(ComGoogleCommonHashBloomFilterStrategiesEnum, MURMUR128_MITZ_32)

#define ComGoogleCommonHashBloomFilterStrategiesEnum_MURMUR128_MITZ_64 ComGoogleCommonHashBloomFilterStrategiesEnum_values_[ComGoogleCommonHashBloomFilterStrategies_MURMUR128_MITZ_64]
J2OBJC_ENUM_CONSTANT_GETTER(ComGoogleCommonHashBloomFilterStrategiesEnum, MURMUR128_MITZ_64)

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonHashBloomFilterStrategiesEnum)

#endif

#if !defined (_ComGoogleCommonHashBloomFilterStrategies_BitArray_) && (ComGoogleCommonHashBloomFilterStrategies_INCLUDE_ALL || ComGoogleCommonHashBloomFilterStrategies_BitArray_INCLUDE)
#define _ComGoogleCommonHashBloomFilterStrategies_BitArray_

@class IOSLongArray;

@interface ComGoogleCommonHashBloomFilterStrategies_BitArray : NSObject {
 @public
  IOSLongArray *data_;
  jlong bitCount_;
}

#pragma mark Public

- (jboolean)isEqual:(id)o;

- (NSUInteger)hash;

#pragma mark Package-Private

- (instancetype)initWithLong:(jlong)bits;

- (instancetype)initWithLongArray:(IOSLongArray *)data;

- (jlong)bitCount;

- (jlong)bitSize;

- (ComGoogleCommonHashBloomFilterStrategies_BitArray *)copy__ OBJC_METHOD_FAMILY_NONE;

- (jboolean)getWithLong:(jlong)index;

- (void)putAllWithComGoogleCommonHashBloomFilterStrategies_BitArray:(ComGoogleCommonHashBloomFilterStrategies_BitArray *)array;

- (jboolean)setWithLong:(jlong)index;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonHashBloomFilterStrategies_BitArray)

J2OBJC_FIELD_SETTER(ComGoogleCommonHashBloomFilterStrategies_BitArray, data_, IOSLongArray *)

FOUNDATION_EXPORT void ComGoogleCommonHashBloomFilterStrategies_BitArray_initWithLong_(ComGoogleCommonHashBloomFilterStrategies_BitArray *self, jlong bits);

FOUNDATION_EXPORT ComGoogleCommonHashBloomFilterStrategies_BitArray *new_ComGoogleCommonHashBloomFilterStrategies_BitArray_initWithLong_(jlong bits) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void ComGoogleCommonHashBloomFilterStrategies_BitArray_initWithLongArray_(ComGoogleCommonHashBloomFilterStrategies_BitArray *self, IOSLongArray *data);

FOUNDATION_EXPORT ComGoogleCommonHashBloomFilterStrategies_BitArray *new_ComGoogleCommonHashBloomFilterStrategies_BitArray_initWithLongArray_(IOSLongArray *data) NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonHashBloomFilterStrategies_BitArray)

#endif

#pragma pop_macro("ComGoogleCommonHashBloomFilterStrategies_INCLUDE_ALL")
