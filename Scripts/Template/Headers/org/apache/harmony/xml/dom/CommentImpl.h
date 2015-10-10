//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/org/apache/harmony/xml/dom/CommentImpl.java
//

#ifndef _OrgApacheHarmonyXmlDomCommentImpl_H_
#define _OrgApacheHarmonyXmlDomCommentImpl_H_

#include <j2objc/J2ObjC_header.h>
#include <j2objc/org/apache/harmony/xml/dom/CharacterDataImpl.h>
#include <j2objc/org/w3c/dom/Comment.h>

@class OrgApacheHarmonyXmlDomDocumentImpl;

/*!
 @brief Provides a straightforward implementation of the corresponding W3C DOM
 interface.
 The class is used internally only, thus only notable members that
 are not in the original interface are documented (the W3C docs are quite
 extensive). Hope that's ok.
 <p>
 Some of the fields may have package visibility, so other classes belonging to
 the DOM implementation can easily access them while maintaining the DOM tree
 structure.
 */
@interface OrgApacheHarmonyXmlDomCommentImpl : OrgApacheHarmonyXmlDomCharacterDataImpl < OrgW3cDomComment >

#pragma mark Public

/*!
 @brief Returns true if this comment contains the illegal character sequence
 "--".
 Such nodes may not be serialized.
 */
- (jboolean)containsDashDash;

- (NSString *)getNodeName;

- (jshort)getNodeType;

#pragma mark Package-Private

- (instancetype)initWithOrgApacheHarmonyXmlDomDocumentImpl:(OrgApacheHarmonyXmlDomDocumentImpl *)document
                                              withNSString:(NSString *)data;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgApacheHarmonyXmlDomCommentImpl)

FOUNDATION_EXPORT void OrgApacheHarmonyXmlDomCommentImpl_initWithOrgApacheHarmonyXmlDomDocumentImpl_withNSString_(OrgApacheHarmonyXmlDomCommentImpl *self, OrgApacheHarmonyXmlDomDocumentImpl *document, NSString *data);

FOUNDATION_EXPORT OrgApacheHarmonyXmlDomCommentImpl *new_OrgApacheHarmonyXmlDomCommentImpl_initWithOrgApacheHarmonyXmlDomDocumentImpl_withNSString_(OrgApacheHarmonyXmlDomDocumentImpl *document, NSString *data) NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(OrgApacheHarmonyXmlDomCommentImpl)

#endif // _OrgApacheHarmonyXmlDomCommentImpl_H_
