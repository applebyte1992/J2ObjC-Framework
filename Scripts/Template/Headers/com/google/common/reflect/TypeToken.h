//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/tmp/j2objc/guava/sources/com/google/common/reflect/TypeToken.java
//

#include <j2objc/J2ObjC_header.h>

#pragma push_macro("ComGoogleCommonReflectTypeToken_INCLUDE_ALL")
#if ComGoogleCommonReflectTypeToken_RESTRICT
#define ComGoogleCommonReflectTypeToken_INCLUDE_ALL 0
#else
#define ComGoogleCommonReflectTypeToken_INCLUDE_ALL 1
#endif
#undef ComGoogleCommonReflectTypeToken_RESTRICT

#if !defined (_ComGoogleCommonReflectTypeToken_) && (ComGoogleCommonReflectTypeToken_INCLUDE_ALL || ComGoogleCommonReflectTypeToken_INCLUDE)
#define _ComGoogleCommonReflectTypeToken_

#define ComGoogleCommonReflectTypeCapture_RESTRICT 1
#define ComGoogleCommonReflectTypeCapture_INCLUDE 1
#include <j2objc/com/google/common/reflect/TypeCapture.h>

#define JavaIoSerializable_RESTRICT 1
#define JavaIoSerializable_INCLUDE 1
#include <j2objc/java/io/Serializable.h>

@class ComGoogleCommonCollectImmutableList;
@class ComGoogleCommonCollectImmutableSet;
@class ComGoogleCommonReflectInvokable;
@class ComGoogleCommonReflectTypeParameter;
@class ComGoogleCommonReflectTypeToken_TypeSet;
@class IOSClass;
@class JavaLangReflectConstructor;
@class JavaLangReflectMethod;
@protocol JavaLangReflectType;

@interface ComGoogleCommonReflectTypeToken : ComGoogleCommonReflectTypeCapture < JavaIoSerializable >

#pragma mark Public

- (ComGoogleCommonReflectInvokable *)constructorWithJavaLangReflectConstructor:(JavaLangReflectConstructor *)constructor;

- (jboolean)isEqual:(id)o;

- (ComGoogleCommonReflectTypeToken *)getComponentType;

- (IOSClass *)getRawType;

- (ComGoogleCommonReflectTypeToken *)getSubtypeWithIOSClass:(IOSClass *)subclass;

- (ComGoogleCommonReflectTypeToken *)getSupertypeWithIOSClass:(IOSClass *)superclass_;

- (id<JavaLangReflectType>)getType;

- (ComGoogleCommonReflectTypeToken_TypeSet *)getTypes;

- (NSUInteger)hash;

- (jboolean)isArray;

- (jboolean)isAssignableFromWithJavaLangReflectType:(id<JavaLangReflectType>)type;

- (jboolean)isAssignableFromWithComGoogleCommonReflectTypeToken:(ComGoogleCommonReflectTypeToken *)type;

- (jboolean)isPrimitive;

- (ComGoogleCommonReflectInvokable *)methodWithJavaLangReflectMethod:(JavaLangReflectMethod *)method;

+ (ComGoogleCommonReflectTypeToken *)ofWithIOSClass:(IOSClass *)type;

+ (ComGoogleCommonReflectTypeToken *)ofWithJavaLangReflectType:(id<JavaLangReflectType>)type;

- (ComGoogleCommonReflectTypeToken *)resolveTypeWithJavaLangReflectType:(id<JavaLangReflectType>)type;

- (NSString *)description;

- (ComGoogleCommonReflectTypeToken *)unwrap;

- (ComGoogleCommonReflectTypeToken *)whereWithComGoogleCommonReflectTypeParameter:(ComGoogleCommonReflectTypeParameter *)typeParam
                                                                     withIOSClass:(IOSClass *)typeArg;

- (ComGoogleCommonReflectTypeToken *)whereWithComGoogleCommonReflectTypeParameter:(ComGoogleCommonReflectTypeParameter *)typeParam
                                              withComGoogleCommonReflectTypeToken:(ComGoogleCommonReflectTypeToken *)typeArg;

- (ComGoogleCommonReflectTypeToken *)wrap;

#pragma mark Protected

- (instancetype)init;

- (instancetype)initWithIOSClass:(IOSClass *)declaringClass;

- (id)writeReplace;

#pragma mark Package-Private

- (ComGoogleCommonCollectImmutableList *)getGenericInterfaces;

- (ComGoogleCommonReflectTypeToken *)getGenericSuperclass;

+ (IOSClass *)getRawTypeWithJavaLangReflectType:(id<JavaLangReflectType>)type;

+ (ComGoogleCommonCollectImmutableSet *)getRawTypesWithJavaLangReflectType:(id<JavaLangReflectType>)type;

- (ComGoogleCommonReflectTypeToken *)rejectTypeVariables;

+ (ComGoogleCommonReflectTypeToken *)toGenericTypeWithIOSClass:(IOSClass *)cls;

@end

J2OBJC_STATIC_INIT(ComGoogleCommonReflectTypeToken)

FOUNDATION_EXPORT void ComGoogleCommonReflectTypeToken_init(ComGoogleCommonReflectTypeToken *self);

FOUNDATION_EXPORT void ComGoogleCommonReflectTypeToken_initWithIOSClass_(ComGoogleCommonReflectTypeToken *self, IOSClass *declaringClass);

FOUNDATION_EXPORT ComGoogleCommonReflectTypeToken *ComGoogleCommonReflectTypeToken_ofWithIOSClass_(IOSClass *type);

FOUNDATION_EXPORT ComGoogleCommonReflectTypeToken *ComGoogleCommonReflectTypeToken_ofWithJavaLangReflectType_(id<JavaLangReflectType> type);

FOUNDATION_EXPORT IOSClass *ComGoogleCommonReflectTypeToken_getRawTypeWithJavaLangReflectType_(id<JavaLangReflectType> type);

FOUNDATION_EXPORT ComGoogleCommonCollectImmutableSet *ComGoogleCommonReflectTypeToken_getRawTypesWithJavaLangReflectType_(id<JavaLangReflectType> type);

FOUNDATION_EXPORT ComGoogleCommonReflectTypeToken *ComGoogleCommonReflectTypeToken_toGenericTypeWithIOSClass_(IOSClass *cls);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonReflectTypeToken)

#endif

#if !defined (_ComGoogleCommonReflectTypeToken_TypeSet_) && (ComGoogleCommonReflectTypeToken_INCLUDE_ALL || ComGoogleCommonReflectTypeToken_TypeSet_INCLUDE)
#define _ComGoogleCommonReflectTypeToken_TypeSet_

#define ComGoogleCommonCollectForwardingSet_RESTRICT 1
#define ComGoogleCommonCollectForwardingSet_INCLUDE 1
#include <j2objc/com/google/common/collect/ForwardingSet.h>

#define JavaIoSerializable_RESTRICT 1
#define JavaIoSerializable_INCLUDE 1
#include <j2objc/java/io/Serializable.h>

@class ComGoogleCommonReflectTypeToken;
@protocol JavaUtilSet;

@interface ComGoogleCommonReflectTypeToken_TypeSet : ComGoogleCommonCollectForwardingSet < JavaIoSerializable >

#pragma mark Public

- (ComGoogleCommonReflectTypeToken_TypeSet *)classes;

- (ComGoogleCommonReflectTypeToken_TypeSet *)interfaces;

- (id<JavaUtilSet>)rawTypes;

#pragma mark Protected

- (id<JavaUtilSet>)delegate;

#pragma mark Package-Private

- (instancetype)initWithComGoogleCommonReflectTypeToken:(ComGoogleCommonReflectTypeToken *)outer$;


@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonReflectTypeToken_TypeSet)

FOUNDATION_EXPORT void ComGoogleCommonReflectTypeToken_TypeSet_initWithComGoogleCommonReflectTypeToken_(ComGoogleCommonReflectTypeToken_TypeSet *self, ComGoogleCommonReflectTypeToken *outer$);

FOUNDATION_EXPORT ComGoogleCommonReflectTypeToken_TypeSet *new_ComGoogleCommonReflectTypeToken_TypeSet_initWithComGoogleCommonReflectTypeToken_(ComGoogleCommonReflectTypeToken *outer$) NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonReflectTypeToken_TypeSet)

#endif

#pragma pop_macro("ComGoogleCommonReflectTypeToken_INCLUDE_ALL")
