--- ./base/base.gypi.orig	2014-04-24 22:36:11.000000000 +0200
+++ ./base/base.gypi	2014-04-24 23:23:41.000000000 +0200
@@ -918,11 +918,15 @@
               'process/memory_stubs.cc',
             ],
             'sources/': [
+              ['exclude', '^debug/proc_maps_linux\\.cc$'],
               ['exclude', '^files/file_path_watcher_linux\\.cc$'],
               ['exclude', '^files/file_path_watcher_stub\\.cc$'],
               ['exclude', '^file_util_linux\\.cc$'],
+              ['exclude', '^process/memory_linux\\.cc$'],
               ['exclude', '^process/process_linux\\.cc$'],
               ['exclude', '^sys_info_linux\\.cc$'],
+              ['exclude', '^process/process_iterator_linux\\.cc$'],
+              ['exclude', '^process/process_metrics_linux\\.cc$'],
             ],
           }],
           # Remove all unnecessary files for build_nexe.py to avoid exceeding
