//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/tmp/j2objc/guava/sources/com/google/common/base/Verify.java
//

#include <j2objc/J2ObjC_header.h>

#pragma push_macro("ComGoogleCommonBaseVerify_INCLUDE_ALL")
#if ComGoogleCommonBaseVerify_RESTRICT
#define ComGoogleCommonBaseVerify_INCLUDE_ALL 0
#else
#define ComGoogleCommonBaseVerify_INCLUDE_ALL 1
#endif
#undef ComGoogleCommonBaseVerify_RESTRICT

#if !defined (_ComGoogleCommonBaseVerify_) && (ComGoogleCommonBaseVerify_INCLUDE_ALL || ComGoogleCommonBaseVerify_INCLUDE)
#define _ComGoogleCommonBaseVerify_

@class IOSObjectArray;

@interface ComGoogleCommonBaseVerify : NSObject

#pragma mark Public

+ (void)verifyWithBoolean:(jboolean)expression;

+ (void)verifyWithBoolean:(jboolean)expression
             withNSString:(NSString *)errorMessageTemplate
        withNSObjectArray:(IOSObjectArray *)errorMessageArgs;

+ (id)verifyNotNullWithId:(id)reference;

+ (id)verifyNotNullWithId:(id)reference
             withNSString:(NSString *)errorMessageTemplate
        withNSObjectArray:(IOSObjectArray *)errorMessageArgs;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonBaseVerify)

FOUNDATION_EXPORT void ComGoogleCommonBaseVerify_verifyWithBoolean_(jboolean expression);

FOUNDATION_EXPORT void ComGoogleCommonBaseVerify_verifyWithBoolean_withNSString_withNSObjectArray_(jboolean expression, NSString *errorMessageTemplate, IOSObjectArray *errorMessageArgs);

FOUNDATION_EXPORT id ComGoogleCommonBaseVerify_verifyNotNullWithId_(id reference);

FOUNDATION_EXPORT id ComGoogleCommonBaseVerify_verifyNotNullWithId_withNSString_withNSObjectArray_(id reference, NSString *errorMessageTemplate, IOSObjectArray *errorMessageArgs);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonBaseVerify)

#endif

#pragma pop_macro("ComGoogleCommonBaseVerify_INCLUDE_ALL")
