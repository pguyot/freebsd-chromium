--- ./third_party/libvpx/unpack_lib_posix.sh.orig	2014-04-24 22:36:38.000000000 +0200
+++ ./third_party/libvpx/unpack_lib_posix.sh	2014-04-24 23:23:48.000000000 +0200
@@ -1,4 +1,4 @@
-#!/bin/bash -e
+#!/usr/bin/env bash
 #
 # Copyright (c) 2012 The Chromium Authors. All rights reserved.
 # Use of this source code is governed by a BSD-style license that can be
@@ -48,16 +48,12 @@
   ar=$AR
 fi
 
-obj_list="$($ar t $lib_file | grep '\.o$')"
+obj_list="$($ar t $lib_file)"
 
 function extract_object {
   for f in $obj_list; do
     filename="${f##*/}"
 
-    if [ -z "$(echo $filename | grep $1)" ]; then
-      continue
-    fi
-
     # Only echo this if debugging.
     # echo "Extract $filename from archive to $out_dir/$1."
     $ar p $lib_file $filename > $out_dir/$1
