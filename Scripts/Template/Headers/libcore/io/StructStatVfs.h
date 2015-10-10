//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/libcore/io/StructStatVfs.java
//

#ifndef _LibcoreIoStructStatVfs_H_
#define _LibcoreIoStructStatVfs_H_

#include <j2objc/J2ObjC_header.h>

/*!
 @brief File information returned by fstatvfs(2) and statvfs(2).
 */
@interface LibcoreIoStructStatVfs : NSObject {
 @public
  /*!
   @brief File system block size (used for block counts).
   */
  jlong f_bsize_;
  /*!
   @brief Fundamental file system block size.
   */
  jlong f_frsize_;
  /*!
   @brief Total block count.
   */
  jlong f_blocks_;
  /*!
   @brief Free block count.
   */
  jlong f_bfree_;
  /*!
   @brief Free block count available to non-root.
   */
  jlong f_bavail_;
  /*!
   @brief Total file (inode) count.
   */
  jlong f_files_;
  /*!
   @brief Free file (inode) count.
   */
  jlong f_ffree_;
  /*!
   @brief Free file (inode) count available to non-root.
   */
  jlong f_favail_;
  /*!
   @brief File system id.
   */
  jlong f_fsid_;
  /*!
   @brief Bit mask of ST_* flags.
   */
  jlong f_flag_;
  /*!
   @brief Maximum filename length.
   */
  jlong f_namemax_;
}

#pragma mark Package-Private

- (instancetype)initWithLong:(jlong)f_bsize
                    withLong:(jlong)f_frsize
                    withLong:(jlong)f_blocks
                    withLong:(jlong)f_bfree
                    withLong:(jlong)f_bavail
                    withLong:(jlong)f_files
                    withLong:(jlong)f_ffree
                    withLong:(jlong)f_favail
                    withLong:(jlong)f_fsid
                    withLong:(jlong)f_flag
                    withLong:(jlong)f_namemax;

@end

J2OBJC_EMPTY_STATIC_INIT(LibcoreIoStructStatVfs)

FOUNDATION_EXPORT void LibcoreIoStructStatVfs_initWithLong_withLong_withLong_withLong_withLong_withLong_withLong_withLong_withLong_withLong_withLong_(LibcoreIoStructStatVfs *self, jlong f_bsize, jlong f_frsize, jlong f_blocks, jlong f_bfree, jlong f_bavail, jlong f_files, jlong f_ffree, jlong f_favail, jlong f_fsid, jlong f_flag, jlong f_namemax);

FOUNDATION_EXPORT LibcoreIoStructStatVfs *new_LibcoreIoStructStatVfs_initWithLong_withLong_withLong_withLong_withLong_withLong_withLong_withLong_withLong_withLong_withLong_(jlong f_bsize, jlong f_frsize, jlong f_blocks, jlong f_bfree, jlong f_bavail, jlong f_files, jlong f_ffree, jlong f_favail, jlong f_fsid, jlong f_flag, jlong f_namemax) NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(LibcoreIoStructStatVfs)

#endif // _LibcoreIoStructStatVfs_H_
