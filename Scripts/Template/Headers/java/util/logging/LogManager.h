//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/util/logging/LogManager.java
//

#ifndef _JavaUtilLoggingLogManager_H_
#define _JavaUtilLoggingLogManager_H_

#include <j2objc/J2ObjC_header.h>

@class JavaIoInputStream;
@class JavaUtilLoggingLevel;
@class JavaUtilLoggingLogger;
@protocol JavaBeansPropertyChangeListener;
@protocol JavaUtilEnumeration;
@protocol JavaUtilLoggingLoggingMXBean;

/*!
 @brief <code>LogManager</code> is used to maintain configuration properties of the
 logging framework, and to manage a hierarchical namespace of all named
 <code>Logger</code> objects.
 <p>
 There is only one global <code>LogManager</code> instance in the
 application, which can be get by calling static method
 <code>getLogManager()</code>. This instance is created and
 initialized during class initialization and cannot be changed.
 <p>
 The <code>LogManager</code> class can be specified by
 java.util.logging.manager system property, if the property is unavailable or
 invalid, the default class <code>java.util.logging.LogManager</code> will
 be used.
 <p>
 On initialization, <code>LogManager</code> reads its configuration from a
 properties file, which by default is the "lib/logging.properties" in the JRE
 directory.
 <p>
 However, two optional system properties can be used to customize the initial
 configuration process of <code>LogManager</code>.
 <ul>
 <li>"java.util.logging.config.class"</li>
 <li>"java.util.logging.config.file"</li>
 </ul>
 <p>
 These two properties can be set in three ways, by the Preferences API, by the
 "java" command line property definitions, or by system property definitions
 passed to JNI_CreateJavaVM.
 <p>
 The "java.util.logging.config.class" should specifies a class name. If it is
 set, this given class will be loaded and instantiated during
 <code>LogManager</code> initialization, so that this object's default
 constructor can read the initial configuration and define properties for
 <code>LogManager</code>.
 <p>
 If "java.util.logging.config.class" property is not set, or it is invalid, or
 some exception is thrown during the instantiation, then the
 "java.util.logging.config.file" system property can be used to specify a
 properties file. The <code>LogManager</code> will read initial
 configuration from this file.
 <p>
 If neither of these properties is defined, or some exception is thrown
 during these two properties using, the <code>LogManager</code> will read
 its initial configuration from default properties file, as described above.
 <p>
 The global logging properties may include:
 <ul>
 <li>"handlers". This property's values should be a list of class names for
 handler classes separated by whitespace, these classes must be subclasses of
 <code>Handler</code> and each must have a default constructor, these
 classes will be loaded, instantiated and registered as handlers on the root
 <code>Logger</code> (the <code>Logger</code> named ""). These
 <code>Handler</code>s maybe initialized lazily.</li>
 <li>"config". The property defines a list of class names separated by
 whitespace. Each class must have a default constructor, in which it can
 update the logging configuration, such as levels, handlers, or filters for
 some logger, etc. These classes will be loaded and instantiated during
 <code>LogManager</code> configuration</li>
 </ul>
 <p>
 This class, together with any handler and configuration classes associated
 with it, <b>must</b> be loaded from the system classpath when
 <code>LogManager</code> configuration occurs.
 <p>
 Besides global properties, the properties for loggers and Handlers can be
 specified in the property files. The names of these properties will start
 with the complete dot separated names for the handlers or loggers.
 <p>
 In the <code>LogManager</code>'s hierarchical namespace,
 <code>Loggers</code> are organized based on their dot separated names. For
 example, "x.y.z" is child of "x.y".
 <p>
 Levels for <code>Loggers</code> can be defined by properties whose name end
 with ".level". Thus "alogger.level" defines a level for the logger named as
 "alogger" and for all its children in the naming hierarchy. Log levels
 properties are read and applied in the same order as they are specified in
 the property file. The root logger's level can be defined by the property
 named as ".level".
 <p>
 This class is thread safe. It is an error to synchronize on a
 <code>LogManager</code> while synchronized on a <code>Logger</code>.
 */
@interface JavaUtilLoggingLogManager : NSObject

#pragma mark Public

/*!
 @brief Add a given logger into the hierarchical namespace.
 The
 <code>Logger.addLogger()</code> factory methods call this method to add newly
 created Logger. This returns false if a logger with the given name has
 existed in the namespace
 <p>
 Note that the <code>LogManager</code> may only retain weak references to
 registered loggers. In order to prevent <code>Logger</code> objects from being
 unexpectedly garbage collected it is necessary for <i>applications</i>
 to maintain references to them.
 </p>
 @param logger
 the logger to be added.
 @return true if the given logger is added into the namespace
 successfully, false if the given logger exists in the namespace.
 */
- (jboolean)addLoggerWithJavaUtilLoggingLogger:(JavaUtilLoggingLogger *)logger;

/*!
 @brief Add a <code>PropertyChangeListener</code>, which will be invoked when
 the properties are reread.
 @param l
 the <code>PropertyChangeListener</code> to be added.
 */
- (void)addPropertyChangeListenerWithJavaBeansPropertyChangeListener:(id<JavaBeansPropertyChangeListener>)l;

/*!
 @brief Does nothing.
 */
- (void)checkAccess;

/*!
 @brief Get the logger with the given name.
 @param name
 name of logger
 @return logger with given name, or <code>null</code> if nothing is found.
 */
- (JavaUtilLoggingLogger *)getLoggerWithNSString:(NSString *)name;

/*!
 @brief Get a <code>Enumeration</code> of all registered logger names.
 @return enumeration of registered logger names
 */
- (id<JavaUtilEnumeration>)getLoggerNames;

/*!
 @brief Get the <code>LoggingMXBean</code> instance. this implementation always throws
 an UnsupportedOperationException.
 @return the <code>LoggingMXBean</code> instance
 */
+ (id<JavaUtilLoggingLoggingMXBean>)getLoggingMXBean;

/*!
 @brief Get the global <code>LogManager</code> instance.
 @return the global <code>LogManager</code> instance
 */
+ (JavaUtilLoggingLogManager *)getLogManager;

/*!
 @brief Get the value of property with given name.
 @param name
 the name of property
 @return the value of property
 */
- (NSString *)getPropertyWithNSString:(NSString *)name;

/*!
 @brief Re-initialize the properties and configuration.
 The initialization
 process is same as the <code>LogManager</code> instantiation.
 <p>
 Notice : No <code>PropertyChangeEvent</code> are fired.
 </p>
 @throws IOException
 if any IO related problems happened.
 */
- (void)readConfiguration;

/*!
 @brief Re-initialize the properties and configuration from the given
 <code>InputStream</code>
 <p>
 Notice : No <code>PropertyChangeEvent</code> are fired.
 </p>
 @param ins
 the input stream
 @throws IOException
 if any IO related problems happened.
 */
- (void)readConfigurationWithJavaIoInputStream:(JavaIoInputStream *)ins;

/*!
 @brief Remove a <code>PropertyChangeListener</code>, do nothing if the given
 listener is not found.
 @param l
 the <code>PropertyChangeListener</code> to be removed.
 */
- (void)removePropertyChangeListenerWithJavaBeansPropertyChangeListener:(id<JavaBeansPropertyChangeListener>)l;

/*!
 @brief Reset configuration.
 <p>All handlers are closed and removed from any named loggers. All loggers'
 level is set to null, except the root logger's level is set to
 <code>Level.INFO</code>.
 */
- (void)reset;

#pragma mark Protected

/*!
 @brief Default constructor.
 This is not public because there should be only one
 <code>LogManager</code> instance, which can be get by
 <code>LogManager.getLogManager()</code>. This is protected so that
 application can subclass the object.
 */
- (instancetype)init;

#pragma mark Package-Private

+ (id)getInstanceByClassWithNSString:(NSString *)className_;

/*!
 @brief Returns a named logger associated with the supplied resource bundle.
 @param resourceBundleName the resource bundle to associate, or null for
 no associated resource bundle.
 */
- (JavaUtilLoggingLogger *)getOrCreateWithNSString:(NSString *)name
                                      withNSString:(NSString *)resourceBundleName;

/*!
 @brief Sets the level on <code>logger</code> to <code>newLevel</code>.
 Any child loggers
 currently inheriting their level from <code>logger</code> will be updated
 recursively.
 @param newLevel the new minimum logging threshold. If null, the logger's
 parent level will be used; or <code>Level.INFO</code> for loggers with no
 parent.
 */
- (void)setLevelRecursivelyWithJavaUtilLoggingLogger:(JavaUtilLoggingLogger *)logger
                            withJavaUtilLoggingLevel:(JavaUtilLoggingLevel *)newLevel;

/*!
 @brief Sets the parent of this logger in the namespace.
 Callers must first
 <code>check security</code>.
 @param newParent
 the parent logger to set.
 */
- (void)setParentWithJavaUtilLoggingLogger:(JavaUtilLoggingLogger *)logger
                 withJavaUtilLoggingLogger:(JavaUtilLoggingLogger *)newParent;

@end

J2OBJC_STATIC_INIT(JavaUtilLoggingLogManager)

FOUNDATION_EXPORT JavaUtilLoggingLogManager *JavaUtilLoggingLogManager_manager_;
J2OBJC_STATIC_FIELD_GETTER(JavaUtilLoggingLogManager, manager_, JavaUtilLoggingLogManager *)
J2OBJC_STATIC_FIELD_SETTER(JavaUtilLoggingLogManager, manager_, JavaUtilLoggingLogManager *)

FOUNDATION_EXPORT NSString *JavaUtilLoggingLogManager_LOGGING_MXBEAN_NAME_;
J2OBJC_STATIC_FIELD_GETTER(JavaUtilLoggingLogManager, LOGGING_MXBEAN_NAME_, NSString *)

FOUNDATION_EXPORT id<JavaUtilLoggingLoggingMXBean> JavaUtilLoggingLogManager_getLoggingMXBean();

FOUNDATION_EXPORT void JavaUtilLoggingLogManager_init(JavaUtilLoggingLogManager *self);

FOUNDATION_EXPORT JavaUtilLoggingLogManager *new_JavaUtilLoggingLogManager_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaUtilLoggingLogManager *JavaUtilLoggingLogManager_getLogManager();

FOUNDATION_EXPORT id JavaUtilLoggingLogManager_getInstanceByClassWithNSString_(NSString *className_);

J2OBJC_TYPE_LITERAL_HEADER(JavaUtilLoggingLogManager)

#endif // _JavaUtilLoggingLogManager_H_
