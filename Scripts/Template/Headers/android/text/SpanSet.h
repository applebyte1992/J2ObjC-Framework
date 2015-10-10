//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/frameworks/base/core/java/android/text/SpanSet.java
//

#ifndef _AndroidTextSpanSet_H_
#define _AndroidTextSpanSet_H_

#include <j2objc/J2ObjC_header.h>

@class IOSClass;
@class IOSIntArray;
@class IOSObjectArray;
@protocol AndroidTextSpanned;

/*!
 @brief A cached set of spans.
 Caches the result of <code>Spanned.getSpans(int,int,Class)</code> and then
 provides faster access to <code>Spanned.nextSpanTransition(int,int,Class)</code>.
 Fields are left public for a convenient direct access.
 Note that empty spans are ignored by this class.
 */
@interface AndroidTextSpanSet : NSObject {
 @public
  jint numberOfSpans_;
  IOSObjectArray *spans_;
  IOSIntArray *spanStarts_;
  IOSIntArray *spanEnds_;
  IOSIntArray *spanFlags_;
}

#pragma mark Public

/*!
 @brief Returns true if there are spans intersecting the given interval.
 @param end must be strictly greater than start
 */
- (jboolean)hasSpansIntersectingWithInt:(jint)start
                                withInt:(jint)end;

- (void)init__WithAndroidTextSpanned:(id<AndroidTextSpanned>)spanned
                             withInt:(jint)start
                             withInt:(jint)limit OBJC_METHOD_FAMILY_NONE;

/*!
 @brief Removes all internal references to the spans to avoid memory leaks.
 */
- (void)recycle;

#pragma mark Package-Private

- (instancetype)initWithIOSClass:(IOSClass *)type;

/*!
 @brief Similar to <code>Spanned.nextSpanTransition(int,int,Class)</code>
 */
- (jint)getNextTransitionWithInt:(jint)start
                         withInt:(jint)limit;

@end

J2OBJC_EMPTY_STATIC_INIT(AndroidTextSpanSet)

J2OBJC_FIELD_SETTER(AndroidTextSpanSet, spans_, IOSObjectArray *)
J2OBJC_FIELD_SETTER(AndroidTextSpanSet, spanStarts_, IOSIntArray *)
J2OBJC_FIELD_SETTER(AndroidTextSpanSet, spanEnds_, IOSIntArray *)
J2OBJC_FIELD_SETTER(AndroidTextSpanSet, spanFlags_, IOSIntArray *)

FOUNDATION_EXPORT void AndroidTextSpanSet_initWithIOSClass_(AndroidTextSpanSet *self, IOSClass *type);

FOUNDATION_EXPORT AndroidTextSpanSet *new_AndroidTextSpanSet_initWithIOSClass_(IOSClass *type) NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(AndroidTextSpanSet)

#endif // _AndroidTextSpanSet_H_
