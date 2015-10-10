//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/tmp/j2objc/guava/sources/com/google/common/escape/Escapers.java
//

#include <j2objc/J2ObjC_header.h>

#pragma push_macro("ComGoogleCommonEscapeEscapers_INCLUDE_ALL")
#if ComGoogleCommonEscapeEscapers_RESTRICT
#define ComGoogleCommonEscapeEscapers_INCLUDE_ALL 0
#else
#define ComGoogleCommonEscapeEscapers_INCLUDE_ALL 1
#endif
#undef ComGoogleCommonEscapeEscapers_RESTRICT

#if !defined (_ComGoogleCommonEscapeEscapers_) && (ComGoogleCommonEscapeEscapers_INCLUDE_ALL || ComGoogleCommonEscapeEscapers_INCLUDE)
#define _ComGoogleCommonEscapeEscapers_

@class ComGoogleCommonEscapeCharEscaper;
@class ComGoogleCommonEscapeEscaper;
@class ComGoogleCommonEscapeEscapers_Builder;
@class ComGoogleCommonEscapeUnicodeEscaper;

@interface ComGoogleCommonEscapeEscapers : NSObject

#pragma mark Public

+ (ComGoogleCommonEscapeEscapers_Builder *)builder;

+ (NSString *)computeReplacementWithComGoogleCommonEscapeCharEscaper:(ComGoogleCommonEscapeCharEscaper *)escaper
                                                            withChar:(jchar)c;

+ (NSString *)computeReplacementWithComGoogleCommonEscapeUnicodeEscaper:(ComGoogleCommonEscapeUnicodeEscaper *)escaper
                                                                withInt:(jint)cp;

+ (ComGoogleCommonEscapeEscaper *)nullEscaper;

#pragma mark Package-Private

+ (ComGoogleCommonEscapeUnicodeEscaper *)asUnicodeEscaperWithComGoogleCommonEscapeEscaper:(ComGoogleCommonEscapeEscaper *)escaper;

@end

J2OBJC_STATIC_INIT(ComGoogleCommonEscapeEscapers)

FOUNDATION_EXPORT ComGoogleCommonEscapeEscaper *ComGoogleCommonEscapeEscapers_nullEscaper();

FOUNDATION_EXPORT ComGoogleCommonEscapeEscapers_Builder *ComGoogleCommonEscapeEscapers_builder();

FOUNDATION_EXPORT ComGoogleCommonEscapeUnicodeEscaper *ComGoogleCommonEscapeEscapers_asUnicodeEscaperWithComGoogleCommonEscapeEscaper_(ComGoogleCommonEscapeEscaper *escaper);

FOUNDATION_EXPORT NSString *ComGoogleCommonEscapeEscapers_computeReplacementWithComGoogleCommonEscapeCharEscaper_withChar_(ComGoogleCommonEscapeCharEscaper *escaper, jchar c);

FOUNDATION_EXPORT NSString *ComGoogleCommonEscapeEscapers_computeReplacementWithComGoogleCommonEscapeUnicodeEscaper_withInt_(ComGoogleCommonEscapeUnicodeEscaper *escaper, jint cp);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonEscapeEscapers)

#endif

#if !defined (_ComGoogleCommonEscapeEscapers_Builder_) && (ComGoogleCommonEscapeEscapers_INCLUDE_ALL || ComGoogleCommonEscapeEscapers_Builder_INCLUDE)
#define _ComGoogleCommonEscapeEscapers_Builder_

@class ComGoogleCommonEscapeEscaper;

@interface ComGoogleCommonEscapeEscapers_Builder : NSObject

#pragma mark Public

- (ComGoogleCommonEscapeEscapers_Builder *)addEscapeWithChar:(jchar)c
                                                withNSString:(NSString *)replacement;

- (ComGoogleCommonEscapeEscaper *)build;

- (ComGoogleCommonEscapeEscapers_Builder *)setSafeRangeWithChar:(jchar)safeMin
                                                       withChar:(jchar)safeMax;

- (ComGoogleCommonEscapeEscapers_Builder *)setUnsafeReplacementWithNSString:(NSString *)unsafeReplacement;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonEscapeEscapers_Builder)

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonEscapeEscapers_Builder)

#endif

#pragma pop_macro("ComGoogleCommonEscapeEscapers_INCLUDE_ALL")
