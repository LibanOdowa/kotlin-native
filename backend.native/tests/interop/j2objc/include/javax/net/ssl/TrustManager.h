//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/ojluni/src/main/java/javax/net/ssl/TrustManager.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaxNetSslTrustManager")
#ifdef RESTRICT_JavaxNetSslTrustManager
#define INCLUDE_ALL_JavaxNetSslTrustManager 0
#else
#define INCLUDE_ALL_JavaxNetSslTrustManager 1
#endif
#undef RESTRICT_JavaxNetSslTrustManager

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (JavaxNetSslTrustManager_) && (INCLUDE_ALL_JavaxNetSslTrustManager || defined(INCLUDE_JavaxNetSslTrustManager))
#define JavaxNetSslTrustManager_

/*!
 @brief This is the base interface for JSSE trust managers.
 <P>
  <code>TrustManager</code>s are responsible for managing the trust material
  that is used when making trust decisions, and for deciding whether
  credentials presented by a peer should be accepted. 
 <P>
  <code>TrustManager</code>s are created by either
  using a <code>TrustManagerFactory</code>,
  or by implementing one of the <code>TrustManager</code> subclasses.
 - seealso: TrustManagerFactory
 @since 1.4
 */
@protocol JavaxNetSslTrustManager < JavaObject >

@end

J2OBJC_EMPTY_STATIC_INIT(JavaxNetSslTrustManager)

J2OBJC_TYPE_LITERAL_HEADER(JavaxNetSslTrustManager)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaxNetSslTrustManager")