//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: Classes/java/text/IOSCollator.java
//

#ifndef _JavaTextIOSCollator_H_
#define _JavaTextIOSCollator_H_

#include <j2objc/J2ObjC_header.h>
#include <j2objc/java/text/CollationKey.h>
#include <j2objc/java/text/Collator.h>

@class IOSByteArray;
@class JavaTextCollationKey;
@class JavaUtilLocale;

/*!
 @brief A concrete implementation class for <code>Collation</code> for iOS.
 Although
 iOS uses ICU, its collation data is not available from any public APIs.
 This class implements collation by invoking the NSString localized
 comparison methods.
 @author Tom Ball
 */
@interface JavaTextIOSCollator : JavaTextCollator

#pragma mark Public

- (jint)compareWithNSString:(NSString *)string1
               withNSString:(NSString *)string2;

- (jboolean)isEqual:(id)obj;

- (JavaTextCollationKey *)getCollationKeyWithNSString:(NSString *)string;

- (jint)getDecomposition;

- (jint)getStrength;

- (NSUInteger)hash;

/*!
 @brief Sets decomposition field, but is otherwise unused.
 */
- (void)setDecompositionWithInt:(jint)value;

/*!
 @brief Sets strength field, but is otherwise unused.
 */
- (void)setStrengthWithInt:(jint)value;

#pragma mark Package-Private

- (instancetype)initWithJavaUtilLocale:(JavaUtilLocale *)locale;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaTextIOSCollator)

FOUNDATION_EXPORT void JavaTextIOSCollator_initWithJavaUtilLocale_(JavaTextIOSCollator *self, JavaUtilLocale *locale);

FOUNDATION_EXPORT JavaTextIOSCollator *new_JavaTextIOSCollator_initWithJavaUtilLocale_(JavaUtilLocale *locale) NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(JavaTextIOSCollator)

@interface JavaTextIOSCollator_IOSCollationKey : JavaTextCollationKey

#pragma mark Public

- (jint)compareToWithId:(JavaTextCollationKey *)value;

- (IOSByteArray *)toByteArray;

#pragma mark Protected

- (instancetype)initWithNSString:(NSString *)source;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaTextIOSCollator_IOSCollationKey)

FOUNDATION_EXPORT void JavaTextIOSCollator_IOSCollationKey_initWithNSString_(JavaTextIOSCollator_IOSCollationKey *self, NSString *source);

FOUNDATION_EXPORT JavaTextIOSCollator_IOSCollationKey *new_JavaTextIOSCollator_IOSCollationKey_initWithNSString_(NSString *source) NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(JavaTextIOSCollator_IOSCollationKey)

#endif // _JavaTextIOSCollator_H_
