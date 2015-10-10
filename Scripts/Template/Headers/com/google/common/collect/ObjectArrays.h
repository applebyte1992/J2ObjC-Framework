//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/tmp/j2objc/guava/sources/com/google/common/collect/ObjectArrays.java
//

#include <j2objc/J2ObjC_header.h>

#pragma push_macro("ComGoogleCommonCollectObjectArrays_INCLUDE_ALL")
#if ComGoogleCommonCollectObjectArrays_RESTRICT
#define ComGoogleCommonCollectObjectArrays_INCLUDE_ALL 0
#else
#define ComGoogleCommonCollectObjectArrays_INCLUDE_ALL 1
#endif
#undef ComGoogleCommonCollectObjectArrays_RESTRICT

#if !defined (_ComGoogleCommonCollectObjectArrays_) && (ComGoogleCommonCollectObjectArrays_INCLUDE_ALL || ComGoogleCommonCollectObjectArrays_INCLUDE)
#define _ComGoogleCommonCollectObjectArrays_

@class IOSClass;
@class IOSObjectArray;
@protocol JavaUtilCollection;

@interface ComGoogleCommonCollectObjectArrays : NSObject

#pragma mark Public

+ (IOSObjectArray *)concatWithId:(id)element
               withNSObjectArray:(IOSObjectArray *)array;

+ (IOSObjectArray *)concatWithNSObjectArray:(IOSObjectArray *)array
                                     withId:(id)element;

+ (IOSObjectArray *)concatWithNSObjectArray:(IOSObjectArray *)first
                          withNSObjectArray:(IOSObjectArray *)second
                               withIOSClass:(IOSClass *)type;

+ (IOSObjectArray *)newArrayWithIOSClass:(IOSClass *)type
                                 withInt:(jint)length OBJC_METHOD_FAMILY_NONE;

+ (IOSObjectArray *)newArrayWithNSObjectArray:(IOSObjectArray *)reference
                                      withInt:(jint)length OBJC_METHOD_FAMILY_NONE;

#pragma mark Package-Private

+ (IOSObjectArray *)arraysCopyOfWithNSObjectArray:(IOSObjectArray *)original
                                          withInt:(jint)newLength;

+ (id)checkElementNotNullWithId:(id)element
                        withInt:(jint)index;

+ (IOSObjectArray *)checkElementsNotNullWithNSObjectArray:(IOSObjectArray *)array;

+ (IOSObjectArray *)checkElementsNotNullWithNSObjectArray:(IOSObjectArray *)array
                                                  withInt:(jint)length;

+ (IOSObjectArray *)copyAsObjectArrayWithNSObjectArray:(IOSObjectArray *)elements
                                               withInt:(jint)offset
                                               withInt:(jint)length OBJC_METHOD_FAMILY_NONE;

+ (void)swapWithNSObjectArray:(IOSObjectArray *)array
                      withInt:(jint)i
                      withInt:(jint)j;

+ (IOSObjectArray *)toArrayImplWithJavaUtilCollection:(id<JavaUtilCollection>)c;

+ (IOSObjectArray *)toArrayImplWithJavaUtilCollection:(id<JavaUtilCollection>)c
                                    withNSObjectArray:(IOSObjectArray *)array;

+ (IOSObjectArray *)toArrayImplWithNSObjectArray:(IOSObjectArray *)src
                                         withInt:(jint)offset
                                         withInt:(jint)len
                               withNSObjectArray:(IOSObjectArray *)dst;

@end

J2OBJC_STATIC_INIT(ComGoogleCommonCollectObjectArrays)

FOUNDATION_EXPORT IOSObjectArray *ComGoogleCommonCollectObjectArrays_EMPTY_ARRAY_;
J2OBJC_STATIC_FIELD_GETTER(ComGoogleCommonCollectObjectArrays, EMPTY_ARRAY_, IOSObjectArray *)

FOUNDATION_EXPORT IOSObjectArray *ComGoogleCommonCollectObjectArrays_newArrayWithIOSClass_withInt_(IOSClass *type, jint length);

FOUNDATION_EXPORT IOSObjectArray *ComGoogleCommonCollectObjectArrays_newArrayWithNSObjectArray_withInt_(IOSObjectArray *reference, jint length);

FOUNDATION_EXPORT IOSObjectArray *ComGoogleCommonCollectObjectArrays_concatWithNSObjectArray_withNSObjectArray_withIOSClass_(IOSObjectArray *first, IOSObjectArray *second, IOSClass *type);

FOUNDATION_EXPORT IOSObjectArray *ComGoogleCommonCollectObjectArrays_concatWithId_withNSObjectArray_(id element, IOSObjectArray *array);

FOUNDATION_EXPORT IOSObjectArray *ComGoogleCommonCollectObjectArrays_concatWithNSObjectArray_withId_(IOSObjectArray *array, id element);

FOUNDATION_EXPORT IOSObjectArray *ComGoogleCommonCollectObjectArrays_arraysCopyOfWithNSObjectArray_withInt_(IOSObjectArray *original, jint newLength);

FOUNDATION_EXPORT IOSObjectArray *ComGoogleCommonCollectObjectArrays_toArrayImplWithJavaUtilCollection_withNSObjectArray_(id<JavaUtilCollection> c, IOSObjectArray *array);

FOUNDATION_EXPORT IOSObjectArray *ComGoogleCommonCollectObjectArrays_toArrayImplWithNSObjectArray_withInt_withInt_withNSObjectArray_(IOSObjectArray *src, jint offset, jint len, IOSObjectArray *dst);

FOUNDATION_EXPORT IOSObjectArray *ComGoogleCommonCollectObjectArrays_toArrayImplWithJavaUtilCollection_(id<JavaUtilCollection> c);

FOUNDATION_EXPORT IOSObjectArray *ComGoogleCommonCollectObjectArrays_copyAsObjectArrayWithNSObjectArray_withInt_withInt_(IOSObjectArray *elements, jint offset, jint length);

FOUNDATION_EXPORT void ComGoogleCommonCollectObjectArrays_swapWithNSObjectArray_withInt_withInt_(IOSObjectArray *array, jint i, jint j);

FOUNDATION_EXPORT IOSObjectArray *ComGoogleCommonCollectObjectArrays_checkElementsNotNullWithNSObjectArray_(IOSObjectArray *array);

FOUNDATION_EXPORT IOSObjectArray *ComGoogleCommonCollectObjectArrays_checkElementsNotNullWithNSObjectArray_withInt_(IOSObjectArray *array, jint length);

FOUNDATION_EXPORT id ComGoogleCommonCollectObjectArrays_checkElementNotNullWithId_withInt_(id element, jint index);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectObjectArrays)

#endif

#pragma pop_macro("ComGoogleCommonCollectObjectArrays_INCLUDE_ALL")
