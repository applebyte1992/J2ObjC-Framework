//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/libcore/icu/ICU.java
//

#ifndef _LibcoreIcuICU_H_
#define _LibcoreIcuICU_H_

#include <j2objc/J2ObjC_header.h>

@class IOSObjectArray;
@class JavaUtilLocale;

/*!
 @brief Makes ICU data accessible by pulling it from the Foundation API.
 */
@interface LibcoreIcuICU : NSObject

#pragma mark Public

- (instancetype)init;

+ (IOSObjectArray *)getAvailableBreakIteratorLocales;

+ (IOSObjectArray *)getAvailableCalendarLocales;

+ (IOSObjectArray *)getAvailableCollatorLocales;

+ (IOSObjectArray *)getAvailableCurrencyCodes;

+ (IOSObjectArray *)getAvailableDateFormatLocales;

+ (IOSObjectArray *)getAvailableDateFormatSymbolsLocales;

+ (IOSObjectArray *)getAvailableDecimalFormatSymbolsLocales;

+ (IOSObjectArray *)getAvailableLocales;

+ (IOSObjectArray *)getAvailableNumberFormatLocales;

+ (NSString *)getCurrencyCodeWithNSString:(NSString *)localeId;

+ (jint)getCurrencyFractionDigitsWithNSString:(NSString *)currencyCode;

+ (NSString *)getCurrencySymbolWithNSString:(NSString *)localeId;

+ (NSString *)getDisplayCountryNativeWithNSString:(NSString *)countryCode
                                     withNSString:(NSString *)localeId;

+ (NSString *)getDisplayLanguageNativeWithNSString:(NSString *)languageCode
                                      withNSString:(NSString *)localeId;

+ (NSString *)getDisplayVariantNativeWithNSString:(NSString *)variantCode
                                     withNSString:(NSString *)localeId;

+ (NSString *)getISO3CountryNativeWithNSString:(NSString *)localeId;

+ (NSString *)getISO3LanguageNativeWithNSString:(NSString *)localeId;

/*!
 @brief Returns an array of ISO country names (two-letter codes), fetched either
 from ICU's database or from our memory cache.
 @return The array.
 */
+ (IOSObjectArray *)getISOCountries;

/*!
 @brief Returns an array of ISO language names (two-letter codes), fetched either
 from ICU's database or from our memory cache.
 @return The array.
 */
+ (IOSObjectArray *)getISOLanguages;

/*!
 @brief Returns the appropriate <code>Locale</code> given a <code>String</code> of the form returned
 by <code>toString</code>.
 This is very lenient, and doesn't care what's between the underscores:
 this method can parse strings that <code>Locale.toString</code> won't produce.
 Used to remove duplication.
 */
+ (JavaUtilLocale *)localeFromStringWithNSString:(NSString *)localeName;

+ (IOSObjectArray *)localesFromStringsWithNSStringArray:(IOSObjectArray *)localeNames;

@end

J2OBJC_EMPTY_STATIC_INIT(LibcoreIcuICU)

FOUNDATION_EXPORT IOSObjectArray *LibcoreIcuICU_getISOLanguages();

FOUNDATION_EXPORT IOSObjectArray *LibcoreIcuICU_getISOCountries();

FOUNDATION_EXPORT JavaUtilLocale *LibcoreIcuICU_localeFromStringWithNSString_(NSString *localeName);

FOUNDATION_EXPORT IOSObjectArray *LibcoreIcuICU_localesFromStringsWithNSStringArray_(IOSObjectArray *localeNames);

FOUNDATION_EXPORT IOSObjectArray *LibcoreIcuICU_getAvailableLocales();

FOUNDATION_EXPORT IOSObjectArray *LibcoreIcuICU_getAvailableBreakIteratorLocales();

FOUNDATION_EXPORT IOSObjectArray *LibcoreIcuICU_getAvailableCalendarLocales();

FOUNDATION_EXPORT IOSObjectArray *LibcoreIcuICU_getAvailableCollatorLocales();

FOUNDATION_EXPORT IOSObjectArray *LibcoreIcuICU_getAvailableDateFormatLocales();

FOUNDATION_EXPORT IOSObjectArray *LibcoreIcuICU_getAvailableDateFormatSymbolsLocales();

FOUNDATION_EXPORT IOSObjectArray *LibcoreIcuICU_getAvailableDecimalFormatSymbolsLocales();

FOUNDATION_EXPORT IOSObjectArray *LibcoreIcuICU_getAvailableNumberFormatLocales();

FOUNDATION_EXPORT IOSObjectArray *LibcoreIcuICU_getAvailableCurrencyCodes();

FOUNDATION_EXPORT NSString *LibcoreIcuICU_getDisplayCountryNativeWithNSString_withNSString_(NSString *countryCode, NSString *localeId);

FOUNDATION_EXPORT NSString *LibcoreIcuICU_getDisplayLanguageNativeWithNSString_withNSString_(NSString *languageCode, NSString *localeId);

FOUNDATION_EXPORT NSString *LibcoreIcuICU_getDisplayVariantNativeWithNSString_withNSString_(NSString *variantCode, NSString *localeId);

FOUNDATION_EXPORT NSString *LibcoreIcuICU_getISO3CountryNativeWithNSString_(NSString *localeId);

FOUNDATION_EXPORT NSString *LibcoreIcuICU_getISO3LanguageNativeWithNSString_(NSString *localeId);

FOUNDATION_EXPORT NSString *LibcoreIcuICU_getCurrencyCodeWithNSString_(NSString *localeId);

FOUNDATION_EXPORT NSString *LibcoreIcuICU_getCurrencySymbolWithNSString_(NSString *localeId);

FOUNDATION_EXPORT jint LibcoreIcuICU_getCurrencyFractionDigitsWithNSString_(NSString *currencyCode);

FOUNDATION_EXPORT void LibcoreIcuICU_init(LibcoreIcuICU *self);

FOUNDATION_EXPORT LibcoreIcuICU *new_LibcoreIcuICU_init() NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(LibcoreIcuICU)

#endif // _LibcoreIcuICU_H_
