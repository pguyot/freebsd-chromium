--- ./media/audio/audio_input_volume_unittest.cc.orig	2014-03-26 21:15:58.000000000 +0100
+++ ./media/audio/audio_input_volume_unittest.cc	2014-03-28 10:57:59.000000000 +0100
@@ -74,7 +74,7 @@
         params, device_id);
     EXPECT_TRUE(NULL != ais);
 
-#if defined(OS_LINUX) || defined(OS_OPENBSD)
+#if defined(OS_LINUX) || defined(OS_BSD)
     // Some linux devices do not support our settings, we may fail to open
     // those devices.
     if (!ais->Open()) {
