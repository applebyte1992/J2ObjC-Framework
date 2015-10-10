//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/javax/xml/validation/ValidatorHandler.java
//

#ifndef _JavaxXmlValidationValidatorHandler_H_
#define _JavaxXmlValidationValidatorHandler_H_

#include <j2objc/J2ObjC_header.h>
#include <j2objc/org/xml/sax/ContentHandler.h>

@class JavaxXmlValidationTypeInfoProvider;
@protocol OrgW3cDomLsLSResourceResolver;
@protocol OrgXmlSaxErrorHandler;

/*!
 @brief Streaming validator that works on SAX stream.
 <p>
 A <code>ValidatorHandler</code> object is a thread-unsafe, non-reentrant object.
 In other words, it is the application's responsibility to make
 sure that one <code>ValidatorHandler</code> object is not used from
 more than one thread at any given time.
 <p>
 <code>ValidatorHandler</code> checks if the SAX events follow
 the set of constraints described in the associated <code>Schema</code>,
 and additionally it may modify the SAX events (for example
 by adding default values, etc.)
 <p>
 <code>ValidatorHandler</code> extends from <code>ContentHandler</code>,
 but it refines the underlying <code>ContentHandler</code> in
 the following way:
 <ol>
 <li>startElement/endElement events must receive non-null String
 for <code>uri</code>, <code>localName</code>, and <code>qname</code>,
 even though SAX allows some of them to be null.
 Similarly, the user-specified <code>ContentHandler</code> will receive non-null
 Strings for all three parameters.
 <li>Applications must ensure that <code>ValidatorHandler</code>'s
 <code>ContentHandler.startPrefixMapping(String,String)</code> and
 <code>ContentHandler.endPrefixMapping(String)</code> are invoked
 properly. Similarly, the user-specified <code>ContentHandler</code>
 will receive startPrefixMapping/endPrefixMapping events.
 If the <code>ValidatorHandler</code> introduces additional namespace
 bindings, the user-specified <code>ContentHandler</code> will receive
 additional startPrefixMapping/endPrefixMapping events.
 <li><code>org.xml.sax.Attributes</code> for the
 <code>ContentHandler.startElement(String,String,String,Attributes)</code> method
 may or may not include xmlns* attributes.
 </ol>
 <p>
 A <code>ValidatorHandler</code> is automatically reset every time
 the startDocument method is invoked.
 <h2>Recognized Properties and Features</h2>
 <p>
 This spec defines the following feature that must be recognized
 by all <code>ValidatorHandler</code> implementations.
 <h3><code>http://xml.org/sax/features/namespace-prefixes</code></h3>
 <p>
 This feature controls how a <code>ValidatorHandler</code> introduces
 namespace bindings that were not present in the original SAX event
 stream.
 When this feature is set to true, it must make
 sure that the user's <code>ContentHandler</code> will see
 the corresponding <code>xmlns*</code> attribute in
 the <code>org.xml.sax.Attributes</code> object of the
 <code>ContentHandler.startElement(String,String,String,Attributes)</code>
 callback. Otherwise, <code>xmlns*</code> attributes must not be
 added to <code>org.xml.sax.Attributes</code> that's passed to the
 user-specified <code>ContentHandler</code>.
 <p>
 (Note that regardless of this switch, namespace bindings are
 always notified to applications through
 <code>ContentHandler.startPrefixMapping(String,String)</code> and
 <code>ContentHandler.endPrefixMapping(String)</code> methods of the
 <code>ContentHandler</code> specified by the user.)
 <p>
 Note that this feature does <em>NOT</em> affect the way
 a <code>ValidatorHandler</code> receives SAX events. It merely
 changes the way it augments SAX events.
 <p>This feature is set to <code>false</code> by default.</p>
 @author <a href="mailto:Kohsuke.Kawaguchi@@Sun.com">Kohsuke Kawaguchi</a>
 @version $Revision: 446598 $, $Date: 2006-09-15 05:55:40 -0700 (Fri, 15 Sep 2006) $
 @since 1.5
 */
@interface JavaxXmlValidationValidatorHandler : NSObject < OrgXmlSaxContentHandler >

#pragma mark Public

/*!
 @brief Gets the <code>ContentHandler</code> which receives the
 augmented validation result.
 @return This method returns the object that was last set through
 the <code>getContentHandler()</code> method, or null
 if that method has never been called since this <code>ValidatorHandler</code>
 has created.
 */
- (id<OrgXmlSaxContentHandler>)getContentHandler;

/*!
 @brief Gets the current <code>ErrorHandler</code> set to this <code>ValidatorHandler</code>.
 @return This method returns the object that was last set through
 the <code>setErrorHandler(ErrorHandler)</code> method, or null
 if that method has never been called since this <code>ValidatorHandler</code>
 has created.
 */
- (id<OrgXmlSaxErrorHandler>)getErrorHandler;

/*!
 @brief Look up the value of a feature flag.
 <p>The feature name is any fully-qualified URI.  It is
 possible for a <code>ValidatorHandler</code> to recognize a feature name but
 temporarily be unable to return its value.
 Some feature values may be available only in specific
 contexts, such as before, during, or after a validation.
 <p>Implementors are free (and encouraged) to invent their own features,
 using names built on their own URIs.</p>
 @param name The feature name, which is a non-null fully-qualified URI.
 @return The current value of the feature (true or false).
 @exception org.xml.sax.SAXNotRecognizedException If the feature
 value can't be assigned or retrieved.
 @exception org.xml.sax.SAXNotSupportedException When the
 <code>ValidatorHandler</code> recognizes the feature name but
 cannot determine its value at this time.
 @throws NullPointerException
 When the name parameter is null.
 */
- (jboolean)getFeatureWithNSString:(NSString *)name;

/*!
 @brief Look up the value of a property.
 <p>The property name is any fully-qualified URI.  It is
 possible for a <code>ValidatorHandler</code> to recognize a property name but
 temporarily be unable to return its value.
 Some property values may be available only in specific
 contexts, such as before, during, or after a validation.</p>
 <p><code>ValidatorHandler</code>s are not required to recognize any specific
 property names.</p>
 <p>Implementors are free (and encouraged) to invent their own properties,
 using names built on their own URIs.</p>
 @param name The property name, which is a non-null fully-qualified URI.
 @return The current value of the property.
 @exception org.xml.sax.SAXNotRecognizedException If the property
 value can't be assigned or retrieved.
 @exception org.xml.sax.SAXNotSupportedException When the
 XMLReader recognizes the property name but
 cannot determine its value at this time.
 @throws NullPointerException
 When the name parameter is null.
 */
- (id)getPropertyWithNSString:(NSString *)name;

/*!
 @brief Gets the current <code>LSResourceResolver</code> set to this <code>ValidatorHandler</code>.
 @return This method returns the object that was last set through
 the <code>setResourceResolver(LSResourceResolver)</code> method, or null
 if that method has never been called since this <code>ValidatorHandler</code>
 has created.
 */
- (id<OrgW3cDomLsLSResourceResolver>)getResourceResolver;

/*!
 @brief Obtains the <code>TypeInfoProvider</code> implementation of this
 <code>ValidatorHandler</code>.
 <p>
 The obtained <code>TypeInfoProvider</code> can be queried during a parse
 to access the type information determined by the validator.
 <p>
 Some schema languages do not define the notion of type,
 for those languages, this method may not be supported.
 However, to be compliant with this specification, implementations
 for W3C XML Schema 1.0 must support this operation.
 @return null if the validator / schema language does not support
 the notion of <code>org.w3c.dom.TypeInfo</code>.
 Otherwise a non-null valid <code>TypeInfoProvider</code>.
 */
- (JavaxXmlValidationTypeInfoProvider *)getTypeInfoProvider;

/*!
 @brief Sets the <code>ContentHandler</code> which receives
 the augmented validation result.
 <p>
 When a <code>ContentHandler</code> is specified, a
 <code>ValidatorHandler</code> will work as a filter
 and basically copy the incoming events to the
 specified <code>ContentHandler</code>.
 <p>
 In doing so, a <code>ValidatorHandler</code> may modify
 the events, for example by adding defaulted attributes.
 <p>
 A <code>ValidatorHandler</code> may buffer events to certain
 extent, but to allow <code>ValidatorHandler</code> to be used
 by a parser, the following requirement has to be met.
 <ol>
 <li>When
 <code>ContentHandler.startElement(String,String,String,Attributes)</code>,
 <code>ContentHandler.endElement(String,String,String)</code>,
 <code>ContentHandler.startDocument()</code>, or
 <code>ContentHandler.endDocument()</code>
 are invoked on a <code>ValidatorHandler</code>,
 the same method on the user-specified <code>ContentHandler</code>
 must be invoked for the same event before the callback
 returns.
 <li><code>ValidatorHandler</code> may not introduce new elements that
 were not present in the input.
 <li><code>ValidatorHandler</code> may not remove attributes that were
 present in the input.
 </ol>
 <p>
 When a callback method on the specified <code>ContentHandler</code>
 throws an exception, the same exception object must be thrown
 from the <code>ValidatorHandler</code>. The <code>ErrorHandler</code>
 should not be notified of such an exception.
 <p>
 This method can be called even during a middle of a validation.
 @param receiver
 A <code>ContentHandler</code> or a null value.
 */
- (void)setContentHandlerWithOrgXmlSaxContentHandler:(id<OrgXmlSaxContentHandler>)receiver;

/*!
 @brief Sets the <code>ErrorHandler</code> to receive errors encountered
 during the validation.
 <p>
 Error handler can be used to customize the error handling process
 during a validation. When an <code>ErrorHandler</code> is set,
 errors found during the validation will be first sent
 to the <code>ErrorHandler</code>.
 <p>
 The error handler can abort further validation immediately
 by throwing <code>org.xml.sax.SAXException</code> from the handler. Or for example
 it can print an error to the screen and try to continue the
 validation by returning normally from the <code>ErrorHandler</code>
 <p>
 If any <code>Throwable</code> is thrown from an <code>ErrorHandler</code>,
 the same <code>Throwable</code> object will be thrown toward the
 root of the call stack.
 <p>
 <code>ValidatorHandler</code> is not allowed to
 throw <code>org.xml.sax.SAXException</code> without first reporting it to
 <code>ErrorHandler</code>.
 <p>
 When the <code>ErrorHandler</code> is null, the implementation will
 behave as if the following <code>ErrorHandler</code> is set:
 @code

  class DraconianErrorHandler implements <code>ErrorHandler</code> {
     public void fatalError( <code>org.xml.sax.SAXParseException</code> e ) throws <code>org.xml.sax.SAXException</code> {
         throw e;
     }
     public void error( <code>org.xml.sax.SAXParseException</code> e ) throws <code>org.xml.sax.SAXException</code> {
         throw e;
     }
     public void warning( <code>org.xml.sax.SAXParseException</code> e ) throws <code>org.xml.sax.SAXException</code> {
         // noop
     }
  }
  
@endcode
 <p>
 When a new <code>ValidatorHandler</code> object is created, initially
 this field is set to null.
 @param errorHandler
 A new error handler to be set. This parameter can be null.
 */
- (void)setErrorHandlerWithOrgXmlSaxErrorHandler:(id<OrgXmlSaxErrorHandler>)errorHandler;

/*!
 @brief Set the value of a feature flag.
 <p>
 Feature can be used to control the way a <code>ValidatorHandler</code>
 parses schemas, although <code>ValidatorHandler</code>s are not required
 to recognize any specific property names.</p>
 <p>The feature name is any fully-qualified URI.  It is
 possible for a <code>ValidatorHandler</code> to expose a feature value but
 to be unable to change the current value.
 Some feature values may be immutable or mutable only
 in specific contexts, such as before, during, or after
 a validation.</p>
 @param name The feature name, which is a non-null fully-qualified URI.
 @param value The requested value of the feature (true or false).
 @exception org.xml.sax.SAXNotRecognizedException If the feature
 value can't be assigned or retrieved.
 @exception org.xml.sax.SAXNotSupportedException When the
 <code>ValidatorHandler</code> recognizes the feature name but
 cannot set the requested value.
 @throws NullPointerException
 When the name parameter is null.
 */
- (void)setFeatureWithNSString:(NSString *)name
                   withBoolean:(jboolean)value;

/*!
 @brief Set the value of a property.
 <p>The property name is any fully-qualified URI.  It is
 possible for a <code>ValidatorHandler</code> to recognize a property name but
 to be unable to change the current value.
 Some property values may be immutable or mutable only
 in specific contexts, such as before, during, or after
 a validation.</p>
 <p><code>ValidatorHandler</code>s are not required to recognize setting
 any specific property names.</p>
 @param name The property name, which is a non-null fully-qualified URI.
 @param object The requested value for the property.
 @exception org.xml.sax.SAXNotRecognizedException If the property
 value can't be assigned or retrieved.
 @exception org.xml.sax.SAXNotSupportedException When the
 <code>ValidatorHandler</code> recognizes the property name but
 cannot set the requested value.
 @throws NullPointerException
 When the name parameter is null.
 */
- (void)setPropertyWithNSString:(NSString *)name
                         withId:(id)object;

/*!
 @brief Sets the <code>LSResourceResolver</code> to customize
 resource resolution while in a validation episode.
 <p>
 <code>ValidatorHandler</code> uses a <code>LSResourceResolver</code>
 when it needs to locate external resources while a validation,
 although exactly what constitutes "locating external resources" is
 up to each schema language.
 <p>
 When the <code>LSResourceResolver</code> is null, the implementation will
 behave as if the following <code>LSResourceResolver</code> is set:
 @code

  class DumbLSResourceResolver implements <code>LSResourceResolver</code> {
     public <code>org.w3c.dom.ls.LSInput</code> resolveResource(
         String publicId, String systemId, String baseURI) {
         return null; // always return null
     }
  }
  
@endcode
 <p>
 If a <code>LSResourceResolver</code> throws a <code>RuntimeException</code>
 (or instances of its derived classes),
 then the <code>ValidatorHandler</code> will abort the parsing and
 the caller of the <code>validate</code> method will receive
 the same <code>RuntimeException</code>.
 <p>
 When a new <code>ValidatorHandler</code> object is created, initially
 this field is set to null.
 @param resourceResolver
 A new resource resolver to be set. This parameter can be null.
 */
- (void)setResourceResolverWithOrgW3cDomLsLSResourceResolver:(id<OrgW3cDomLsLSResourceResolver>)resourceResolver;

#pragma mark Protected

/*!
 @brief Constructor for derived classes.
 <p>
 The constructor does nothing.
 <p>
 Derived classes must create <code>ValidatorHandler</code> objects that have
 <tt>null</tt> <code>ErrorHandler</code> and
 <tt>null</tt> <code>LSResourceResolver</code>.
 */
- (instancetype)init;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaxXmlValidationValidatorHandler)

FOUNDATION_EXPORT void JavaxXmlValidationValidatorHandler_init(JavaxXmlValidationValidatorHandler *self);

J2OBJC_TYPE_LITERAL_HEADER(JavaxXmlValidationValidatorHandler)

#endif // _JavaxXmlValidationValidatorHandler_H_
