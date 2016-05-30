#!/bin/bash
dir=`dirname "$0"`
cd "$dir"
PKG_NAME="extension-supersonic"

rm -f "$PKG_NAME.zip"
rm -rf project/obj
lime rebuild . ios || exit
rm -rf project/obj
zip -r "$PKG_NAME.zip" extension haxelib.json include.xml dependencies project frameworks ndll
