--- ./chrome/common/pref_names.cc.orig	2014-03-26 21:15:15.000000000 +0100
+++ ./chrome/common/pref_names.cc	2014-03-28 10:57:59.000000000 +0100
@@ -963,7 +963,7 @@
 // Boolean controlling whether SafeSearch is mandatory for Google Web Searches.
 const char kForceSafeSearch[] = "settings.force_safesearch";
 
-#if defined(OS_LINUX) && !defined(OS_CHROMEOS)
+#if (defined(OS_LINUX) && !defined(OS_CHROMEOS)) || defined(OS_BSD)
 // Linux specific preference on whether we should match the system theme.
 const char kUsesSystemTheme[] = "extensions.theme.use_system";
 #endif
