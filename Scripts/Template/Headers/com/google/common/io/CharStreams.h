//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/tmp/j2objc/guava/sources/com/google/common/io/CharStreams.java
//

#include <j2objc/J2ObjC_header.h>

#pragma push_macro("ComGoogleCommonIoCharStreams_INCLUDE_ALL")
#if ComGoogleCommonIoCharStreams_RESTRICT
#define ComGoogleCommonIoCharStreams_INCLUDE_ALL 0
#else
#define ComGoogleCommonIoCharStreams_INCLUDE_ALL 1
#endif
#undef ComGoogleCommonIoCharStreams_RESTRICT

#if !defined (_ComGoogleCommonIoCharStreams_) && (ComGoogleCommonIoCharStreams_INCLUDE_ALL || ComGoogleCommonIoCharStreams_INCLUDE)
#define _ComGoogleCommonIoCharStreams_

@class JavaIoReader;
@class JavaIoWriter;
@protocol ComGoogleCommonIoLineProcessor;
@protocol JavaLangAppendable;
@protocol JavaLangReadable;
@protocol JavaUtilList;

@interface ComGoogleCommonIoCharStreams : NSObject

#pragma mark Public

+ (JavaIoWriter *)asWriterWithJavaLangAppendable:(id<JavaLangAppendable>)target;

+ (jlong)copy__WithJavaLangReadable:(id<JavaLangReadable>)from
             withJavaLangAppendable:(id<JavaLangAppendable>)to OBJC_METHOD_FAMILY_NONE;

+ (JavaIoWriter *)nullWriter;

+ (id<JavaUtilList>)readLinesWithJavaLangReadable:(id<JavaLangReadable>)r;

+ (id)readLinesWithJavaLangReadable:(id<JavaLangReadable>)readable
 withComGoogleCommonIoLineProcessor:(id<ComGoogleCommonIoLineProcessor>)processor;

+ (void)skipFullyWithJavaIoReader:(JavaIoReader *)reader
                         withLong:(jlong)n;

+ (NSString *)toStringWithJavaLangReadable:(id<JavaLangReadable>)r;

#pragma mark Package-Private

+ (JavaIoReader *)asReaderWithJavaLangReadable:(id<JavaLangReadable>)readable;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonIoCharStreams)

FOUNDATION_EXPORT jlong ComGoogleCommonIoCharStreams_copy__WithJavaLangReadable_withJavaLangAppendable_(id<JavaLangReadable> from, id<JavaLangAppendable> to);

FOUNDATION_EXPORT NSString *ComGoogleCommonIoCharStreams_toStringWithJavaLangReadable_(id<JavaLangReadable> r);

FOUNDATION_EXPORT id<JavaUtilList> ComGoogleCommonIoCharStreams_readLinesWithJavaLangReadable_(id<JavaLangReadable> r);

FOUNDATION_EXPORT id ComGoogleCommonIoCharStreams_readLinesWithJavaLangReadable_withComGoogleCommonIoLineProcessor_(id<JavaLangReadable> readable, id<ComGoogleCommonIoLineProcessor> processor);

FOUNDATION_EXPORT void ComGoogleCommonIoCharStreams_skipFullyWithJavaIoReader_withLong_(JavaIoReader *reader, jlong n);

FOUNDATION_EXPORT JavaIoWriter *ComGoogleCommonIoCharStreams_nullWriter();

FOUNDATION_EXPORT JavaIoWriter *ComGoogleCommonIoCharStreams_asWriterWithJavaLangAppendable_(id<JavaLangAppendable> target);

FOUNDATION_EXPORT JavaIoReader *ComGoogleCommonIoCharStreams_asReaderWithJavaLangReadable_(id<JavaLangReadable> readable);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonIoCharStreams)

#endif

#pragma pop_macro("ComGoogleCommonIoCharStreams_INCLUDE_ALL")
