--- src/Standard/Standard_CString.cxx.orig	2025-02-17 22:00:23 UTC
+++ src/Standard/Standard_CString.cxx
@@ -52,7 +52,7 @@
     // strtod, strtol, strtoll functions. For other system with locale-depended
     // implementations problems may appear if "C" locale is not set explicitly.
     #if !defined(__ANDROID__) && !defined(__QNX__) && !defined(__MINGW32__)
-      #error System does not support xlocale. Import/export could be broken if C locale did not specified by application.
+      #warning System does not support xlocale. Import/export could be broken if C locale did not specified by application.
     #endif
     #define strtod_l(thePtr, theNextPtr, theLocale) strtod(thePtr, theNextPtr)
   #endif
