//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/tmp/j2objc/testing/mockito/build_result/java/org/mockito/internal/util/MockCreationValidator.java
//

#ifndef _OrgMockitoInternalUtilMockCreationValidator_H_
#define _OrgMockitoInternalUtilMockCreationValidator_H_

#include <j2objc/J2ObjC_header.h>

@class IOSClass;
@protocol JavaUtilCollection;

@interface OrgMockitoInternalUtilMockCreationValidator : NSObject

#pragma mark Public

- (instancetype)init;

- (jboolean)isTypeMockableWithIOSClass:(IOSClass *)clz;

- (void)validateDelegatedInstanceWithIOSClass:(IOSClass *)classToMock
                                       withId:(id)delegatedInstance;

- (void)validateExtraInterfacesWithIOSClass:(IOSClass *)classToMock
                     withJavaUtilCollection:(id<JavaUtilCollection>)extraInterfaces;

- (void)validateMockedTypeWithIOSClass:(IOSClass *)classToMock
                                withId:(id)spiedInstance;

- (void)validateTypeWithIOSClass:(IOSClass *)classToMock;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgMockitoInternalUtilMockCreationValidator)

FOUNDATION_EXPORT void OrgMockitoInternalUtilMockCreationValidator_init(OrgMockitoInternalUtilMockCreationValidator *self);

FOUNDATION_EXPORT OrgMockitoInternalUtilMockCreationValidator *new_OrgMockitoInternalUtilMockCreationValidator_init() NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(OrgMockitoInternalUtilMockCreationValidator)

#endif // _OrgMockitoInternalUtilMockCreationValidator_H_
