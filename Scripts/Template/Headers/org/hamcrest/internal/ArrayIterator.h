//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/tmp/j2objc/junit/build_result/java/org/hamcrest/internal/ArrayIterator.java
//

#ifndef _OrgHamcrestInternalArrayIterator_H_
#define _OrgHamcrestInternalArrayIterator_H_

#include <j2objc/J2ObjC_header.h>
#include <j2objc/java/util/Iterator.h>

@interface OrgHamcrestInternalArrayIterator : NSObject < JavaUtilIterator >

#pragma mark Public

- (instancetype)initWithId:(id)array;

- (jboolean)hasNext;

- (id)next;

- (void)remove;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgHamcrestInternalArrayIterator)

FOUNDATION_EXPORT void OrgHamcrestInternalArrayIterator_initWithId_(OrgHamcrestInternalArrayIterator *self, id array);

FOUNDATION_EXPORT OrgHamcrestInternalArrayIterator *new_OrgHamcrestInternalArrayIterator_initWithId_(id array) NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(OrgHamcrestInternalArrayIterator)

#endif // _OrgHamcrestInternalArrayIterator_H_
