//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/net/DatagramSocket.java
//

#ifndef _JavaNetDatagramSocket_H_
#define _JavaNetDatagramSocket_H_

#include <j2objc/J2ObjC_header.h>
#include <j2objc/java/io/Closeable.h>

@class JavaIoFileDescriptor;
@class JavaNetDatagramPacket;
@class JavaNetDatagramSocketImpl;
@class JavaNetInetAddress;
@class JavaNetNetworkInterface;
@class JavaNetSocketAddress;
@class JavaNioChannelsDatagramChannel;
@protocol JavaNetDatagramSocketImplFactory;

/*!
 @brief This class implements a UDP socket for sending and receiving <code>DatagramPacket</code>
 .
 A <code>DatagramSocket</code> object can be used for both
 endpoints of a connection for a packet delivery service.
 */
@interface JavaNetDatagramSocket : NSObject < JavaIoCloseable > {
 @public
  JavaNetDatagramSocketImpl *impl_;
  JavaNetInetAddress *address_;
  jint port_;
  jboolean isBound_;
}

#pragma mark Public

/*!
 @brief Constructs a UDP datagram socket which is bound to any available port on
 the localhost.
 @throws SocketException
 if an error occurs while creating or binding the socket.
 */
- (instancetype)init;

/*!
 @brief Constructs a UDP datagram socket which is bound to the specific port
 <code>aPort</code> on the localhost.
 Valid values for <code>aPort</code> are
 between 0 and 65535 inclusive.
 @param aPort
 the port to bind on the localhost.
 @throws SocketException
 if an error occurs while creating or binding the socket.
 */
- (instancetype)initWithInt:(jint)aPort;

/*!
 @brief Constructs a UDP datagram socket which is bound to the specific local
 address <code>addr</code> on port <code>aPort</code>.
 Valid values for <code>aPort</code>
  are between 0 and 65535 inclusive.
 @param aPort
 the port to bind on the localhost.
 @param addr
 the address to bind on the localhost.
 @throws SocketException
 if an error occurs while creating or binding the socket.
 */
- (instancetype)initWithInt:(jint)aPort
     withJavaNetInetAddress:(JavaNetInetAddress *)addr;

/*!
 @brief Constructs a new <code>DatagramSocket</code> bound to the host/port specified
 by the <code>SocketAddress</code> <code>localAddr</code> or an unbound <code>DatagramSocket</code>
  if the <code>SocketAddress</code> is <code>null</code>.
 @param localAddr
 the local machine address and port to bind to.
 @throws IllegalArgumentException
 if the SocketAddress is not supported
 @throws SocketException
 if a problem occurs creating or binding the socket.
 */
- (instancetype)initWithJavaNetSocketAddress:(JavaNetSocketAddress *)localAddr;

/*!
 @brief Binds this socket to the local address and port specified by <code>localAddr</code>
 .
 If this value is <code>null</code> any free port on a valid local
 address is used.
 @param localAddr
 the local machine address and port to bind on.
 @throws IllegalArgumentException
 if the SocketAddress is not supported
 @throws SocketException
 if the socket is already bound or a problem occurs during
 binding.
 */
- (void)bindWithJavaNetSocketAddress:(JavaNetSocketAddress *)localAddr;

/*!
 @brief Closes this UDP datagram socket and all possibly associated channels.
 */
- (void)close;

/*!
 @brief Connects this datagram socket to the specific <code>address</code> and <code>port</code>.
 Future calls to <code>send</code> will use this as the default target, and <code>receive</code>
 will only accept packets from this source.
 <p>Beware: because it can't throw, this method silently ignores failures.
 Use <code>connect(SocketAddress)</code> instead.
 */
- (void)connectWithJavaNetInetAddress:(JavaNetInetAddress *)address
                              withInt:(jint)port;

/*!
 @brief Connects this datagram socket to the address and port specified by <code>peer</code>.
 Future calls to <code>send</code> will use this as the default target, and <code>receive</code>
 will only accept packets from this source.
 @throws SocketException if an error occurs.
 */
- (void)connectWithJavaNetSocketAddress:(JavaNetSocketAddress *)peer;

/*!
 @brief Disconnects this UDP datagram socket from the remote host.
 This method
 called on an unconnected socket does nothing.
 */
- (void)disconnect;

/*!
 @brief Gets the state of the socket option <code>SocketOptions.SO_BROADCAST</code>.
 @return <code>true</code> if the option is enabled, <code>false</code> otherwise.
 @throws SocketException
 if the socket is closed or the option is invalid.
 */
- (jboolean)getBroadcast;

/*!
 @brief Returns this socket's <code>DatagramChannel</code>, if one exists.
 A channel is
 available only if this socket wraps a channel. (That is, you can go from a
 channel to a socket and back again, but you can't go from an arbitrary socket to a channel.)
 In practice, this means that the socket must have been created by
 <code>java.nio.channels.DatagramChannel.open</code>.
 */
- (JavaNioChannelsDatagramChannel *)getChannel;

/*!
  internal use only
 */
- (JavaIoFileDescriptor *)getFileDescriptor$;

/*!
 @brief Gets the <code>InetAddress</code> instance representing the remote address to
 which this UDP datagram socket is connected.
 @return the remote address this socket is connected to or <code>null</code> if
 this socket is not connected.
 */
- (JavaNetInetAddress *)getInetAddress;

/*!
 @brief Returns the local address to which this socket is bound, a wildcard address if this
 socket is not yet bound, or <code>null</code> if this socket is closed.
 */
- (JavaNetInetAddress *)getLocalAddress;

/*!
 @brief Gets the local port which this socket is bound to.
 @return the local port of this socket or <code>-1</code> if this socket is
 closed and <code>0</code> if it is unbound.
 */
- (jint)getLocalPort;

/*!
 @brief Returns the <code>SocketAddress</code> this socket is bound to, or <code>null</code> for an unbound or
 closed socket.
 */
- (JavaNetSocketAddress *)getLocalSocketAddress;

/*!
 @brief Gets the remote port which this socket is connected to.
 @return the remote port of this socket. The return value <code>-1</code>
 indicates that this socket is not connected.
 */
- (jint)getPort;

/*!
 @brief Returns this socket's <code>receive buffer size</code>.
 */
- (jint)getReceiveBufferSize;

/*!
 @brief Returns the <code>SocketAddress</code> this socket is connected to, or null for an unconnected
 socket.
 */
- (JavaNetSocketAddress *)getRemoteSocketAddress;

/*!
 @brief Gets the state of the socket option <code>SocketOptions.SO_REUSEADDR</code>.
 @return <code>true</code> if the option is enabled, <code>false</code> otherwise.
 @throws SocketException
 if the socket is closed or the option is invalid.
 */
- (jboolean)getReuseAddress;

/*!
 @brief Returns this socket's <code>send buffer size</code>.
 */
- (jint)getSendBufferSize;

/*!
 @brief Gets the socket <code>receive timeout</code>.
 @throws SocketException
 if an error occurs while getting the option value.
 */
- (jint)getSoTimeout;

/*!
 @brief Returns this socket's  setting.
 @throws SocketException
 if the socket is closed or the option is invalid.
 */
- (jint)getTrafficClass;

/*!
 @brief Returns true if this socket is bound to a local address.
 See <code>bind</code>.
 */
- (jboolean)isBound;

/*!
 @brief Gets the state of this socket.
 @return <code>true</code> if the socket is closed, <code>false</code> otherwise.
 */
- (jboolean)isClosed;

/*!
 @brief Returns true if this datagram socket is connected to a remote address.
 See <code>connect</code>.
 */
- (jboolean)isConnected;

/*!
 @brief Sets the DatagramSocket and its related DatagramSocketImpl state as if a successful bind()
 took place, without actually performing an OS bind().
  used in java.nio
 */
- (void)onBindWithJavaNetInetAddress:(JavaNetInetAddress *)localAddress
                             withInt:(jint)localPort;

/*!
 @brief Sets the DatagramSocket and its related DatagramSocketImpl state as if a successful close()
 took place, without actually performing an OS close().
  used in java.nio
 */
- (void)onClose;

/*!
 @brief Sets the DatagramSocket and its related DatagramSocketImpl state as if a successful connect()
 took place, without actually performing an OS connect().
  used in java.nio
 */
- (void)onConnectWithJavaNetInetAddress:(JavaNetInetAddress *)remoteAddress
                                withInt:(jint)remotePort;

/*!
 @brief Sets the DatagramSocket and its related DatagramSocketImpl state as if a successful
 disconnect() took place, without actually performing a disconnect().
  used in java.nio
 */
- (void)onDisconnect;

/*!
 @brief Receives a packet from this socket and stores it in the argument <code>pack</code>
 .
 All fields of <code>pack</code> must be set according to the data
 received. If the received data is longer than the packet buffer size it
 is truncated. This method blocks until a packet is received or a timeout
 has expired.
 @param pack
 the <code>DatagramPacket</code> to store the received data.
 @throws IOException
 if an error occurs while receiving the packet.
 */
- (void)receiveWithJavaNetDatagramPacket:(JavaNetDatagramPacket *)pack;

/*!
 @brief Sends a packet over this socket.
 @param pack
 the <code>DatagramPacket</code> which has to be sent.
 @throws IOException
 if an error occurs while sending the packet.
 */
- (void)sendWithJavaNetDatagramPacket:(JavaNetDatagramPacket *)pack;

/*!
 @brief Sets the socket option <code>SocketOptions.SO_BROADCAST</code>.
 This option
 must be enabled to send broadcast messages.
 @param broadcast
 the socket option value to enable or disable this option.
 @throws SocketException
 if the socket is closed or the option could not be set.
 */
- (void)setBroadcastWithBoolean:(jboolean)broadcast;

/*!
 @brief Sets the socket implementation factory.
 This may only be invoked once
 over the lifetime of the application. This factory is used to create
 a new datagram socket implementation.
 @param fac
 the socket factory to use.
 @throws IOException
 if the factory has already been set.
 */
+ (void)setDatagramSocketImplFactoryWithJavaNetDatagramSocketImplFactory:(id<JavaNetDatagramSocketImplFactory>)fac;

/*!
 @brief Sets the network interface used by this socket.
 Any packets sent
 via this socket are transmitted via the specified interface.  Any
 packets received by this socket will come from the specified
 interface.  Broadcast datagrams received on this interface will
 be processed by this socket. This corresponds to Linux's SO_BINDTODEVICE.
  used by GoogleTV for DHCP
 */
- (void)setNetworkInterfaceWithJavaNetNetworkInterface:(JavaNetNetworkInterface *)netInterface;

/*!
 @brief Sets this socket's <code>receive buffer size</code>.
 */
- (void)setReceiveBufferSizeWithInt:(jint)size;

/*!
 @brief Sets the socket option <code>SocketOptions.SO_REUSEADDR</code>.
 This option
 has to be enabled if more than one UDP socket wants to be bound to the
 same address. That could be needed for receiving multicast packets.
 <p>
 There is an undefined behavior if this option is set after the socket is
 already bound.
 @param reuse
 the socket option value to enable or disable this option.
 @throws SocketException
 if the socket is closed or the option could not be set.
 */
- (void)setReuseAddressWithBoolean:(jboolean)reuse;

/*!
 @brief Sets this socket's <code>send buffer size</code>.
 */
- (void)setSendBufferSizeWithInt:(jint)size;

/*!
 @brief Sets the <code>read timeout</code> in milliseconds for this socket.
 This receive timeout defines the period the socket will block waiting to
 receive data before throwing an <code>InterruptedIOException</code>. The value
 <code>0</code> (default) is used to set an infinite timeout. To have effect
 this option must be set before the blocking method was called.
 @param timeout the timeout in milliseconds or 0 for no timeout.
 @throws SocketException
 if an error occurs while setting the option.
 */
- (void)setSoTimeoutWithInt:(jint)timeout;

/*!
 @brief Sets the  value for every packet sent by this socket.
 @throws SocketException
 if the socket is closed or the option could not be set.
 */
- (void)setTrafficClassWithInt:(jint)value;

#pragma mark Protected

/*!
 @brief Constructs a new <code>DatagramSocket</code> using the specific datagram
 socket implementation <code>socketImpl</code>.
 The created <code>DatagramSocket</code>
  will not be bound.
 @param socketImpl
 the DatagramSocketImpl to use.
 */
- (instancetype)initWithJavaNetDatagramSocketImpl:(JavaNetDatagramSocketImpl *)socketImpl;

#pragma mark Package-Private

- (void)checkOpen;

- (void)createSocketWithInt:(jint)aPort
     withJavaNetInetAddress:(JavaNetInetAddress *)addr;

/*!
 @brief Indicates whether this socket is multicast or not.
 @return the return value is always <code>false</code>.
 */
- (jboolean)isMulticastSocket;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaNetDatagramSocket)

J2OBJC_FIELD_SETTER(JavaNetDatagramSocket, impl_, JavaNetDatagramSocketImpl *)
J2OBJC_FIELD_SETTER(JavaNetDatagramSocket, address_, JavaNetInetAddress *)

FOUNDATION_EXPORT id<JavaNetDatagramSocketImplFactory> JavaNetDatagramSocket_factory_;
J2OBJC_STATIC_FIELD_GETTER(JavaNetDatagramSocket, factory_, id<JavaNetDatagramSocketImplFactory>)
J2OBJC_STATIC_FIELD_SETTER(JavaNetDatagramSocket, factory_, id<JavaNetDatagramSocketImplFactory>)

FOUNDATION_EXPORT void JavaNetDatagramSocket_init(JavaNetDatagramSocket *self);

FOUNDATION_EXPORT JavaNetDatagramSocket *new_JavaNetDatagramSocket_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void JavaNetDatagramSocket_initWithInt_(JavaNetDatagramSocket *self, jint aPort);

FOUNDATION_EXPORT JavaNetDatagramSocket *new_JavaNetDatagramSocket_initWithInt_(jint aPort) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void JavaNetDatagramSocket_initWithInt_withJavaNetInetAddress_(JavaNetDatagramSocket *self, jint aPort, JavaNetInetAddress *addr);

FOUNDATION_EXPORT JavaNetDatagramSocket *new_JavaNetDatagramSocket_initWithInt_withJavaNetInetAddress_(jint aPort, JavaNetInetAddress *addr) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void JavaNetDatagramSocket_setDatagramSocketImplFactoryWithJavaNetDatagramSocketImplFactory_(id<JavaNetDatagramSocketImplFactory> fac);

FOUNDATION_EXPORT void JavaNetDatagramSocket_initWithJavaNetDatagramSocketImpl_(JavaNetDatagramSocket *self, JavaNetDatagramSocketImpl *socketImpl);

FOUNDATION_EXPORT JavaNetDatagramSocket *new_JavaNetDatagramSocket_initWithJavaNetDatagramSocketImpl_(JavaNetDatagramSocketImpl *socketImpl) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void JavaNetDatagramSocket_initWithJavaNetSocketAddress_(JavaNetDatagramSocket *self, JavaNetSocketAddress *localAddr);

FOUNDATION_EXPORT JavaNetDatagramSocket *new_JavaNetDatagramSocket_initWithJavaNetSocketAddress_(JavaNetSocketAddress *localAddr) NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(JavaNetDatagramSocket)

#endif // _JavaNetDatagramSocket_H_
