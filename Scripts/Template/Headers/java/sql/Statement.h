//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/sql/Statement.java
//

#ifndef _JavaSqlStatement_H_
#define _JavaSqlStatement_H_

#include <j2objc/J2ObjC_header.h>
#include <j2objc/java/lang/AutoCloseable.h>
#include <j2objc/java/sql/Wrapper.h>

@class IOSIntArray;
@class IOSObjectArray;
@class JavaSqlSQLWarning;
@protocol JavaSqlConnection;
@protocol JavaSqlResultSet;

#define JavaSqlStatement_CLOSE_ALL_RESULTS 3
#define JavaSqlStatement_CLOSE_CURRENT_RESULT 1
#define JavaSqlStatement_EXECUTE_FAILED -3
#define JavaSqlStatement_KEEP_CURRENT_RESULT 2
#define JavaSqlStatement_NO_GENERATED_KEYS 2
#define JavaSqlStatement_RETURN_GENERATED_KEYS 1
#define JavaSqlStatement_SUCCESS_NO_INFO -2

/*!
 @brief Interface used for executing static SQL statements to retrieve query results.
 The resulting table rows are returned as <code>ResultSet</code>s. For any given
 <code>Statement</code> object, only one <code>ResultSet</code> can be opened at one
 time. A call to any of the execution methods of <code>Statement</code> will cause
 any previously created <code>ResultSet</code> object for that <code>Statement</code> to
 be closed implicitly.
 <p>
 To have multiple <code>ResultSet</code> objects opened concurrently, multiple
 <code>Statement</code> objects must be created and then executed.
 <p>
 To obtain such an executable statement one needs to invoke <code>Connection#createStatement</code>
 .
 */
@protocol JavaSqlStatement < JavaSqlWrapper, JavaLangAutoCloseable, NSObject, JavaObject >

/*!
 @brief Adds a specified SQL command to the list of commands for this <code>Statement</code>
 .
 <p>
 The list of commands is executed by invoking the <code>executeBatch</code>
 method.
 @param sql
 the SQL command as a String. Typically an <code>INSERT</code> or
 <code>UPDATE</code> statement.
 @throws SQLException
 if an error occurs accessing the database or the database
 does not support batch updates.
 */
- (void)addBatchWithNSString:(NSString *)sql;

/*!
 @brief Cancels this statement's execution if both the database and the JDBC
 driver support aborting an SQL statement in flight.
 This method can be
 used by one thread to stop a statement that is executed on another
 thread.
 @throws SQLException
 if an error occurs accessing the database.
 */
- (void)cancel;

/*!
 @brief Clears the current list of SQL commands for this statement.
 @throws SQLException
 if an error occurs accessing the database or the database
 does not support batch updates.
 */
- (void)clearBatch;

/*!
 @brief Clears all <code>SQLWarnings</code> from this statement.
 @throws SQLException
 if an error occurs accessing the database.
 */
- (void)clearWarnings;

/*!
 @brief Releases this statement's database and JDBC driver resources.
 <p>
 Using this method to release these resources as soon as possible is
 strongly recommended.
 <p>
 One should not rely on the resources being automatically released when
 finalized during garbage collection. Doing so can result in unpredictable
 behavior for the application.
 @throws SQLException
 if an error occurs accessing the database.
 */
- (void)close;

/*!
 @brief Executes a supplied SQL statement.
 This may return multiple <code>ResultSet</code>
 s.
 <p>
 Use the <code>getResultSet</code> or <code>getUpdateCount</code> methods to get the
 first result and <code>getMoreResults</code> to get any subsequent results.
 @param sql
 the SQL statement to execute
 @return <code>true</code> if the first result is a <code>ResultSet</code>, <code>false</code>
  if the first result is an update count or if there is no
 result.
 @throws SQLException
 if an error occurs accessing the database.
 */
- (jboolean)executeWithNSString:(NSString *)sql;

/*!
 @brief Executes a supplied SQL statement.
 This may return multiple <code>ResultSet</code>
 s. This method allows control of whether auto-generated Keys
 should be made available for retrieval, if the SQL statement is an
 <code>INSERT</code> statement.
 <p>
 Use the <code>getResultSet</code> or <code>getUpdateCount</code> methods to get the
 first result and <code>getMoreResults</code> to get any subsequent results.
 @param sql
 the SQL statement to execute.
 @param autoGeneratedKeys
 a flag indicating whether to make auto generated keys
 available for retrieval. This parameter must be one of <code>Statement.NO_GENERATED_KEYS</code>
  or <code>Statement.RETURN_GENERATED_KEYS</code>
 .
 @return <code>true</code> if results exists and the first result is a <code>ResultSet</code>
 , <code>false</code> if the first result is an update count
 or if there is no result.
 @throws SQLException
 if an error occurs accessing the database.
 */
- (jboolean)executeWithNSString:(NSString *)sql
                        withInt:(jint)autoGeneratedKeys;

/*!
 @brief Executes the supplied SQL statement.
 This may return multiple <code>ResultSet</code>
 s. This method allows retrieval of auto generated keys
 specified by the supplied array of column indexes, if the SQL statement
 is an <code>INSERT</code> statement.
 <p>
 Use the <code>getResultSet</code> or <code>getUpdateCount</code> methods to get the
 first result and <code>getMoreResults</code> to get any subsequent results.
 @param sql
 the SQL statement to execute.
 @param columnIndexes
 an array of indexes of the columns in the inserted row which
 should be made available for retrieval via the <code>getGeneratedKeys</code>
  method.
 @return <code>true</code> if the first result is a <code>ResultSet</code>, <code>false</code>
  if the first result is an update count or if there is no
 result.
 @throws SQLException
 if an error occurs accessing the database.
 */
- (jboolean)executeWithNSString:(NSString *)sql
                   withIntArray:(IOSIntArray *)columnIndexes;

/*!
 @brief Executes the supplied SQL statement.
 This may return multiple <code>ResultSet</code>
 s. This method allows retrieval of auto generated keys
 specified by the supplied array of column indexes, if the SQL statement
 is an <code>INSERT</code> statement.
 <p>
 Use the <code>getResultSet</code> or <code>getUpdateCount</code> methods to get the
 first result and <code>getMoreResults</code> to get any subsequent results.
 @param sql
 the SQL statement to execute.
 @param columnNames
 an array of column names in the inserted row which should be
 made available for retrieval via the <code>getGeneratedKeys</code>
 method.
 @return <code>true</code> if the first result is a <code>ResultSet</code>, <code>false</code>
  if the first result is an update count or if there is no
 result
 @throws SQLException
 if an error occurs accessing the database.
 */
- (jboolean)executeWithNSString:(NSString *)sql
              withNSStringArray:(IOSObjectArray *)columnNames;

/*!
 @brief Submits a batch of SQL commands to the database.
 Returns an array of
 update counts, if all the commands execute successfully.
 <p>
 If one of the commands in the batch fails, this method can throw a
 <code>BatchUpdateException</code> and the JDBC driver may or may not process
 the remaining commands. The JDBC driver must behave consistently with the
 underlying database, following the "all or nothing" principle. If the
 driver continues processing, the array of results returned contains the
 same number of elements as there are commands in the batch, with a
 minimum of one of the elements having the <code>EXECUTE_FAILED</code> value.
 @return an array of update counts, with one entry for each command in the
 batch. The elements are ordered according to the order in which
 the commands were added to the batch.
 <p>
 <ol>
 <li>If the value of an element is &ge; 0, the corresponding
 command completed successfully and the value is the <i>update
 count</i> (the number of rows in the database affected by the
 command) for that command.</li>
 <li>If the value is <code>SUCCESS_NO_INFO</code>, the command
 completed successfully but the number of rows affected is
 unknown.
 <li>
 <li>If the value is <code>EXECUTE_FAILED</code>, the command failed.
 </ol>
 @throws SQLException
 if an error occurs accessing the database.
 */
- (IOSIntArray *)executeBatch;

/*!
 @brief Executes a supplied SQL statement.
 Returns a single <code>ResultSet</code>.
 @param sql
 an SQL statement to execute. Typically a <code>SELECT</code>
 statement
 @return a <code>ResultSet</code> containing the data produced by the SQL
 statement. Never null.
 @throws SQLException
 if an error occurs accessing the database or if the statement
 produces anything other than a single <code>ResultSet</code>.
 */
- (id<JavaSqlResultSet>)executeQueryWithNSString:(NSString *)sql;

/*!
 @brief Executes the supplied SQL statement.
 The statement may be an <code>INSERT</code>
 , <code>UPDATE</code> or <code>DELETE</code> statement or a statement which
 returns nothing.
 @param sql
 an SQL statement to execute - an SQL <code>INSERT</code>, <code>UPDATE</code>
 , <code>DELETE</code> or a statement which returns nothing
 @return the count of updated rows, or 0 for a statement that returns
 nothing.
 @throws SQLException
 if an error occurs accessing the database or if the statement
 produces a <code>ResultSet</code>.
 */
- (jint)executeUpdateWithNSString:(NSString *)sql;

/*!
 @brief Executes the supplied SQL statement.
 This method allows control of
 whether auto-generated Keys should be made available for retrieval.
 @param sql
 an SQL statement to execute - an SQL <code>INSERT</code>, <code>UPDATE</code>
 , <code>DELETE</code> or a statement which does not return
 anything.
 @param autoGeneratedKeys
 a flag that indicates whether to allow retrieval of auto
 generated keys. Parameter must be one of <code>Statement.RETURN_GENERATED_KEYS</code>
  or <code>Statement.NO_GENERATED_KEYS</code>
 @return the number of updated rows, or 0 if the statement returns
 nothing.
 @throws SQLException
 if an error occurs accessing the database or if the statement
 produces a <code>ResultSet</code>.
 */
- (jint)executeUpdateWithNSString:(NSString *)sql
                          withInt:(jint)autoGeneratedKeys;

/*!
 @brief Executes the supplied SQL statement.
 This method allows retrieval of auto
 generated keys specified by the supplied array of column indexes.
 @param sql
 an SQL statement to execute - an SQL <code>INSERT</code>, <code>UPDATE</code>
 , <code>DELETE</code> or a statement which returns nothing
 @param columnIndexes
 an array of indexes of the columns in the inserted row which
 should be made available for retrieval via the <code>getGeneratedKeys</code>
  method.
 @return the count of updated rows, or 0 for a statement that returns
 nothing.
 @throws SQLException
 if an error occurs accessing the database or if the statement
 produces a <code>ResultSet</code>.
 */
- (jint)executeUpdateWithNSString:(NSString *)sql
                     withIntArray:(IOSIntArray *)columnIndexes;

/*!
 @brief Executes the supplied SQL statement.
 This method allows retrieval of auto
 generated keys specified by the supplied array of column names.
 @param sql
 an SQL statement to execute - an SQL <code>INSERT</code>, <code>UPDATE</code>
 , <code>DELETE</code> or a statement which returns nothing
 @param columnNames
 an array of column names in the inserted row which should be
 made available for retrieval via the <code>getGeneratedKeys</code>
 method.
 @return the count of updated rows, or 0 for a statement that returns
 nothing.
 @throws SQLException
 if an error occurs accessing the database or if the statement
 produces a <code>ResultSet</code>.
 */
- (jint)executeUpdateWithNSString:(NSString *)sql
                withNSStringArray:(IOSObjectArray *)columnNames;

/*!
 @brief Gets the <code>Connection</code> object which created this statement.
 @return the <code>Connection</code> through which this statement is
 transmitted to the database.
 @throws SQLException
 if an error occurs accessing the database.
 */
- (id<JavaSqlConnection>)getConnection;

/*!
 @brief Gets the default direction for fetching rows for <code>ResultSet</code>s
 generated from this statement.
 @return the default fetch direction, one of:
 <ul>
 <li>ResultSet.FETCH_FORWARD</li> <li>ResultSet.FETCH_REVERSE</li>
 <li>ResultSet.FETCH_UNKNOWN</li>
 </ul>
 @throws SQLException
 if an error occurs accessing the database.
 */
- (jint)getFetchDirection;

/*!
 @brief Gets the default number of rows for a fetch for the <code>ResultSet</code>
 objects returned from this statement.
 @return the default fetch size for <code>ResultSet</code>s produced by this
 statement.
 @throws SQLException
 if an error occurs accessing the database.
 */
- (jint)getFetchSize;

/*!
 @brief Returns auto generated keys created by executing this statement.
 @return a <code>ResultSet</code> containing the auto generated keys - empty if
 no keys are generated by this statement.
 @throws SQLException
 if an error occurs accessing the database.
 */
- (id<JavaSqlResultSet>)getGeneratedKeys;

/*!
 @brief Gets the maximum number of bytes which can be returned as values from
 character and binary type columns in a <code>ResultSet</code> derived from this
 statement.
 This limit applies to <code>BINARY</code>, <code>VARBINARY</code>,
 <code>LONGVARBINARY</code>, <code>CHAR</code>, <code>VARCHAR</code>, and <code>LONGVARCHAR</code>
  types. Any data exceeding the maximum size is abandoned
 without announcement.
 @return the current size limit, where <code>0</code> means that there is no
 limit.
 @throws SQLException
 if an error occurs accessing the database.
 */
- (jint)getMaxFieldSize;

/*!
 @brief Gets the maximum number of rows that a <code>ResultSet</code> can contain when
 produced from this statement.
 If the limit is exceeded, the excess rows
 are discarded silently.
 @return the current row limit, where <code>0</code> means that there is no
 limit.
 @throws SQLException
 if an error occurs accessing the database.
 */
- (jint)getMaxRows;

/*!
 @brief Moves to this statement's next result.
 Returns <code>true</code> if it is a
 <code>ResultSet</code>. Any current <code>ResultSet</code> objects previously
 obtained with <code>getResultSet()</code> are closed implicitly.
 @return <code>true</code> if the next result is a <code>ResultSet</code>, <code>false</code>
  if the next result is not a <code>ResultSet</code> or if there
 are no more results. Note that if there is no more data, this
 method will return <code>false</code> and <code>getUpdateCount</code> will
 return -1.
 @throws SQLException
 if an error occurs accessing the database.
 */
- (jboolean)getMoreResults;

/*!
 @brief Moves to this statement's next result.
 Returns <code>true</code> if the next
 result is a <code>ResultSet</code>. Any current <code>ResultSet</code> objects
 previously obtained with <code>getResultSet()</code> are handled as indicated
 by a supplied Flag parameter.
 @param current
 a flag indicating what to do with existing <code>ResultSet</code>s.
 This parameter must be one of <code>Statement.CLOSE_ALL_RESULTS</code>
 , <code>Statement.CLOSE_CURRENT_RESULT</code>
  or <code>Statement.KEEP_CURRENT_RESULT</code>
 .
 @return <code>true</code> if the next result exists and is a <code>ResultSet</code>
 , <code>false</code> if the next result is not a <code>ResultSet</code> or
 if there are no more results. Note that if there is no more data,
 this method will return <code>false</code> and <code>getUpdateCount</code>
 will return -1.
 @throws SQLException
 if an error occurs accessing the database.
 */
- (jboolean)getMoreResultsWithInt:(jint)current;

/*!
 @brief Gets the timeout value for the statement's execution time.
 The JDBC
 driver will wait up to this value for the execution to complete - after
 the limit is exceeded an SQL <code>Exception</code> is thrown.
 @return the current query timeout value, where <code>0</code> indicates that
 there is no current timeout.
 @throws SQLException
 if an error occurs accessing the database.
 */
- (jint)getQueryTimeout;

/*!
 @brief Gets the current result.
 Should only be called once per result.
 @return the <code>ResultSet</code> for the current result. <code>null</code> if the
 result is an update count or if there are no more results.
 @throws SQLException
 if an error occurs accessing the database.
 */
- (id<JavaSqlResultSet>)getResultSet;

/*!
 @brief Gets the concurrency setting for <code>ResultSet</code> objects generated by
 this statement.
 @return <code>ResultSet.CONCUR_READ_ONLY</code> or <code>ResultSet.CONCUR_UPDATABLE</code>
 .
 @throws SQLException
 if an error occurs accessing the database.
 */
- (jint)getResultSetConcurrency;

/*!
 @brief Gets the cursor hold setting for <code>ResultSet</code> objects generated by
 this statement.
 @return <code>ResultSet.HOLD_CURSORS_OVER_COMMIT</code> or <code>ResultSet.CLOSE_CURSORS_AT_COMMIT</code>
 @throws SQLException
 if there is an error while accessing the database.
 */
- (jint)getResultSetHoldability;

/*!
 @brief Gets the <code>ResultSet</code> type setting for <code>ResultSet</code>s derived
 from this statement.
 @return <code>ResultSet.TYPE_FORWARD_ONLY</code> for a <code>ResultSet</code> where
 the cursor can only move forwards, <code>ResultSet.TYPE_SCROLL_INSENSITIVE</code>
  for a <code>ResultSet</code> which
 is scrollable but is not sensitive to changes made by others,
 <code>ResultSet.TYPE_SCROLL_SENSITIVE</code> for a <code>ResultSet</code>
 which is scrollable but is sensitive to changes made by others.
 @throws SQLException
 if there is an error accessing the database.
 */
- (jint)getResultSetType;

/*!
 @brief Gets an update count for the current result if it is not a <code>ResultSet</code>
 .
 @return the current result as an update count. <code>-1</code> if the current
 result is a <code>ResultSet</code> or if there are no more results.
 @throws SQLException
 if an error occurs accessing the database.
 */
- (jint)getUpdateCount;

/*!
 @brief Retrieves the first <code>SQLWarning</code> reported by calls on this
 statement.
 If there are multiple warnings, subsequent warnings are
 chained to the first one. The chain of warnings is cleared each time the
 statement is executed.
 <p>
 Warnings associated with reads from the <code>ResultSet</code> returned from
 executing the statement will be attached to the <code>ResultSet</code>, not the
 statement object.
 @return an SQLWarning, null if there are no warnings
 @throws SQLException
 if an error occurs accessing the database.
 */
- (JavaSqlSQLWarning *)getWarnings;

/*!
 @brief Sets the SQL cursor name.
 This name is used by subsequent statement
 execute methods.
 <p>
 Cursor names must be unique within one Connection.
 <p>
 With the cursor name set, it can then be used in SQL positioned
 update or delete statements to determine the current row in a <code>ResultSet</code>
  generated from this statement. The positioned update or delete
 must be done with a different statement than this one.
 @param name
 the Cursor name as a string,
 @throws SQLException
 if an error occurs accessing the database.
 */
- (void)setCursorNameWithNSString:(NSString *)name;

/*!
 @brief Sets Escape Processing mode.
 <p>
 If Escape Processing is on, the JDBC driver will do escape substitution
 on an SQL statement before sending it for execution. This does not apply
 to <code>PreparedStatement</code>s since they are processed when created,
 before this method can be called.
 @param enable
 <code>true</code> to set escape processing mode <i>on</i>, <code>false</code>
  to turn it <i>off</i>.
 @throws SQLException
 if an error occurs accessing the database.
 */
- (void)setEscapeProcessingWithBoolean:(jboolean)enable;

/*!
 @brief Sets the fetch direction - a hint to the JDBC driver about the direction
 of processing of rows in <code>ResultSet</code>s created by this statement.
 The default fetch direction is <code>FETCH_FORWARD</code>.
 @param direction
 which fetch direction to use. This parameter should be one of
 <ul>
 <li><code>ResultSet.FETCH_UNKNOWN</code></li>
 <li><code>ResultSet.FETCH_FORWARD</code></li>
 <li><code>ResultSet.FETCH_REVERSE</code></li>
 </ul>
 @throws SQLException
 if there is an error while accessing the database or if the
 fetch direction is unrecognized.
 */
- (void)setFetchDirectionWithInt:(jint)direction;

/*!
 @brief Sets the fetch size.
 This is a hint to the JDBC driver about how many
 rows should be fetched from the database when more are required by
 application processing.
 @param rows
 the number of rows that should be fetched. <code>0</code> tells the driver
 to ignore the hint. Should be less than <code>getMaxRows</code> for
 this statement. Should not be negative.
 @throws SQLException
 if an error occurs accessing the database, or if the rows
 parameter is out of range.
 */
- (void)setFetchSizeWithInt:(jint)rows;

/*!
 @brief Sets the maximum number of bytes for <code>ResultSet</code> columns that
 contain character or binary values.
 This applies to <code>BINARY</code>,
 <code>VARBINARY</code>, <code>LONGVARBINARY</code>, <code>CHAR</code>, <code>VARCHAR</code>,
 and <code>LONGVARCHAR</code> fields. Any data exceeding the maximum size is
 abandoned without announcement.
 @param max
 the maximum field size in bytes. <code>0</code> means "no limit".
 @throws SQLException
 if an error occurs accessing the database or the <code>max</code>
 value is &lt; <code>0</code>.
 */
- (void)setMaxFieldSizeWithInt:(jint)max;

/*!
 @brief Sets the maximum number of rows that any <code>ResultSet</code> can contain.
 If the number of rows exceeds this value, the additional rows are
 silently discarded.
 @param max
 the maximum number of rows. <code>0</code> means "no limit".
 @throws SQLException
 if an error occurs accessing the database or if max < <code>0</code>
 .
 */
- (void)setMaxRowsWithInt:(jint)max;

/*!
 @brief Sets the timeout, in seconds, for queries - how long the driver will
 allow for completion of a statement execution.
 If the timeout is
 exceeded, the query will throw an <code>SQLException</code>.
 @param seconds
 timeout in seconds. 0 means no timeout ("wait forever")
 @throws SQLException
 if an error occurs accessing the database or if seconds <
 <code>0</code>.
 */
- (void)setQueryTimeoutWithInt:(jint)seconds;

/*!
 @brief Returns true if this statement has been closed, false otherwise.
 */
- (jboolean)isClosed;

/*!
 @brief Hints whether this statement should be pooled.
 Defaults to false for <code>Statement</code>,
 but true for <code>CallableStatement</code> and <code>PreparedStatement</code>. Pool manager
 implementations may or may not honor this hint.
 */
- (void)setPoolableWithBoolean:(jboolean)poolable;

/*!
 @brief Returns true if this statement is poolable, false otherwise.
 */
- (jboolean)isPoolable;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaSqlStatement)

J2OBJC_STATIC_FIELD_GETTER(JavaSqlStatement, CLOSE_ALL_RESULTS, jint)

J2OBJC_STATIC_FIELD_GETTER(JavaSqlStatement, CLOSE_CURRENT_RESULT, jint)

J2OBJC_STATIC_FIELD_GETTER(JavaSqlStatement, EXECUTE_FAILED, jint)

J2OBJC_STATIC_FIELD_GETTER(JavaSqlStatement, KEEP_CURRENT_RESULT, jint)

J2OBJC_STATIC_FIELD_GETTER(JavaSqlStatement, NO_GENERATED_KEYS, jint)

J2OBJC_STATIC_FIELD_GETTER(JavaSqlStatement, RETURN_GENERATED_KEYS, jint)

J2OBJC_STATIC_FIELD_GETTER(JavaSqlStatement, SUCCESS_NO_INFO, jint)

J2OBJC_TYPE_LITERAL_HEADER(JavaSqlStatement)

#endif // _JavaSqlStatement_H_
