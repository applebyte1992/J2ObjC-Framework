//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/tmp/j2objc/guava/sources/com/google/common/collect/ClassToInstanceMap.java
//

#include <j2objc/J2ObjC_header.h>

#pragma push_macro("ComGoogleCommonCollectClassToInstanceMap_INCLUDE_ALL")
#if ComGoogleCommonCollectClassToInstanceMap_RESTRICT
#define ComGoogleCommonCollectClassToInstanceMap_INCLUDE_ALL 0
#else
#define ComGoogleCommonCollectClassToInstanceMap_INCLUDE_ALL 1
#endif
#undef ComGoogleCommonCollectClassToInstanceMap_RESTRICT

#if !defined (_ComGoogleCommonCollectClassToInstanceMap_) && (ComGoogleCommonCollectClassToInstanceMap_INCLUDE_ALL || ComGoogleCommonCollectClassToInstanceMap_INCLUDE)
#define _ComGoogleCommonCollectClassToInstanceMap_

#define JavaUtilMap_RESTRICT 1
#define JavaUtilMap_INCLUDE 1
#include <j2objc/java/util/Map.h>

@class IOSClass;

@protocol ComGoogleCommonCollectClassToInstanceMap < JavaUtilMap, NSObject, JavaObject >

- (id)getInstanceWithIOSClass:(IOSClass *)type;

- (id)putInstanceWithIOSClass:(IOSClass *)type
                       withId:(id)value;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectClassToInstanceMap)

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectClassToInstanceMap)

#endif

#pragma pop_macro("ComGoogleCommonCollectClassToInstanceMap_INCLUDE_ALL")
