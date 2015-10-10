//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/libcore/icu/NativeDecimalFormat.java
//

#ifndef _LibcoreIcuNativeDecimalFormat_H_
#define _LibcoreIcuNativeDecimalFormat_H_

#include <j2objc/J2ObjC_header.h>

@class IOSCharArray;
@class JavaMathBigDecimal;
@class JavaMathBigInteger;
@class JavaMathRoundingModeEnum;
@class JavaTextDecimalFormatSymbols;
@class JavaTextFieldPosition;
@class JavaTextParsePosition;
@class JavaUtilCurrency;
@class LibcoreIcuLocaleData;
@protocol JavaTextAttributedCharacterIterator;

@interface LibcoreIcuNativeDecimalFormat : NSObject < NSCopying >

#pragma mark Public

- (instancetype)initWithNSString:(NSString *)pattern
withJavaTextDecimalFormatSymbols:(JavaTextDecimalFormatSymbols *)dfs;

- (instancetype)initWithNSString:(NSString *)pattern
        withLibcoreIcuLocaleData:(LibcoreIcuLocaleData *)data;

- (void)applyLocalizedPatternWithNSString:(NSString *)pattern;

- (void)applyPatternWithNSString:(NSString *)pattern;

- (id)clone;

- (void)close;

/*!
 @brief Note: this doesn't check that the underlying native DecimalFormat objects' configured
 native DecimalFormatSymbols objects are equal.
 It is assumed that the
 caller (DecimalFormat) will check the DecimalFormatSymbols objects
 instead, for performance.
 This is also unreasonably expensive, calling down to JNI multiple times.
 TODO: remove this and just have DecimalFormat.equals do the right thing itself.
 */
- (jboolean)isEqual:(id)object;

- (IOSCharArray *)formatBigDecimalWithJavaMathBigDecimal:(JavaMathBigDecimal *)value
                               withJavaTextFieldPosition:(JavaTextFieldPosition *)field;

- (IOSCharArray *)formatBigIntegerWithJavaMathBigInteger:(JavaMathBigInteger *)value
                               withJavaTextFieldPosition:(JavaTextFieldPosition *)field;

- (IOSCharArray *)formatDoubleWithDouble:(jdouble)value
               withJavaTextFieldPosition:(JavaTextFieldPosition *)field;

- (IOSCharArray *)formatLongWithLong:(jlong)value
           withJavaTextFieldPosition:(JavaTextFieldPosition *)field;

- (id<JavaTextAttributedCharacterIterator>)formatToCharacterIteratorWithId:(id)object;

- (jint)getGroupingSize;

- (jint)getMaximumFractionDigits;

- (jint)getMaximumIntegerDigits;

- (jint)getMinimumFractionDigits;

- (jint)getMinimumIntegerDigits;

- (jint)getMultiplier;

- (NSString *)getNegativePrefix;

- (NSString *)getNegativeSuffix;

- (NSString *)getPositivePrefix;

- (NSString *)getPositiveSuffix;

- (jboolean)isDecimalSeparatorAlwaysShown;

- (jboolean)isGroupingUsed;

- (jboolean)isParseBigDecimal;

- (jboolean)isParseIntegerOnly;

- (NSNumber *)parseWithNSString:(NSString *)string
      withJavaTextParsePosition:(JavaTextParsePosition *)position;

- (void)setCurrencyWithJavaUtilCurrency:(JavaUtilCurrency *)currency;

/*!
 @brief Copies the DecimalFormatSymbols settings into our native peer in bulk.
 */
- (void)setDecimalFormatSymbolsWithJavaTextDecimalFormatSymbols:(JavaTextDecimalFormatSymbols *)dfs;

- (void)setDecimalFormatSymbolsWithLibcoreIcuLocaleData:(LibcoreIcuLocaleData *)localeData;

- (void)setDecimalSeparatorAlwaysShownWithBoolean:(jboolean)value;

- (void)setGroupingSizeWithInt:(jint)value;

- (void)setGroupingUsedWithBoolean:(jboolean)value;

- (void)setMaximumFractionDigitsWithInt:(jint)value;

- (void)setMaximumIntegerDigitsWithInt:(jint)value;

- (void)setMinimumFractionDigitsWithInt:(jint)value;

- (void)setMinimumIntegerDigitsWithInt:(jint)value;

- (void)setMultiplierWithInt:(jint)value;

- (void)setNegativePrefixWithNSString:(NSString *)value;

- (void)setNegativeSuffixWithNSString:(NSString *)value;

- (void)setParseBigDecimalWithBoolean:(jboolean)value;

- (void)setParseIntegerOnlyWithBoolean:(jboolean)value;

- (void)setPositivePrefixWithNSString:(NSString *)value;

- (void)setPositiveSuffixWithNSString:(NSString *)value;

- (void)setRoundingModeWithJavaMathRoundingModeEnum:(JavaMathRoundingModeEnum *)roundingMode
                                         withDouble:(jdouble)roundingIncrement;

- (NSString *)toLocalizedPattern;

- (NSString *)toPattern;

#pragma mark Protected

- (void)dealloc;

@end

J2OBJC_EMPTY_STATIC_INIT(LibcoreIcuNativeDecimalFormat)

FOUNDATION_EXPORT void LibcoreIcuNativeDecimalFormat_initWithNSString_withJavaTextDecimalFormatSymbols_(LibcoreIcuNativeDecimalFormat *self, NSString *pattern, JavaTextDecimalFormatSymbols *dfs);

FOUNDATION_EXPORT LibcoreIcuNativeDecimalFormat *new_LibcoreIcuNativeDecimalFormat_initWithNSString_withJavaTextDecimalFormatSymbols_(NSString *pattern, JavaTextDecimalFormatSymbols *dfs) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void LibcoreIcuNativeDecimalFormat_initWithNSString_withLibcoreIcuLocaleData_(LibcoreIcuNativeDecimalFormat *self, NSString *pattern, LibcoreIcuLocaleData *data);

FOUNDATION_EXPORT LibcoreIcuNativeDecimalFormat *new_LibcoreIcuNativeDecimalFormat_initWithNSString_withLibcoreIcuLocaleData_(NSString *pattern, LibcoreIcuLocaleData *data) NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(LibcoreIcuNativeDecimalFormat)

#endif // _LibcoreIcuNativeDecimalFormat_H_
