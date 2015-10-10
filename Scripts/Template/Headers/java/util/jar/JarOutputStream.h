//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/util/jar/JarOutputStream.java
//

#ifndef _JavaUtilJarJarOutputStream_H_
#define _JavaUtilJarJarOutputStream_H_

#include <j2objc/J2ObjC_header.h>
#include <j2objc/java/util/zip/ZipOutputStream.h>

@class JavaIoOutputStream;
@class JavaUtilJarManifest;
@class JavaUtilZipZipEntry;

/*!
 @brief The <code>JarOutputStream</code> is used to write data in the <code>JarFile</code>
 format to an arbitrary output stream
 */
@interface JavaUtilJarJarOutputStream : JavaUtilZipZipOutputStream

#pragma mark Public

/*!
 @brief Constructs a new <code>JarOutputStream</code> using an arbitrary output
 stream.
 @param os
 the <code>OutputStream</code> to write to.
 @throws IOException
 if an error occurs creating the <code>JarOutputStream</code>.
 */
- (instancetype)initWithJavaIoOutputStream:(JavaIoOutputStream *)os;

/*!
 @brief Constructs a new <code>JarOutputStream</code> using an output stream.
 The
 content of the <code>Manifest</code> must match the JAR entry information
 written subsequently to the stream.
 @param os
 the <code>OutputStream</code> to write to
 @param manifest
 the <code>Manifest</code> to output for this JAR file.
 @throws IOException
 if an error occurs creating the <code>JarOutputStream</code>.
 */
- (instancetype)initWithJavaIoOutputStream:(JavaIoOutputStream *)os
                   withJavaUtilJarManifest:(JavaUtilJarManifest *)manifest;

/*!
 @brief Writes the specified ZIP entry to the underlying stream.
 The previous
 entry is closed if it is still open.
 @param ze
 the <code>ZipEntry</code> to write to.
 @throws IOException
 if an error occurs writing to the entry.
 */
- (void)putNextEntryWithJavaUtilZipZipEntry:(JavaUtilZipZipEntry *)ze;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaUtilJarJarOutputStream)

FOUNDATION_EXPORT void JavaUtilJarJarOutputStream_initWithJavaIoOutputStream_withJavaUtilJarManifest_(JavaUtilJarJarOutputStream *self, JavaIoOutputStream *os, JavaUtilJarManifest *manifest);

FOUNDATION_EXPORT JavaUtilJarJarOutputStream *new_JavaUtilJarJarOutputStream_initWithJavaIoOutputStream_withJavaUtilJarManifest_(JavaIoOutputStream *os, JavaUtilJarManifest *manifest) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void JavaUtilJarJarOutputStream_initWithJavaIoOutputStream_(JavaUtilJarJarOutputStream *self, JavaIoOutputStream *os);

FOUNDATION_EXPORT JavaUtilJarJarOutputStream *new_JavaUtilJarJarOutputStream_initWithJavaIoOutputStream_(JavaIoOutputStream *os) NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(JavaUtilJarJarOutputStream)

#endif // _JavaUtilJarJarOutputStream_H_
