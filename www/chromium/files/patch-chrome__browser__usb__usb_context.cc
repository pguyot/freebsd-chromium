--- ./chrome/browser/usb/usb_context.cc.orig	2014-03-26 21:15:48.000000000 +0100
+++ ./chrome/browser/usb/usb_context.cc	2014-03-28 10:57:59.000000000 +0100
@@ -43,7 +43,9 @@
   running_ = false;
   // Spreading running_ to the UsbEventHandler thread.
   base::subtle::MemoryBarrier();
+#if !defined(OS_FREEBSD)
   libusb_interrupt_handle_event(context_);
+#endif
   base::PlatformThread::Join(thread_handle_);
 }
 
