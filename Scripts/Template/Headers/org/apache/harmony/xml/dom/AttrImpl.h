//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/org/apache/harmony/xml/dom/AttrImpl.java
//

#ifndef _OrgApacheHarmonyXmlDomAttrImpl_H_
#define _OrgApacheHarmonyXmlDomAttrImpl_H_

#include <j2objc/J2ObjC_header.h>
#include <j2objc/org/apache/harmony/xml/dom/NodeImpl.h>
#include <j2objc/org/w3c/dom/Attr.h>

@class OrgApacheHarmonyXmlDomDocumentImpl;
@class OrgApacheHarmonyXmlDomElementImpl;
@protocol OrgW3cDomElement;
@protocol OrgW3cDomTypeInfo;

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
@interface OrgApacheHarmonyXmlDomAttrImpl : OrgApacheHarmonyXmlDomNodeImpl < OrgW3cDomAttr > {
 @public
  OrgApacheHarmonyXmlDomElementImpl *ownerElement_;
  jboolean isId_;
  jboolean namespaceAware_;
  NSString *namespaceURI_;
  NSString *prefix_;
  NSString *localName_;
}

#pragma mark Public

- (NSString *)getLocalName;

- (NSString *)getName;

- (NSString *)getNamespaceURI;

- (NSString *)getNodeName;

- (jshort)getNodeType;

- (NSString *)getNodeValue;

- (id<OrgW3cDomElement>)getOwnerElement;

- (NSString *)getPrefix;

- (id<OrgW3cDomTypeInfo>)getSchemaTypeInfo;

- (jboolean)getSpecified;

- (NSString *)getValue;

- (jboolean)isId;

- (void)setPrefixWithNSString:(NSString *)prefix;

- (void)setValueWithNSString:(NSString *)value;

#pragma mark Package-Private

- (instancetype)initWithOrgApacheHarmonyXmlDomDocumentImpl:(OrgApacheHarmonyXmlDomDocumentImpl *)document
                                              withNSString:(NSString *)name;

- (instancetype)initWithOrgApacheHarmonyXmlDomDocumentImpl:(OrgApacheHarmonyXmlDomDocumentImpl *)document
                                              withNSString:(NSString *)namespaceURI
                                              withNSString:(NSString *)qualifiedName;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgApacheHarmonyXmlDomAttrImpl)

J2OBJC_FIELD_SETTER(OrgApacheHarmonyXmlDomAttrImpl, ownerElement_, OrgApacheHarmonyXmlDomElementImpl *)
J2OBJC_FIELD_SETTER(OrgApacheHarmonyXmlDomAttrImpl, namespaceURI_, NSString *)
J2OBJC_FIELD_SETTER(OrgApacheHarmonyXmlDomAttrImpl, prefix_, NSString *)
J2OBJC_FIELD_SETTER(OrgApacheHarmonyXmlDomAttrImpl, localName_, NSString *)

FOUNDATION_EXPORT void OrgApacheHarmonyXmlDomAttrImpl_initWithOrgApacheHarmonyXmlDomDocumentImpl_withNSString_withNSString_(OrgApacheHarmonyXmlDomAttrImpl *self, OrgApacheHarmonyXmlDomDocumentImpl *document, NSString *namespaceURI, NSString *qualifiedName);

FOUNDATION_EXPORT OrgApacheHarmonyXmlDomAttrImpl *new_OrgApacheHarmonyXmlDomAttrImpl_initWithOrgApacheHarmonyXmlDomDocumentImpl_withNSString_withNSString_(OrgApacheHarmonyXmlDomDocumentImpl *document, NSString *namespaceURI, NSString *qualifiedName) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void OrgApacheHarmonyXmlDomAttrImpl_initWithOrgApacheHarmonyXmlDomDocumentImpl_withNSString_(OrgApacheHarmonyXmlDomAttrImpl *self, OrgApacheHarmonyXmlDomDocumentImpl *document, NSString *name);

FOUNDATION_EXPORT OrgApacheHarmonyXmlDomAttrImpl *new_OrgApacheHarmonyXmlDomAttrImpl_initWithOrgApacheHarmonyXmlDomDocumentImpl_withNSString_(OrgApacheHarmonyXmlDomDocumentImpl *document, NSString *name) NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(OrgApacheHarmonyXmlDomAttrImpl)

#endif // _OrgApacheHarmonyXmlDomAttrImpl_H_
