//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/tmp/j2objc/guava/sources/com/google/common/cache/ForwardingCache.java
//

#include <j2objc/J2ObjC_header.h>

#pragma push_macro("ComGoogleCommonCacheForwardingCache_INCLUDE_ALL")
#if ComGoogleCommonCacheForwardingCache_RESTRICT
#define ComGoogleCommonCacheForwardingCache_INCLUDE_ALL 0
#else
#define ComGoogleCommonCacheForwardingCache_INCLUDE_ALL 1
#endif
#undef ComGoogleCommonCacheForwardingCache_RESTRICT
#if ComGoogleCommonCacheForwardingCache_SimpleForwardingCache_INCLUDE
#define ComGoogleCommonCacheForwardingCache_INCLUDE 1
#endif

#if !defined (_ComGoogleCommonCacheForwardingCache_) && (ComGoogleCommonCacheForwardingCache_INCLUDE_ALL || ComGoogleCommonCacheForwardingCache_INCLUDE)
#define _ComGoogleCommonCacheForwardingCache_

#define ComGoogleCommonCollectForwardingObject_RESTRICT 1
#define ComGoogleCommonCollectForwardingObject_INCLUDE 1
#include <j2objc/com/google/common/collect/ForwardingObject.h>

#define ComGoogleCommonCacheCache_RESTRICT 1
#define ComGoogleCommonCacheCache_INCLUDE 1
#include <j2objc/com/google/common/cache/Cache.h>

@class ComGoogleCommonCacheCacheStats;
@class ComGoogleCommonCollectImmutableMap;
@protocol JavaLangIterable;
@protocol JavaUtilConcurrentCallable;
@protocol JavaUtilConcurrentConcurrentMap;
@protocol JavaUtilMap;

@interface ComGoogleCommonCacheForwardingCache : ComGoogleCommonCollectForwardingObject < ComGoogleCommonCacheCache >

#pragma mark Public

- (id<JavaUtilConcurrentConcurrentMap>)asMap;

- (void)cleanUp;

- (id)getWithId:(id)key
withJavaUtilConcurrentCallable:(id<JavaUtilConcurrentCallable>)valueLoader;

- (ComGoogleCommonCollectImmutableMap *)getAllPresentWithJavaLangIterable:(id<JavaLangIterable>)keys;

- (id)getIfPresentWithId:(id)key;

- (void)invalidateWithId:(id)key;

- (void)invalidateAll;

- (void)invalidateAllWithJavaLangIterable:(id<JavaLangIterable>)keys;

- (void)putWithId:(id)key
           withId:(id)value;

- (void)putAllWithJavaUtilMap:(id<JavaUtilMap>)m;

- (jlong)size;

- (ComGoogleCommonCacheCacheStats *)stats;

#pragma mark Protected

- (instancetype)init;

- (id<ComGoogleCommonCacheCache>)delegate;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCacheForwardingCache)

FOUNDATION_EXPORT void ComGoogleCommonCacheForwardingCache_init(ComGoogleCommonCacheForwardingCache *self);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCacheForwardingCache)

#endif

#if !defined (_ComGoogleCommonCacheForwardingCache_SimpleForwardingCache_) && (ComGoogleCommonCacheForwardingCache_INCLUDE_ALL || ComGoogleCommonCacheForwardingCache_SimpleForwardingCache_INCLUDE)
#define _ComGoogleCommonCacheForwardingCache_SimpleForwardingCache_

@protocol ComGoogleCommonCacheCache;

@interface ComGoogleCommonCacheForwardingCache_SimpleForwardingCache : ComGoogleCommonCacheForwardingCache

#pragma mark Protected

- (instancetype)initWithComGoogleCommonCacheCache:(id<ComGoogleCommonCacheCache>)delegate;

- (id<ComGoogleCommonCacheCache>)delegate;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCacheForwardingCache_SimpleForwardingCache)

FOUNDATION_EXPORT void ComGoogleCommonCacheForwardingCache_SimpleForwardingCache_initWithComGoogleCommonCacheCache_(ComGoogleCommonCacheForwardingCache_SimpleForwardingCache *self, id<ComGoogleCommonCacheCache> delegate);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCacheForwardingCache_SimpleForwardingCache)

#endif

#pragma pop_macro("ComGoogleCommonCacheForwardingCache_INCLUDE_ALL")
