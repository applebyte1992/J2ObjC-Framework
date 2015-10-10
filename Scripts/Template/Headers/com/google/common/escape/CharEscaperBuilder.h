//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/tmp/j2objc/guava/sources/com/google/common/escape/CharEscaperBuilder.java
//

#include <j2objc/J2ObjC_header.h>

#pragma push_macro("ComGoogleCommonEscapeCharEscaperBuilder_INCLUDE_ALL")
#if ComGoogleCommonEscapeCharEscaperBuilder_RESTRICT
#define ComGoogleCommonEscapeCharEscaperBuilder_INCLUDE_ALL 0
#else
#define ComGoogleCommonEscapeCharEscaperBuilder_INCLUDE_ALL 1
#endif
#undef ComGoogleCommonEscapeCharEscaperBuilder_RESTRICT

#if !defined (_ComGoogleCommonEscapeCharEscaperBuilder_) && (ComGoogleCommonEscapeCharEscaperBuilder_INCLUDE_ALL || ComGoogleCommonEscapeCharEscaperBuilder_INCLUDE)
#define _ComGoogleCommonEscapeCharEscaperBuilder_

@class ComGoogleCommonEscapeEscaper;
@class IOSCharArray;
@class IOSObjectArray;

@interface ComGoogleCommonEscapeCharEscaperBuilder : NSObject

#pragma mark Public

- (instancetype)init;

- (ComGoogleCommonEscapeCharEscaperBuilder *)addEscapeWithChar:(jchar)c
                                                  withNSString:(NSString *)r;

- (ComGoogleCommonEscapeCharEscaperBuilder *)addEscapesWithCharArray:(IOSCharArray *)cs
                                                        withNSString:(NSString *)r;

- (IOSObjectArray *)toArray;

- (ComGoogleCommonEscapeEscaper *)toEscaper;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonEscapeCharEscaperBuilder)

FOUNDATION_EXPORT void ComGoogleCommonEscapeCharEscaperBuilder_init(ComGoogleCommonEscapeCharEscaperBuilder *self);

FOUNDATION_EXPORT ComGoogleCommonEscapeCharEscaperBuilder *new_ComGoogleCommonEscapeCharEscaperBuilder_init() NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonEscapeCharEscaperBuilder)

#endif

#pragma pop_macro("ComGoogleCommonEscapeCharEscaperBuilder_INCLUDE_ALL")
