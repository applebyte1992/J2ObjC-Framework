//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/tmp/j2objc/guava/sources/com/google/common/xml/XmlEscapers.java
//

#include <j2objc/J2ObjC_header.h>

#pragma push_macro("ComGoogleCommonXmlXmlEscapers_INCLUDE_ALL")
#if ComGoogleCommonXmlXmlEscapers_RESTRICT
#define ComGoogleCommonXmlXmlEscapers_INCLUDE_ALL 0
#else
#define ComGoogleCommonXmlXmlEscapers_INCLUDE_ALL 1
#endif
#undef ComGoogleCommonXmlXmlEscapers_RESTRICT

#if !defined (_ComGoogleCommonXmlXmlEscapers_) && (ComGoogleCommonXmlXmlEscapers_INCLUDE_ALL || ComGoogleCommonXmlXmlEscapers_INCLUDE)
#define _ComGoogleCommonXmlXmlEscapers_

@class ComGoogleCommonEscapeEscaper;

@interface ComGoogleCommonXmlXmlEscapers : NSObject

#pragma mark Public

+ (ComGoogleCommonEscapeEscaper *)xmlAttributeEscaper;

+ (ComGoogleCommonEscapeEscaper *)xmlContentEscaper;

@end

J2OBJC_STATIC_INIT(ComGoogleCommonXmlXmlEscapers)

FOUNDATION_EXPORT ComGoogleCommonEscapeEscaper *ComGoogleCommonXmlXmlEscapers_xmlContentEscaper();

FOUNDATION_EXPORT ComGoogleCommonEscapeEscaper *ComGoogleCommonXmlXmlEscapers_xmlAttributeEscaper();

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonXmlXmlEscapers)

#endif

#pragma pop_macro("ComGoogleCommonXmlXmlEscapers_INCLUDE_ALL")
