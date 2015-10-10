//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/net/URI.java
//

#ifndef _JavaNetURI_H_
#define _JavaNetURI_H_

#include <j2objc/J2ObjC_header.h>
#include <j2objc/java/io/Serializable.h>
#include <j2objc/java/lang/Comparable.h>

@class JavaNetURL;
@class LibcoreNetUriCodec;

/*!
 @brief A Uniform Resource Identifier that identifies an abstract or physical
 resource, as specified by <a href="http://www.ietf.org/rfc/rfc2396.txt">RFC
 2396</a>.
 <h3>Parts of a URI</h3>
 A URI is composed of many parts. This class can both parse URI strings into
 parts and compose URI strings from parts. For example, consider the parts of
 this URI:
 <code>http://username:password@@host:8080/directory/file?query#fragment</code>
 <table>
 <tr><th>Component                                            </th><th>Example value                                                      </th><th>Also known as</th></tr>
 <tr><td><code>Scheme</code>                          </td><td><code>http</code>                                                       </td><td>protocol</td></tr>
 <tr><td><code>Scheme-specific part</code></td><td><code>//username:password@@host:8080/directory/file?query#fragment</code></td><td></td></tr>
 <tr><td><code>Authority</code>                    </td><td><code>username:password@@host:8080</code>                                </td><td></td></tr>
 <tr><td><code>User Info</code>                     </td><td><code>username:password</code>                                          </td><td></td></tr>
 <tr><td><code>Host</code>                              </td><td><code>host</code>                                                       </td><td></td></tr>
 <tr><td><code>Port</code>                              </td><td><code>8080</code>                                                       </td><td></td></tr>
 <tr><td><code>Path</code>                              </td><td><code>/directory/file</code>                                            </td><td></td></tr>
 <tr><td><code>Query</code>                            </td><td><code>query</code>                                                      </td><td></td></tr>
 <tr><td><code>Fragment</code>                      </td><td><code>fragment</code>                                                   </td><td>ref</td></tr>
 </table>
 <h3>Absolute vs. Relative URIs</h3>
 URIs are either <code>absolute or relative</code>.
 <ul>
 <li><strong>Absolute:</strong> <code>http://android.com/robots.txt</code>
 <li><strong>Relative:</strong> <code>robots.txt</code>
 </ul>
 <p>Absolute URIs always have a scheme. If its scheme is supported by <code>URL</code>
 , you can use <code>toURL</code> to convert an absolute URI to a URL.
 <p>Relative URIs do not have a scheme and cannot be converted to URLs. If you
 have the absolute URI that a relative URI is relative to, you can use <code>resolve</code>
  to compute the referenced absolute URI. Symmetrically, you can use
 <code>relativize</code> to compute the relative URI from one URI to another.
 @code
     URI absolute = new URI("http://android.com/");
   URI relative = new URI("robots.txt");
   URI resolved = new URI("http://android.com/robots.txt");
   // print "http://android.com/robots.txt"
   System.out.println(absolute.resolve(relative));
   // print "robots.txt"
   System.out.println(absolute.relativize(resolved));
 
@endcode
 <h3>Opaque vs. Hierarchical URIs</h3>
 Absolute URIs are either <code>opaque or hierarchical</code>. Relative
 URIs are always hierarchical.
 <ul>
 <li><strong>Hierarchical:</strong> <code>http://android.com/robots.txt</code>
 <li><strong>Opaque:</strong> <code>mailto:robots@@example.com</code>
 </ul>
 <p>Opaque URIs have both a scheme and a scheme-specific part that does not
 begin with the slash character: <code>/</code>. The contents of the
 scheme-specific part of an opaque URI is not parsed so an opaque URI never
 has an authority, user info, host, port, path or query. An opaque URIs may
 have a fragment, however. A typical opaque URI is
 <code>mailto:robots@@example.com</code>.
 <table>
 <tr><th>Component           </th><th>Example value             </th></tr>
 <tr><td>Scheme              </td><td><code>mailto</code>            </td></tr>
 <tr><td>Scheme-specific part</td><td><code>robots@@example.com</code></td></tr>
 <tr><td>Fragment            </td><td>                          </td></tr>
 </table>
 <p>Hierarchical URIs may have values for any URL component. They always
 have a non-null path, though that path may be the empty string.
 <h3>Encoding and Decoding URI Components</h3>
 Each component of a URI permits a limited set of legal characters. Other
 characters must first be <i>encoded</i> before they can be embedded in a URI.
 To recover the original characters from a URI, they may be <i>decoded</i>.
 <strong>Contrary to what you might expect,</strong> this class uses the
 term <i>raw</i> to refer to encoded strings. The non-<i>raw</i> accessors
 return decoded strings. For example, consider how this URI is decoded:
 <code>http://user:pa55w%3Frd@@host:80/doc%7Csearch?q=green%20robots#over%206%22</code>
 <table>
 <tr><th>Component           </th><th>Legal Characters                                                    </th><th>Other Constraints                                  </th><th>Raw Value                                                      </th><th>Value</th></tr>
 <tr><td>Scheme              </td><td><code>0-9</code>, <code>a-z</code>, <code>A-Z</code>, <code>+-.</code>                  </td><td>First character must be in <code>a-z</code>, <code>A-Z</code></td><td>                                                               </td><td><code>http</code></td></tr>
 <tr><td>Scheme-specific part</td><td><code>0-9</code>, <code>a-z</code>, <code>A-Z</code>, <code>_-!.~'()*,;:$&+=?/[]@@</code></td><td>Non-ASCII characters okay                          </td><td><code>//user:pa55w%3Frd@@host:80/doc%7Csearch?q=green%20robots</code></td><td><code>//user:pa55w?rd@@host:80/doc|search?q=green robots</code></td></tr>
 <tr><td>Authority           </td><td><code>0-9</code>, <code>a-z</code>, <code>A-Z</code>, <code>_-!.~'()*,;:$&+=@@[]</code>  </td><td>Non-ASCII characters okay                          </td><td><code>user:pa55w%3Frd@@host:80</code>                                </td><td><code>user:pa55w?rd@@host:80</code></td></tr>
 <tr><td>User Info           </td><td><code>0-9</code>, <code>a-z</code>, <code>A-Z</code>, <code>_-!.~'()*,;:$&+=</code>     </td><td>Non-ASCII characters okay                          </td><td><code>user:pa55w%3Frd</code>                                        </td><td><code>user:pa55w?rd</code></td></tr>
 <tr><td>Host                </td><td><code>0-9</code>, <code>a-z</code>, <code>A-Z</code>, <code>-.[]</code>                 </td><td>Domain name, IPv4 address or [IPv6 address]        </td><td>                                                               </td><td>host</td></tr>
 <tr><td>Port                </td><td><code>0-9</code>                                                         </td><td>                                                   </td><td>                                                               </td><td><code>80</code></td></tr>
 <tr><td>Path                </td><td><code>0-9</code>, <code>a-z</code>, <code>A-Z</code>, <code>_-!.~'()*,;:$&+=/@@</code>   </td><td>Non-ASCII characters okay                          </td><td><code>/doc%7Csearch</code>                                          </td><td><code>/doc|search</code></td></tr>
 <tr><td>Query               </td><td><code>0-9</code>, <code>a-z</code>, <code>A-Z</code>, <code>_-!.~'()*,;:$&+=?/[]@@</code></td><td>Non-ASCII characters okay                          </td><td><code>q=green%20robots</code>                                       </td><td><code>q=green robots</code></td></tr>
 <tr><td>Fragment            </td><td><code>0-9</code>, <code>a-z</code>, <code>A-Z</code>, <code>_-!.~'()*,;:$&+=?/[]@@</code></td><td>Non-ASCII characters okay                          </td><td><code>over%206%22</code>                                            </td><td><code>over 6"</code></td></tr>
 </table>
 A URI's host, port and scheme are not eligible for encoding and must not
 contain illegal characters.
 <p>To encode a URI, invoke any of the multiple-parameter constructors of this
 class. These constructors accept your original strings and encode them into
 their raw form.
 <p>To decode a URI, invoke the single-string constructor, and then use the
 appropriate accessor methods to get the decoded components.
 <p>The <code>URL</code> class can be used to retrieve resources by their URI.
 */
@interface JavaNetURI : NSObject < JavaLangComparable, JavaIoSerializable >

#pragma mark Public

/*!
 @brief Creates a new URI instance by parsing <code>spec</code>.
 @param spec a URI whose illegal characters have all been encoded.
 */
- (instancetype)initWithNSString:(NSString *)spec;

/*!
 @brief Creates a new URI instance of the given unencoded component parts.
 @param scheme the URI scheme, or null for a non-absolute URI.
 */
- (instancetype)initWithNSString:(NSString *)scheme
                    withNSString:(NSString *)schemeSpecificPart
                    withNSString:(NSString *)fragment;

/*!
 @brief Creates a new URI instance of the given unencoded component parts.
 @param scheme the URI scheme, or null for a non-absolute URI.
 */
- (instancetype)initWithNSString:(NSString *)scheme
                    withNSString:(NSString *)userInfo
                    withNSString:(NSString *)host
                         withInt:(jint)port
                    withNSString:(NSString *)path
                    withNSString:(NSString *)query
                    withNSString:(NSString *)fragment;

/*!
 @brief Creates a new URI instance of the given unencoded component parts.
 @param scheme the URI scheme, or null for a non-absolute URI.
 */
- (instancetype)initWithNSString:(NSString *)scheme
                    withNSString:(NSString *)host
                    withNSString:(NSString *)path
                    withNSString:(NSString *)fragment;

/*!
 @brief Creates a new URI instance of the given unencoded component parts.
 @param scheme the URI scheme, or null for a non-absolute URI.
 */
- (instancetype)initWithNSString:(NSString *)scheme
                    withNSString:(NSString *)authority
                    withNSString:(NSString *)path
                    withNSString:(NSString *)query
                    withNSString:(NSString *)fragment;

/*!
 @brief Compares this URI with the given argument <code>uri</code>.
 This method will
 return a negative value if this URI instance is less than the given
 argument and a positive value if this URI instance is greater than the
 given argument. The return value <code>0</code> indicates that the two
 instances represent the same URI. To define the order the single parts of
 the URI are compared with each other. String components will be ordered
 in the natural case-sensitive way. A hierarchical URI is less than an
 opaque URI and if one part is <code>null</code> the URI with the undefined
 part is less than the other one.
 @param uri
 the URI this instance has to compare with.
 @return the value representing the order of the two instances.
 */
- (jint)compareToWithId:(JavaNetURI *)uri;

/*!
 @brief Returns the URI formed by parsing <code>uri</code>.
 This method behaves
 identically to the string constructor but throws a different exception
 on failure. The constructor fails with a checked <code>URISyntaxException</code>
 ; this method fails with an unchecked <code>IllegalArgumentException</code>
 .
 */
+ (JavaNetURI *)createWithNSString:(NSString *)uri;

- (jboolean)isEqual:(id)o;

/*!
 @brief Returns the decoded authority part of this URI, or null if this URI has
 no authority.
 */
- (NSString *)getAuthority;

/*!
  
 */
- (jint)getEffectivePort;

/*!
 @brief Returns the port to use for <code>scheme</code> connections will use when
 <code>getPort</code> returns <code>specifiedPort</code>.
 */
+ (jint)getEffectivePortWithNSString:(NSString *)scheme
                             withInt:(jint)specifiedPort;

/*!
 @brief Returns the decoded fragment of this URI, or null if this URI has no
 fragment.
 */
- (NSString *)getFragment;

/*!
 @brief Returns the host of this URI, or null if this URI has no host.
 */
- (NSString *)getHost;

/*!
 @brief Returns the decoded path of this URI, or null if this URI has no path.
 */
- (NSString *)getPath;

/*!
 @brief Returns the port number of this URI, or <code>-1</code> if this URI has no
 explicit port.
 */
- (jint)getPort;

/*!
 @brief Returns the decoded query of this URI, or null if this URI has no query.
 */
- (NSString *)getQuery;

/*!
 @brief Returns the encoded authority of this URI, or null if this URI has no
 authority.
 */
- (NSString *)getRawAuthority;

/*!
 @brief Gets the encoded fragment of this URI, or null if this URI has no
 fragment.
 */
- (NSString *)getRawFragment;

/*!
 @brief Returns the encoded path of this URI, or null if this URI has no path.
 */
- (NSString *)getRawPath;

/*!
 @brief Returns the encoded query of this URI, or null if this URI has no query.
 */
- (NSString *)getRawQuery;

/*!
 @brief Returns the encoded scheme-specific part of this URI, or null if this URI
 has no scheme-specific part.
 */
- (NSString *)getRawSchemeSpecificPart;

/*!
 @brief Returns the encoded user info of this URI, or null if this URI has no
 user info.
 */
- (NSString *)getRawUserInfo;

/*!
 @brief Returns the scheme of this URI, or null if this URI has no scheme.
 This
 is also known as the protocol.
 */
- (NSString *)getScheme;

/*!
 @brief Returns the decoded scheme-specific part of this URI, or null if this URI
 has no scheme-specific part.
 */
- (NSString *)getSchemeSpecificPart;

/*!
 @brief Returns the decoded user info of this URI, or null if this URI has no
 user info.
 */
- (NSString *)getUserInfo;

- (NSUInteger)hash;

/*!
 @brief Returns true if this URI is absolute, which means that a scheme is
 defined.
 */
- (jboolean)isAbsolute;

/*!
 @brief Returns true if this URI is opaque.
 Opaque URIs are absolute and have a
 scheme-specific part that does not start with a slash character. All
 parts except scheme, scheme-specific and fragment are undefined.
 */
- (jboolean)isOpaque;

/*!
 @brief Normalizes the path part of this URI.
 @return an URI object which represents this instance with a normalized
 path.
 */
- (JavaNetURI *)normalize;

/*!
 @brief Tries to parse the authority component of this URI to divide it into the
 host, port, and user-info.
 If this URI is already determined as a
 ServerAuthority this instance will be returned without changes.
 @return this instance with the components of the parsed server authority.
 @throws URISyntaxException
 if the authority part could not be parsed as a server-based
 authority.
 */
- (JavaNetURI *)parseServerAuthority;

/*!
 @brief Makes the given URI <code>relative</code> to a relative URI against the URI
 represented by this instance.
 @param relative
 the URI which has to be relativized against this URI.
 @return the relative URI.
 */
- (JavaNetURI *)relativizeWithJavaNetURI:(JavaNetURI *)relative;

/*!
 @brief Creates a new URI instance by parsing the given string <code>relative</code>
 and resolves the created URI against the URI represented by this
 instance.
 @param relative
 the given string to create the new URI instance which has to
 be resolved later on.
 @return the created and resolved URI.
 */
- (JavaNetURI *)resolveWithNSString:(NSString *)relative;

/*!
 @brief Resolves the given URI <code>relative</code> against the URI represented by
 this instance.
 @param relative
 the URI which has to be resolved against this URI.
 @return the resolved URI.
 */
- (JavaNetURI *)resolveWithJavaNetURI:(JavaNetURI *)relative;

/*!
 @brief Returns the textual string representation of this URI instance using the
 US-ASCII encoding.
 @return the US-ASCII string representation of this URI.
 */
- (NSString *)toASCIIString;

/*!
 @brief Returns the encoded URI.
 */
- (NSString *)description;

/*!
 @brief Converts this URI instance to a URL.
 @return the created URL representing the same resource as this URI.
 @throws MalformedURLException
 if an error occurs while creating the URL or no protocol
 handler could be found.
 */
- (JavaNetURL *)toURL;

@end

J2OBJC_STATIC_INIT(JavaNetURI)

FOUNDATION_EXPORT NSString *JavaNetURI_UNRESERVED_;
J2OBJC_STATIC_FIELD_GETTER(JavaNetURI, UNRESERVED_, NSString *)

FOUNDATION_EXPORT NSString *JavaNetURI_PUNCTUATION_;
J2OBJC_STATIC_FIELD_GETTER(JavaNetURI, PUNCTUATION_, NSString *)

FOUNDATION_EXPORT LibcoreNetUriCodec *JavaNetURI_USER_INFO_ENCODER_;
J2OBJC_STATIC_FIELD_GETTER(JavaNetURI, USER_INFO_ENCODER_, LibcoreNetUriCodec *)

FOUNDATION_EXPORT LibcoreNetUriCodec *JavaNetURI_PATH_ENCODER_;
J2OBJC_STATIC_FIELD_GETTER(JavaNetURI, PATH_ENCODER_, LibcoreNetUriCodec *)

FOUNDATION_EXPORT LibcoreNetUriCodec *JavaNetURI_AUTHORITY_ENCODER_;
J2OBJC_STATIC_FIELD_GETTER(JavaNetURI, AUTHORITY_ENCODER_, LibcoreNetUriCodec *)

FOUNDATION_EXPORT LibcoreNetUriCodec *JavaNetURI_FILE_AND_QUERY_ENCODER_;
J2OBJC_STATIC_FIELD_GETTER(JavaNetURI, FILE_AND_QUERY_ENCODER_, LibcoreNetUriCodec *)

FOUNDATION_EXPORT LibcoreNetUriCodec *JavaNetURI_ALL_LEGAL_ENCODER_;
J2OBJC_STATIC_FIELD_GETTER(JavaNetURI, ALL_LEGAL_ENCODER_, LibcoreNetUriCodec *)

FOUNDATION_EXPORT void JavaNetURI_initWithNSString_(JavaNetURI *self, NSString *spec);

FOUNDATION_EXPORT JavaNetURI *new_JavaNetURI_initWithNSString_(NSString *spec) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void JavaNetURI_initWithNSString_withNSString_withNSString_(JavaNetURI *self, NSString *scheme, NSString *schemeSpecificPart, NSString *fragment);

FOUNDATION_EXPORT JavaNetURI *new_JavaNetURI_initWithNSString_withNSString_withNSString_(NSString *scheme, NSString *schemeSpecificPart, NSString *fragment) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void JavaNetURI_initWithNSString_withNSString_withNSString_withInt_withNSString_withNSString_withNSString_(JavaNetURI *self, NSString *scheme, NSString *userInfo, NSString *host, jint port, NSString *path, NSString *query, NSString *fragment);

FOUNDATION_EXPORT JavaNetURI *new_JavaNetURI_initWithNSString_withNSString_withNSString_withInt_withNSString_withNSString_withNSString_(NSString *scheme, NSString *userInfo, NSString *host, jint port, NSString *path, NSString *query, NSString *fragment) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void JavaNetURI_initWithNSString_withNSString_withNSString_withNSString_(JavaNetURI *self, NSString *scheme, NSString *host, NSString *path, NSString *fragment);

FOUNDATION_EXPORT JavaNetURI *new_JavaNetURI_initWithNSString_withNSString_withNSString_withNSString_(NSString *scheme, NSString *host, NSString *path, NSString *fragment) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void JavaNetURI_initWithNSString_withNSString_withNSString_withNSString_withNSString_(JavaNetURI *self, NSString *scheme, NSString *authority, NSString *path, NSString *query, NSString *fragment);

FOUNDATION_EXPORT JavaNetURI *new_JavaNetURI_initWithNSString_withNSString_withNSString_withNSString_withNSString_(NSString *scheme, NSString *authority, NSString *path, NSString *query, NSString *fragment) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaNetURI *JavaNetURI_createWithNSString_(NSString *uri);

FOUNDATION_EXPORT jint JavaNetURI_getEffectivePortWithNSString_withInt_(NSString *scheme, jint specifiedPort);

J2OBJC_TYPE_LITERAL_HEADER(JavaNetURI)

#endif // _JavaNetURI_H_
