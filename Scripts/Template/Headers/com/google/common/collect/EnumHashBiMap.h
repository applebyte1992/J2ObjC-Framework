//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/tmp/j2objc/guava/sources/com/google/common/collect/EnumHashBiMap.java
//

#include <j2objc/J2ObjC_header.h>

#pragma push_macro("ComGoogleCommonCollectEnumHashBiMap_INCLUDE_ALL")
#if ComGoogleCommonCollectEnumHashBiMap_RESTRICT
#define ComGoogleCommonCollectEnumHashBiMap_INCLUDE_ALL 0
#else
#define ComGoogleCommonCollectEnumHashBiMap_INCLUDE_ALL 1
#endif
#undef ComGoogleCommonCollectEnumHashBiMap_RESTRICT

#if !defined (_ComGoogleCommonCollectEnumHashBiMap_) && (ComGoogleCommonCollectEnumHashBiMap_INCLUDE_ALL || ComGoogleCommonCollectEnumHashBiMap_INCLUDE)
#define _ComGoogleCommonCollectEnumHashBiMap_

#define ComGoogleCommonCollectAbstractBiMap_RESTRICT 1
#define ComGoogleCommonCollectAbstractBiMap_INCLUDE 1
#include <j2objc/com/google/common/collect/AbstractBiMap.h>

@class IOSClass;
@class JavaLangEnum;
@protocol JavaUtilMap;

@interface ComGoogleCommonCollectEnumHashBiMap : ComGoogleCommonCollectAbstractBiMap

#pragma mark Public

+ (ComGoogleCommonCollectEnumHashBiMap *)createWithIOSClass:(IOSClass *)keyType;

+ (ComGoogleCommonCollectEnumHashBiMap *)createWithJavaUtilMap:(id<JavaUtilMap>)map;

- (id)forcePutWithId:(JavaLangEnum *)key
              withId:(id)value;

- (IOSClass *)keyType;

- (id)putWithId:(JavaLangEnum *)key
         withId:(id)value;

#pragma mark Package-Private

- (id)checkKeyWithId:(JavaLangEnum *)key;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectEnumHashBiMap)

FOUNDATION_EXPORT ComGoogleCommonCollectEnumHashBiMap *ComGoogleCommonCollectEnumHashBiMap_createWithIOSClass_(IOSClass *keyType);

FOUNDATION_EXPORT ComGoogleCommonCollectEnumHashBiMap *ComGoogleCommonCollectEnumHashBiMap_createWithJavaUtilMap_(id<JavaUtilMap> map);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectEnumHashBiMap)

#endif

#pragma pop_macro("ComGoogleCommonCollectEnumHashBiMap_INCLUDE_ALL")
