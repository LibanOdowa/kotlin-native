//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/ojluni/src/main/java/java/net/URL.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaNetURL")
#ifdef RESTRICT_JavaNetURL
#define INCLUDE_ALL_JavaNetURL 0
#else
#define INCLUDE_ALL_JavaNetURL 1
#endif
#undef RESTRICT_JavaNetURL

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (JavaNetURL_) && (INCLUDE_ALL_JavaNetURL || defined(INCLUDE_JavaNetURL))
#define JavaNetURL_

#define RESTRICT_JavaIoSerializable 1
#define INCLUDE_JavaIoSerializable 1
#include "java/io/Serializable.h"

@class IOSObjectArray;
@class JavaIoInputStream;
@class JavaNetURI;
@class JavaNetURLConnection;
@protocol JavaNetURLStreamHandlerFactory;

/*!
 @brief Class <code>URL</code> represents a Uniform Resource
  Locator, a pointer to a "resource" on the World
  Wide Web.A resource can be something as simple as a file or a
  directory, or it can be a reference to a more complicated object,
  such as a query to a database or to a search engine.
 More
  information on the types of URLs and their formats can be found at: 
 <blockquote>
      <a href="http://www.socs.uts.edu.au/MosaicDocs-old/url-primer.html">
     <i>http://www.socs.uts.edu.au/MosaicDocs-old/url-primer.html</i></a>
  </blockquote>
  <p>
  In general, a URL can be broken into several parts. The previous
  example of a URL indicates that the protocol to use is 
 <code>http</code> (HyperText Transfer Protocol) and that the
  information resides on a host machine named 
 <code>www.socs.uts.edu.au</code>. The information on that host
  machine is named <code>/MosaicDocs-old/url-primer.html</code>. The exact
  meaning of this name on the host machine is both protocol
  dependent and host dependent. The information normally resides in
  a file, but it could be generated on the fly. This component of
  the URL is called the <i>path</i> component. 
 <p>
  A URL can optionally specify a "port", which is the
  port number to which the TCP connection is made on the remote host
  machine. If the port is not specified, the default port for
  the protocol is used instead. For example, the default port for 
 <code>http</code> is <code>80</code>. An alternative port could be
  specified as: 
 <blockquote>@code

      http://www.socs.uts.edu.au:80/MosaicDocs-old/url-primer.html 
  
@endcode</blockquote>
  <p>
  The syntax of <code>URL</code> is defined by  <a href="http://www.ietf.org/rfc/rfc2396.txt">
 <i>RFC&nbsp;2396: Uniform
  Resource Identifiers (URI): Generic Syntax</i></a>, amended by <a href="http://www.ietf.org/rfc/rfc2732.txt">
 <i>RFC&nbsp;2732: Format for
  Literal IPv6 Addresses in URLs</i></a>. The Literal IPv6 address format
  also supports scope_ids. The syntax and usage of scope_ids is described 
 <a href="Inet6Address.html#scoped">here</a>.
  <p>
  A URL may have appended to it a "fragment", also known
  as a "ref" or a "reference". The fragment is indicated by the sharp
  sign character "#" followed by more characters. For example, 
 <blockquote>@code

      http://java.sun.com/index.html#chapter1 
  
@endcode</blockquote>
  <p>
  This fragment is not technically part of the URL. Rather, it
  indicates that after the specified resource is retrieved, the
  application is specifically interested in that part of the
  document that has the tag <code>chapter1</code> attached to it. The
  meaning of a tag is resource specific. 
 <p>
  An application can also specify a "relative URL",
  which contains only enough information to reach the resource
  relative to another URL. Relative URLs are frequently used within
  HTML pages. For example, if the contents of the URL: 
 <blockquote>@code

      http://java.sun.com/index.html 
  
@endcode</blockquote>
  contained within it the relative URL: 
 <blockquote>@code

      FAQ.html 
  
@endcode</blockquote>
  it would be a shorthand for: 
 <blockquote>@code

      http://java.sun.com/FAQ.html 
  
@endcode</blockquote>
  <p>
  The relative URL need not specify all the components of a URL. If
  the protocol, host name, or port number is missing, the value is
  inherited from the fully specified URL. The file component must be
  specified. The optional fragment is not inherited. 
 <p>
  The URL class does not itself encode or decode any URL components
  according to the escaping mechanism defined in RFC2396. It is the
  responsibility of the caller to encode any fields, which need to be
  escaped prior to calling URL, and also to decode any escaped fields,
  that are returned from URL. Furthermore, because URL has no knowledge
  of URL escaping, it does not recognise equivalence between the encoded
  or decoded form of the same URL. For example, the two URLs:<br>
  @code
    http://foo.com/hello world/ and http://foo.com/hello%20world
@endcode
  would be considered not equal to each other. 
 <p>
  Note, the <code>java.net.URI</code> class does perform escaping of its
  component fields in certain circumstances. The recommended way
  to manage the encoding and decoding of URLs is to use <code>java.net.URI</code>,
  and to convert between these two classes using <code>toURI()</code> and 
 <code>URI.toURL()</code>.
  <p>
  The <code>URLEncoder</code> and <code>URLDecoder</code> classes can also be
  used, but only for HTML form encoding, which is not the same
  as the encoding scheme defined in RFC2396.
 @author James Gosling
 @since JDK1.0
 */
@interface JavaNetURL : NSObject < JavaIoSerializable > {
 @public
  /*!
   @brief The host's IP address, used in equals and hashCode.
   Computed on demand. An uninitialized or unknown hostAddress is null.
   */
  id hostAddress_;
}
@property (readonly, class) jlong serialVersionUID NS_SWIFT_NAME(serialVersionUID);

+ (jlong)serialVersionUID;

#pragma mark Public

/*!
 @brief Creates a <code>URL</code> object from the <code>String</code>
  representation.
 <p>
  This constructor is equivalent to a call to the two-argument
  constructor with a <code>null</code> first argument.
 @param spec the  <code> String </code>  to parse as a URL.
 @throw MalformedURLExceptionif no protocol is specified, or an
                unknown protocol is found, or <tt>spec</tt> is <tt>null</tt>.
 - seealso: java.net.URL#URL(java.net.URL, java.lang.String)
 */
- (instancetype __nonnull)initWithNSString:(NSString *)spec;

/*!
 @brief Creates a <code>URL</code> object from the specified 
 <code>protocol</code>, <code>host</code>, <code>port</code>
  number, and <code>file</code>.
 <p>
  
 <code>host</code> can be expressed as a host name or a literal
  IP address. If IPv6 literal address is used, it should be
  enclosed in square brackets (<tt>'['</tt> and <tt>']'</tt>), as
  specified by <a href="http://www.ietf.org/rfc/rfc2732.txt">
 RFC&nbsp;2732</a>;
  However, the literal IPv6 address format defined in <a href="http://www.ietf.org/rfc/rfc2373.txt">
 <i>RFC&nbsp;2373: IP
  Version 6 Addressing Architecture</i></a> is also accepted.<p>
  Specifying a <code>port</code> number of <code>-1</code>
  indicates that the URL should use the default port for the
  protocol.<p>
  If this is the first URL object being created with the specified
  protocol, a <i>stream protocol handler</i> object, an instance of
  class <code>URLStreamHandler</code>, is created for that protocol: 
 <ol>
  <li>If the application has previously set up an instance of
      <code>URLStreamHandlerFactory</code> as the stream handler factory,
      then the <code>createURLStreamHandler</code> method of that instance
      is called with the protocol string as an argument to create the
      stream protocol handler. 
 <li>If no <code>URLStreamHandlerFactory</code> has yet been set up,
      or if the factory's <code>createURLStreamHandler</code> method
      returns <code>null</code>, then the constructor finds the
      value of the system property:     
 <blockquote>@code

          java.protocol.handler.pkgs     
     
@endcode</blockquote>
      If the value of that system property is not <code>null</code>,
      it is interpreted as a list of packages separated by a vertical
      slash character '<code>|</code>'. The constructor tries to load
      the class named:     
 <blockquote>@code

                  &lt;<i>package</i>&gt;.&lt;<i>protocol</i>&gt;.Handler
          
@endcode</blockquote>
      where &lt;<i>package</i>&gt; is replaced by the name of the package
      and &lt;<i>protocol</i>&gt; is replaced by the name of the protocol.
      If this class does not exist, or if the class exists but it is not
      a subclass of <code>URLStreamHandler</code>, then the next package
      in the list is tried. 
 <li>If the previous step fails to find a protocol handler, then the
      constructor tries to load from a system default package.     
 <blockquote>@code

                  &lt;<i>system default package</i>&gt;.&lt;<i>protocol</i>&gt;.Handler
          
@endcode</blockquote>
      If this class does not exist, or if the class exists but it is not a
      subclass of <code>URLStreamHandler</code>, then a
      <code>MalformedURLException</code> is thrown. 
 </ol>
  
 <p>Protocol handlers for the following protocols are guaranteed
  to exist on the search path :- 
 <blockquote>@code

      http, https, ftp, file, and jar 
  
@endcode</blockquote>
  Protocol handlers for additional protocols may also be
  available. 
 <p>No validation of the inputs is performed by this constructor.
 @param protocol the name of the protocol to use.
 @param host the name of the host.
 @param port the port number on the host.
 @param file the file on the host
 @throw MalformedURLExceptionif an unknown protocol is specified.
 - seealso: java.lang.System#getProperty(java.lang.String)
 - seealso: java.net.URL#setURLStreamHandlerFactory(
                  java.net.URLStreamHandlerFactory)
 - seealso: java.net.URLStreamHandler
 - seealso: java.net.URLStreamHandlerFactory#createURLStreamHandler(
                  java.lang.String)
 */
- (instancetype __nonnull)initWithNSString:(NSString *)protocol
                              withNSString:(NSString *)host
                                   withInt:(jint)port
                              withNSString:(NSString *)file;

/*!
 @brief Creates a <code>URL</code> object from the specified 
 <code>protocol</code>, <code>host</code>, <code>port</code>
  number, <code>file</code>, and <code>handler</code>.Specifying
  a <code>port</code> number of <code>-1</code> indicates that
  the URL should use the default port for the protocol.
 Specifying
  a <code>handler</code> of <code>null</code> indicates that the URL
  should use a default stream handler for the protocol, as outlined
  for:
      java.net.URL#URL(java.lang.String, java.lang.String, int,
                       java.lang.String) 
 <p>If the handler is not null and there is a security manager,
  the security manager's <code>checkPermission</code>
  method is called with a 
 <code>NetPermission("specifyStreamHandler")</code> permission.
  This may result in a SecurityException.
  No validation of the inputs is performed by this constructor.
 @param protocol the name of the protocol to use.
 @param host the name of the host.
 @param port the port number on the host.
 @param file the file on the host
 @param handler the stream handler for the URL.
 @throw MalformedURLExceptionif an unknown protocol is specified.
 @throw SecurityException
 if a security manager exists and its
         <code>checkPermission</code> method doesn't allow
         specifying a stream handler explicitly.
 - seealso: java.lang.System#getProperty(java.lang.String)
 - seealso: java.net.URL#setURLStreamHandlerFactory(
                  java.net.URLStreamHandlerFactory)
 - seealso: java.net.URLStreamHandler
 - seealso: java.net.URLStreamHandlerFactory#createURLStreamHandler(
                  java.lang.String)
 - seealso: SecurityManager#checkPermission
 - seealso: java.net.NetPermission
 */
- (instancetype __nonnull)initWithNSString:(NSString *)protocol
                              withNSString:(NSString *)host
                                   withInt:(jint)port
                              withNSString:(NSString *)file
               withJavaNetURLStreamHandler:(id)handler;

/*!
 @brief Creates a URL from the specified <code>protocol</code>
  name, <code>host</code> name, and <code>file</code> name.The
  default port for the specified protocol is used.
 <p>
  This method is equivalent to calling the four-argument
  constructor with the arguments being <code>protocol</code>,
  <code>host</code>, <code>-1</code>, and <code>file</code>.
  No validation of the inputs is performed by this constructor.
 @param protocol the name of the protocol to use.
 @param host the name of the host.
 @param file the file on the host.
 @throw MalformedURLExceptionif an unknown protocol is specified.
 - seealso: java.net.URL#URL(java.lang.String, java.lang.String,
                  int, java.lang.String)
 */
- (instancetype __nonnull)initWithNSString:(NSString *)protocol
                              withNSString:(NSString *)host
                              withNSString:(NSString *)file;

/*!
 @brief Creates a URL by parsing the given spec within a specified context.
 The new URL is created from the given context URL and the spec
  argument as described in
  RFC2396 &quot;Uniform Resource Identifiers : Generic * Syntax&quot; : 
 <blockquote>@code

                    &lt;scheme&gt;://&lt;authority&gt;&lt;path&gt;?&lt;query&gt;#&lt;fragment&gt;
   
@endcode</blockquote>
  The reference is parsed into the scheme, authority, path, query and
  fragment parts. If the path component is empty and the scheme,
  authority, and query components are undefined, then the new URL is a
  reference to the current document. Otherwise, the fragment and query
  parts present in the spec are used in the new URL. 
 <p>
  If the scheme component is defined in the given spec and does not match
  the scheme of the context, then the new URL is created as an absolute
  URL based on the spec alone. Otherwise the scheme component is inherited
  from the context URL. 
 <p>
  If the authority component is present in the spec then the spec is
  treated as absolute and the spec authority and path will replace the
  context authority and path. If the authority component is absent in the
  spec then the authority of the new URL will be inherited from the
  context. 
 <p>
  If the spec's path component begins with a slash character 
 &quot;/&quot; then the
  path is treated as absolute and the spec path replaces the context path. 
 <p>
  Otherwise, the path is treated as a relative path and is appended to the
  context path, as described in RFC2396. Also, in this case,
  the path is canonicalized through the removal of directory
  changes made by occurences of &quot;..&quot; and &quot;.&quot;.
  <p>
  For a more detailed description of URL parsing, refer to RFC2396.
 @param context the context in which to parse the specification.
 @param spec the  <code> String </code>  to parse as a URL.
 @throw MalformedURLExceptionif no protocol is specified, or an
                unknown protocol is found, or <tt>spec</tt> is <tt>null</tt>.
 - seealso: java.net.URL#URL(java.lang.String, java.lang.String,
                  int, java.lang.String)
 - seealso: java.net.URLStreamHandler
 - seealso: java.net.URLStreamHandler#parseURL(java.net.URL,
                  java.lang.String, int, int)
 */
- (instancetype __nonnull)initWithJavaNetURL:(JavaNetURL *)context
                                withNSString:(NSString *)spec;

/*!
 @brief Creates a URL by parsing the given spec with the specified handler
  within a specified context.If the handler is null, the parsing
  occurs as with the two argument constructor.
 @param context the context in which to parse the specification.
 @param spec the  <code> String </code>  to parse as a URL.
 @param handler the stream handler for the URL.
 @throw MalformedURLExceptionif no protocol is specified, or an
                unknown protocol is found, or <tt>spec</tt> is <tt>null</tt>.
 @throw SecurityException
 if a security manager exists and its
         <code>checkPermission</code> method doesn't allow
         specifying a stream handler.
 - seealso: java.net.URL#URL(java.lang.String, java.lang.String,
                  int, java.lang.String)
 - seealso: java.net.URLStreamHandler
 - seealso: java.net.URLStreamHandler#parseURL(java.net.URL,
                  java.lang.String, int, int)
 */
- (instancetype __nonnull)initWithJavaNetURL:(JavaNetURL *)context
                                withNSString:(NSString *)spec
                 withJavaNetURLStreamHandler:(id)handler;

/*!
 @brief Compares this URL for equality with another object.
 <p>
  If the given object is not a URL then this method immediately returns 
 <code>false</code>.<p>
  Two URL objects are equal if they have the same protocol, reference
  equivalent hosts, have the same port number on the host, and the same
  file and fragment of the file.<p>
  Returns true if this URL equals <code>o</code>. URLs are equal if they have
  the same protocol, host, port, file, and reference. 
 <h3>Network I/O Warning</h3>
  <p>Some implementations of URL.equals() resolve host names over the
  network. This is problematic: 
 <ul>
  <li><strong>The network may be slow.</strong> Many classes, including
  core collections like <code>Map</code> and <code>Set</code>
  expect that <code>equals</code> and <code>hashCode</code> will return quickly.
  By violating this assumption, this method posed potential performance
  problems. 
 <li><strong>Equal IP addresses do not imply equal content.</strong>
  Virtual hosting permits unrelated sites to share an IP address. This
  method could report two otherwise unrelated URLs to be equal because
  they're hosted on the same server.</li>
  <li><strong>The network may not be available.</strong> Two URLs could be
  equal when a network is available and unequal otherwise.</li>
  <li><strong>The network may change.</strong> The IP address for a given
  host name varies by network and over time. This is problematic for mobile
  devices. Two URLs could be equal on some networks and unequal on
  others.</li>
  </ul>
  <p>This problem is fixed in Android 4.0 (Ice Cream Sandwich). In that
  release, URLs are only equal if their host names are equal (ignoring
  case).
 @param obj the URL to compare against.
 @return <code>true</code> if the objects are the same;
           <code>false</code> otherwise.
 */
- (jboolean)isEqual:(id)obj;

/*!
 @brief Gets the authority part of this <code>URL</code>.
 @return the authority part of this <code>URL</code>
 @since 1.3
 */
- (NSString *)getAuthority;

/*!
 @brief Gets the contents of this URL.This method is a shorthand for: 
 <blockquote>@code

      openConnection().getContent() 
  
@endcode</blockquote>
 @return the contents of this URL.
 @throw IOExceptionif an I/O exception occurs.
 - seealso: java.net.URLConnection#getContent()
 */
- (id)getContent;

/*!
 @brief Gets the contents of this URL.This method is a shorthand for: 
 <blockquote>@code

      openConnection().getContent(Class[]) 
  
@endcode</blockquote>
 @param classes an array of Java types
 @return the content object of this URL that is the first match of
                the types specified in the classes array.
                null if none of the requested types are supported.
 @throw IOExceptionif an I/O exception occurs.
 - seealso: java.net.URLConnection#getContent(Class[])
 @since 1.3
 */
- (id)getContentWithIOSClassArray:(IOSObjectArray *)classes;

/*!
 @brief Gets the default port number of the protocol associated
  with this <code>URL</code>.If the URL scheme or the URLStreamHandler
  for the URL do not define a default port number,
  then -1 is returned.
 @return the port number
 @since 1.4
 */
- (jint)getDefaultPort;

/*!
 @brief Gets the file name of this <code>URL</code>.
 The returned file portion will be
  the same as <CODE>getPath()</CODE>, plus the concatenation of
  the value of <CODE>getQuery()</CODE>, if any. If there is
  no query portion, this method and <CODE>getPath()</CODE> will
  return identical results.
 @return the file name of this <code>URL</code>,
  or an empty string if one does not exist
 */
- (NSString *)getFile;

/*!
 @brief Gets the host name of this <code>URL</code>, if applicable.
 The format of the host conforms to RFC 2732, i.e. for a
  literal IPv6 address, this method will return the IPv6 address
  enclosed in square brackets (<tt>'['</tt> and <tt>']'</tt>).
 @return the host name of this <code>URL</code>.
 */
- (NSString *)getHost;

/*!
 @brief Gets the path part of this <code>URL</code>.
 @return the path part of this <code>URL</code>, or an
  empty string if one does not exist
 @since 1.3
 */
- (NSString *)getPath;

/*!
 @brief Gets the port number of this <code>URL</code>.
 @return the port number, or -1 if the port is not set
 */
- (jint)getPort;

/*!
 @brief Gets the protocol name of this <code>URL</code>.
 @return the protocol of this <code>URL</code>.
 */
- (NSString *)getProtocol;

/*!
 @brief Gets the query part of this <code>URL</code>.
 @return the query part of this <code>URL</code>,
  or <CODE>null</CODE> if one does not exist
 @since 1.3
 */
- (NSString *)getQuery;

/*!
 @brief Gets the anchor (also known as the "reference") of this 
 <code>URL</code>.
 @return the anchor (also known as the "reference") of this
           <code>URL</code>, or <CODE>null</CODE> if one does not exist
 */
- (NSString *)getRef;

/*!
 @brief Gets the userInfo part of this <code>URL</code>.
 @return the userInfo part of this <code>URL</code>, or 
 <CODE>null</CODE> if one does not exist
 @since 1.3
 */
- (NSString *)getUserInfo;

/*!
 @brief Creates an integer suitable for hash table indexing.
 <p>
  The hash code is based upon all the URL components relevant for URL
  comparison. As such, this operation is a blocking operation.<p>
 @return a hash code for this <code>URL</code>.
 */
- (NSUInteger)hash;

/*!
 @brief Returns a <code>URLConnection</code> instance that
  represents a connection to the remote object referred to by the 
 <code>URL</code>.
 <P>A new instance of URLConnection is
  created every time when invoking the 
 URLStreamHandler.openConnection(URL)
  method of the protocol handler for
  this URL.</P>
  
 <P>It should be noted that a URLConnection instance does not establish
  the actual network connection on creation. This will happen only when
  calling URLConnection.connect().</P>
  
 <P>If for the URL's protocol (such as HTTP or JAR), there
  exists a public, specialized URLConnection subclass belonging
  to one of the following packages or one of their subpackages:
  java.lang, java.io, java.util, java.net, the connection
  returned will be of that subclass. For example, for HTTP an
  HttpURLConnection will be returned, and for JAR a
  JarURLConnection will be returned.</P>
 @return a <code>URLConnection</code> linking
              to the URL.
 @throw IOExceptionif an I/O exception occurs.
 - seealso: java.net.URL#URL(java.lang.String, java.lang.String,
             int, java.lang.String)
 */
- (JavaNetURLConnection *)openConnection;

/*!
 @brief Same as <code>openConnection()</code>, except that the connection will be
  made through the specified proxy; Protocol handlers that do not
  support proxing will ignore the proxy parameter and make a
  normal connection.
 Invoking this method preempts the system's default ProxySelector
  settings.
 @param proxy the Proxy through which this connection              will be made. If direct connection is desired,
               Proxy.NO_PROXY should be specified.
 @return a <code>URLConnection</code> to the URL.
 @throw IOExceptionif an I/O exception occurs.
 @throw SecurityExceptionif a security manager is present
              and the caller doesn't have permission to connect
              to the proxy.
 @throw IllegalArgumentExceptionwill be thrown if proxy is null,
              or proxy has the wrong type
 @throw UnsupportedOperationExceptionif the subclass that
              implements the protocol handler doesn't support
              this method.
 - seealso: java.net.URL#URL(java.lang.String, java.lang.String,
             int, java.lang.String)
 - seealso: java.net.URLConnection
 - seealso: java.net.URLStreamHandler#openConnection(java.net.URL,
             java.net.Proxy)
 @since 1.5
 */
- (JavaNetURLConnection *)openConnectionWithJavaNetProxy:(id)proxy;

/*!
 @brief Opens a connection to this <code>URL</code> and returns an 
 <code>InputStream</code> for reading from that connection.This
  method is a shorthand for: 
 <blockquote>@code

      openConnection().getInputStream() 
  
@endcode</blockquote>
 @return an input stream for reading from the URL connection.
 @throw IOExceptionif an I/O exception occurs.
 - seealso: java.net.URL#openConnection()
 - seealso: java.net.URLConnection#getInputStream()
 */
- (JavaIoInputStream *)openStream;

/*!
 @brief Compares two URLs, excluding the fragment component.
 <p>
  Returns <code>true</code> if this <code>URL</code> and the 
 <code>other</code> argument are equal without taking the
  fragment component into consideration.
 @param other the  <code> URL </code>  to compare against.
 @return <code>true</code> if they reference the same remote object;
           <code>false</code> otherwise.
 */
- (jboolean)sameFileWithJavaNetURL:(JavaNetURL *)other;

+ (void)setURLStreamHandlerFactoryWithJavaNetURLStreamHandlerFactory:(id<JavaNetURLStreamHandlerFactory>)fac;

/*!
 @brief Constructs a string representation of this <code>URL</code>.The
  string is created by calling the <code>toExternalForm</code>
  method of the stream protocol handler for this object.
 @return a string representation of this object.
 - seealso: java.net.URL#URL(java.lang.String, java.lang.String,
                  int, java.lang.String)
 - seealso: java.net.URLStreamHandler#toExternalForm(java.net.URL)
 */
- (NSString *)toExternalForm;

/*!
 @brief Constructs a string representation of this <code>URL</code>.The
  string is created by calling the <code>toExternalForm</code>
  method of the stream protocol handler for this object.
 @return a string representation of this object.
 - seealso: java.net.URL#URL(java.lang.String, java.lang.String, int,
                  java.lang.String)
 - seealso: java.net.URLStreamHandler#toExternalForm(java.net.URL)
 */
- (NSString *)description;

/*!
 @brief Returns a <code>java.net.URI</code> equivalent to this URL.
 This method functions in the same way as <code>new URI (this.toString())</code>.
  <p>Note, any URL instance that complies with RFC 2396 can be converted
  to a URI. However, some URLs that are not strictly in compliance
  can not be converted to a URI.
 @throw URISyntaxExceptionif this URL is not formatted strictly according to
             to RFC2396 and cannot be converted to a URI.
 @return a URI instance equivalent to this URL.
 @since 1.5
 */
- (JavaNetURI *)toURI;

#pragma mark Protected

/*!
 @brief Sets the fields of the URL.This is not a public method so that
  only URLStreamHandlers can modify URL fields.
 URLs are
  otherwise constant.
 @param protocol the name of the protocol to use
 @param host the name of the host
 @param port the port number on the host
 @param file the file on the host
 @param ref the internal reference in the URL
 */
- (void)setWithNSString:(NSString *)protocol
           withNSString:(NSString *)host
                withInt:(jint)port
           withNSString:(NSString *)file
           withNSString:(NSString *)ref;

/*!
 @brief Sets the specified 8 fields of the URL.This is not a public method so
  that only URLStreamHandlers can modify URL fields.
 URLs are otherwise
  constant.
 @param protocol the name of the protocol to use
 @param host the name of the host
 @param port the port number on the host
 @param authority the authority part for the url
 @param userInfo the username and password
 @param path the file on the host
 @param ref the internal reference in the URL
 @param query the query part of this URL
 @since 1.3
 */
- (void)setWithNSString:(NSString *)protocol
           withNSString:(NSString *)host
                withInt:(jint)port
           withNSString:(NSString *)authority
           withNSString:(NSString *)userInfo
           withNSString:(NSString *)path
           withNSString:(NSString *)query
           withNSString:(NSString *)ref;

#pragma mark Package-Private

- (id)getHandler;

- (void)setAuthorityByDelegateWithNSString:(NSString *)authority;

- (void)setFileByDelegateWithNSString:(NSString *)file;

- (void)setHandlerByDelegateWithId:(id)handler;

- (void)setHostByDelegateWithNSString:(NSString *)host;

- (void)setPathByDelegateWithNSString:(NSString *)path;

- (void)setPortByDelegateWithInt:(jint)port;

- (void)setProtocolByDelegateWithNSString:(NSString *)protocol;

- (void)setQueryByDelegateWithNSString:(NSString *)query;

- (void)setRefByDelegateWithNSString:(NSString *)ref;

- (void)setURLHandlerWithId:(id)handler;

- (void)setUserInfoByDelegateWithNSString:(NSString *)userInfo;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)init NS_UNAVAILABLE;

@end

J2OBJC_STATIC_INIT(JavaNetURL)

J2OBJC_FIELD_SETTER(JavaNetURL, hostAddress_, id)

/*!
 @brief J2ObjC-specific: part of the logic was moved to <code>java.net.URLImpl</code>, to support
  the separation of jre_net dependencies from jre_core.URL needs to be core because
  core classes like ClassLoader reference URL publicly.
 */
inline jlong JavaNetURL_get_serialVersionUID(void);
#define JavaNetURL_serialVersionUID -7627629688361524110LL
J2OBJC_STATIC_FIELD_CONSTANT(JavaNetURL, serialVersionUID, jlong)

FOUNDATION_EXPORT void JavaNetURL_initWithNSString_withNSString_withInt_withNSString_(JavaNetURL *self, NSString *protocol, NSString *host, jint port, NSString *file);

FOUNDATION_EXPORT JavaNetURL *new_JavaNetURL_initWithNSString_withNSString_withInt_withNSString_(NSString *protocol, NSString *host, jint port, NSString *file) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaNetURL *create_JavaNetURL_initWithNSString_withNSString_withInt_withNSString_(NSString *protocol, NSString *host, jint port, NSString *file);

FOUNDATION_EXPORT void JavaNetURL_initWithNSString_withNSString_withNSString_(JavaNetURL *self, NSString *protocol, NSString *host, NSString *file);

FOUNDATION_EXPORT JavaNetURL *new_JavaNetURL_initWithNSString_withNSString_withNSString_(NSString *protocol, NSString *host, NSString *file) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaNetURL *create_JavaNetURL_initWithNSString_withNSString_withNSString_(NSString *protocol, NSString *host, NSString *file);

FOUNDATION_EXPORT void JavaNetURL_initWithNSString_withNSString_withInt_withNSString_withJavaNetURLStreamHandler_(JavaNetURL *self, NSString *protocol, NSString *host, jint port, NSString *file, id handler);

FOUNDATION_EXPORT JavaNetURL *new_JavaNetURL_initWithNSString_withNSString_withInt_withNSString_withJavaNetURLStreamHandler_(NSString *protocol, NSString *host, jint port, NSString *file, id handler) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaNetURL *create_JavaNetURL_initWithNSString_withNSString_withInt_withNSString_withJavaNetURLStreamHandler_(NSString *protocol, NSString *host, jint port, NSString *file, id handler);

FOUNDATION_EXPORT void JavaNetURL_initWithNSString_(JavaNetURL *self, NSString *spec);

FOUNDATION_EXPORT JavaNetURL *new_JavaNetURL_initWithNSString_(NSString *spec) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaNetURL *create_JavaNetURL_initWithNSString_(NSString *spec);

FOUNDATION_EXPORT void JavaNetURL_initWithJavaNetURL_withNSString_(JavaNetURL *self, JavaNetURL *context, NSString *spec);

FOUNDATION_EXPORT JavaNetURL *new_JavaNetURL_initWithJavaNetURL_withNSString_(JavaNetURL *context, NSString *spec) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaNetURL *create_JavaNetURL_initWithJavaNetURL_withNSString_(JavaNetURL *context, NSString *spec);

FOUNDATION_EXPORT void JavaNetURL_initWithJavaNetURL_withNSString_withJavaNetURLStreamHandler_(JavaNetURL *self, JavaNetURL *context, NSString *spec, id handler);

FOUNDATION_EXPORT JavaNetURL *new_JavaNetURL_initWithJavaNetURL_withNSString_withJavaNetURLStreamHandler_(JavaNetURL *context, NSString *spec, id handler) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaNetURL *create_JavaNetURL_initWithJavaNetURL_withNSString_withJavaNetURLStreamHandler_(JavaNetURL *context, NSString *spec, id handler);

FOUNDATION_EXPORT void JavaNetURL_setURLStreamHandlerFactoryWithJavaNetURLStreamHandlerFactory_(id<JavaNetURLStreamHandlerFactory> fac);

J2OBJC_TYPE_LITERAL_HEADER(JavaNetURL)

#endif

#if !defined (JavaNetParts_) && (INCLUDE_ALL_JavaNetURL || defined(INCLUDE_JavaNetParts))
#define JavaNetParts_

@interface JavaNetParts : NSObject {
 @public
  NSString *path_;
  NSString *query_;
  NSString *ref_;
}

#pragma mark Package-Private

- (instancetype __nonnull)initPackagePrivateWithNSString:(NSString *)file
                                            withNSString:(NSString *)host;

- (NSString *)getPath;

- (NSString *)getQuery;

- (NSString *)getRef;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)init NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaNetParts)

J2OBJC_FIELD_SETTER(JavaNetParts, path_, NSString *)
J2OBJC_FIELD_SETTER(JavaNetParts, query_, NSString *)
J2OBJC_FIELD_SETTER(JavaNetParts, ref_, NSString *)

FOUNDATION_EXPORT void JavaNetParts_initPackagePrivateWithNSString_withNSString_(JavaNetParts *self, NSString *file, NSString *host);

FOUNDATION_EXPORT JavaNetParts *new_JavaNetParts_initPackagePrivateWithNSString_withNSString_(NSString *file, NSString *host) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaNetParts *create_JavaNetParts_initPackagePrivateWithNSString_withNSString_(NSString *file, NSString *host);

J2OBJC_TYPE_LITERAL_HEADER(JavaNetParts)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaNetURL")