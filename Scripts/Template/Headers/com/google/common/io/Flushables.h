//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/tmp/j2objc/guava/sources/com/google/common/io/Flushables.java
//

#include <j2objc/J2ObjC_header.h>

#pragma push_macro("ComGoogleCommonIoFlushables_INCLUDE_ALL")
#if ComGoogleCommonIoFlushables_RESTRICT
#define ComGoogleCommonIoFlushables_INCLUDE_ALL 0
#else
#define ComGoogleCommonIoFlushables_INCLUDE_ALL 1
#endif
#undef ComGoogleCommonIoFlushables_RESTRICT

#if !defined (_ComGoogleCommonIoFlushables_) && (ComGoogleCommonIoFlushables_INCLUDE_ALL || ComGoogleCommonIoFlushables_INCLUDE)
#define _ComGoogleCommonIoFlushables_

@protocol JavaIoFlushable;

@interface ComGoogleCommonIoFlushables : NSObject

#pragma mark Public

+ (void)flushWithJavaIoFlushable:(id<JavaIoFlushable>)flushable
                     withBoolean:(jboolean)swallowIOException;

+ (void)flushQuietlyWithJavaIoFlushable:(id<JavaIoFlushable>)flushable;

@end

J2OBJC_STATIC_INIT(ComGoogleCommonIoFlushables)

FOUNDATION_EXPORT void ComGoogleCommonIoFlushables_flushWithJavaIoFlushable_withBoolean_(id<JavaIoFlushable> flushable, jboolean swallowIOException);

FOUNDATION_EXPORT void ComGoogleCommonIoFlushables_flushQuietlyWithJavaIoFlushable_(id<JavaIoFlushable> flushable);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonIoFlushables)

#endif

#pragma pop_macro("ComGoogleCommonIoFlushables_INCLUDE_ALL")
