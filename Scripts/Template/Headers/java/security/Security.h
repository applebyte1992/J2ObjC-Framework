//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/security/Security.java
//

#ifndef _JavaSecuritySecurity_H_
#define _JavaSecuritySecurity_H_

#include <j2objc/J2ObjC_header.h>

@class IOSObjectArray;
@class JavaSecurityProvider;
@protocol JavaUtilMap;
@protocol JavaUtilSet;

/*!
 @brief <code>Security</code> is the central class in the Java Security API.
 It manages
 the list of security <code>Provider</code> that have been installed into this
 runtime environment.
 */
@interface JavaSecuritySecurity : NSObject

#pragma mark Public

/*!
 @brief Adds the given <code>provider</code> to the collection of providers at the
 next available position.
 @param provider
 the provider to be added.
 @return the actual position or <code>-1</code> if the given <code>provider</code>
 was already in the list.
 */
+ (jint)addProviderWithJavaSecurityProvider:(JavaSecurityProvider *)provider;

/*!
 @brief Returns value for the specified algorithm with the specified name.
 @param algName
 the name of the algorithm.
 @param propName
 the name of the property.
 @return value of the property.
 */
+ (NSString *)getAlgorithmPropertyWithNSString:(NSString *)algName
                                  withNSString:(NSString *)propName;

/*!
 @brief Returns a <code>Set</code> of all registered algorithms for the specified
 cryptographic service.
 <code>"Signature"</code>, <code>"Cipher"</code> and <code>"KeyStore"</code>
  are examples for such kind of services.
 @param serviceName
 the case-insensitive name of the service.
 @return a <code>Set</code> of all registered algorithms for the specified
 cryptographic service, or an empty <code>Set</code> if <code>serviceName</code>
  is <code>null</code> or if no registered provider
 provides the requested service.
 */
+ (id<JavaUtilSet>)getAlgorithmsWithNSString:(NSString *)serviceName;

/*!
 @brief Returns the value of the security property named by the argument.
 @param key
 the name of the requested security property.
 @return the value of the security property.
 */
+ (NSString *)getPropertyWithNSString:(NSString *)key;

/*!
 @brief Returns the <code>Provider</code> with the specified name.
 Returns <code>null</code>
  if name is <code>null</code> or no provider with the specified name is
 installed.
 @param name
 the name of the requested provider.
 @return the provider with the specified name, maybe <code>null</code>.
 */
+ (JavaSecurityProvider *)getProviderWithNSString:(NSString *)name;

/*!
 @brief Returns an array containing all installed providers.
 The providers are
 ordered according their preference order.
 @return an array containing all installed providers.
 */
+ (IOSObjectArray *)getProviders;

/*!
 @brief Returns the array of providers which meet the user supplied set of
 filters.
 The filter must be supplied in one of two formats:
 <nl>
 <li> CRYPTO_SERVICE_NAME.ALGORITHM_OR_TYPE
 <p>
 for example: "MessageDigest.SHA" The value associated with the key must
 be an empty string. <li> CRYPTO_SERVICE_NAME.ALGORITHM_OR_TYPE
 ATTR_NAME:ATTR_VALUE
 <p>
 for example: "Signature.MD2withRSA KeySize:512" where "KeySize:512" is
 the value of the filter map entry.
 </nl>
 @param filter
 case-insensitive filter.
 @return the providers which meet the user supplied string filter <code>filter</code>
 . A <code>null</code> value signifies that none of the
 installed providers meets the filter specification.
 @throws InvalidParameterException
 if an unusable filter is supplied.
 @throws NullPointerException
 if <code>filter</code> is <code>null</code>.
 */
+ (IOSObjectArray *)getProvidersWithJavaUtilMap:(id<JavaUtilMap>)filter;

/*!
 @brief Returns the array of providers which meet the user supplied string
 filter.
 The specified filter must be supplied in one of two formats:
 <nl>
 <li> CRYPTO_SERVICE_NAME.ALGORITHM_OR_TYPE
 <p>
 (for example: "MessageDigest.SHA")
 <li> CRYPTO_SERVICE_NAME.ALGORITHM_OR_TYPE
 ATTR_NAME:ATTR_VALUE
 <p>
 (for example: "Signature.MD2withRSA KeySize:512")
 </nl>
 @param filter
 case-insensitive filter.
 @return the providers which meet the user supplied string filter <code>filter</code>
 . A <code>null</code> value signifies that none of the
 installed providers meets the filter specification.
 @throws InvalidParameterException
 if an unusable filter is supplied.
 @throws NullPointerException
 if <code>filter</code> is <code>null</code>.
 */
+ (IOSObjectArray *)getProvidersWithNSString:(NSString *)filter;

/*!
 @brief Insert the given <code>Provider</code> at the specified <code>position</code>.
 The
 positions define the preference order in which providers are searched for
 requested algorithms.
 @param provider
 the provider to insert.
 @param position
 the position (starting from 1).
 @return the actual position or <code>-1</code> if the given <code>provider</code>
 was already in the list. The actual position may be different
 from the desired position.
 */
+ (jint)insertProviderAtWithJavaSecurityProvider:(JavaSecurityProvider *)provider
                                         withInt:(jint)position;

/*!
 @brief Removes the <code>Provider</code> with the specified name form the collection
 of providers.
 If the the <code>Provider</code> with the specified name is
 removed, all provider at a greater position are shifted down one
 position.
 <p>Returns silently if <code>name</code> is <code>null</code> or no provider with the
 specified name is installed.
 @param name
 the name of the provider to remove.
 */
+ (void)removeProviderWithNSString:(NSString *)name;

/*!
 @brief Sets the value of the specified security property.
 */
+ (void)setPropertyWithNSString:(NSString *)key
                   withNSString:(NSString *)value;

@end

J2OBJC_STATIC_INIT(JavaSecuritySecurity)

FOUNDATION_EXPORT NSString *JavaSecuritySecurity_getAlgorithmPropertyWithNSString_withNSString_(NSString *algName, NSString *propName);

FOUNDATION_EXPORT jint JavaSecuritySecurity_insertProviderAtWithJavaSecurityProvider_withInt_(JavaSecurityProvider *provider, jint position);

FOUNDATION_EXPORT jint JavaSecuritySecurity_addProviderWithJavaSecurityProvider_(JavaSecurityProvider *provider);

FOUNDATION_EXPORT void JavaSecuritySecurity_removeProviderWithNSString_(NSString *name);

FOUNDATION_EXPORT IOSObjectArray *JavaSecuritySecurity_getProviders();

FOUNDATION_EXPORT JavaSecurityProvider *JavaSecuritySecurity_getProviderWithNSString_(NSString *name);

FOUNDATION_EXPORT IOSObjectArray *JavaSecuritySecurity_getProvidersWithNSString_(NSString *filter);

FOUNDATION_EXPORT IOSObjectArray *JavaSecuritySecurity_getProvidersWithJavaUtilMap_(id<JavaUtilMap> filter);

FOUNDATION_EXPORT NSString *JavaSecuritySecurity_getPropertyWithNSString_(NSString *key);

FOUNDATION_EXPORT void JavaSecuritySecurity_setPropertyWithNSString_withNSString_(NSString *key, NSString *value);

FOUNDATION_EXPORT id<JavaUtilSet> JavaSecuritySecurity_getAlgorithmsWithNSString_(NSString *serviceName);

J2OBJC_TYPE_LITERAL_HEADER(JavaSecuritySecurity)

#endif // _JavaSecuritySecurity_H_
