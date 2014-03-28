--- ./chrome/browser/ui/webui/about_ui.cc.orig	2014-03-26 21:15:43.000000000 +0100
+++ ./chrome/browser/ui/webui/about_ui.cc	2014-03-28 10:57:59.000000000 +0100
@@ -768,7 +768,7 @@
   return data;
 }
 
-#if defined(OS_LINUX) || defined(OS_OPENBSD)
+#if defined(OS_LINUX) || defined(OS_BSD)
 std::string AboutLinuxProxyConfig() {
   std::string data;
   AppendHeader(&data, 0,
@@ -784,6 +784,7 @@
   return data;
 }
 
+#if !defined(OS_BSD)
 void AboutSandboxRow(std::string* data, const std::string& prefix, int name_id,
                      bool good) {
   data->append("<tr><td>");
@@ -850,6 +851,7 @@
   return data;
 }
 #endif
+#endif
 
 // AboutMemoryHandler ----------------------------------------------------------
 
@@ -1015,7 +1017,7 @@
   } else if (source_name_ == chrome::kChromeUIDNSHost) {
     AboutDnsHandler::Start(profile(), callback);
     return;
-#if defined(OS_LINUX) || defined(OS_OPENBSD)
+#if defined(OS_LINUX) || defined(OS_BSD)
   } else if (source_name_ == chrome::kChromeUILinuxProxyConfigHost) {
     response = AboutLinuxProxyConfig();
 #endif
