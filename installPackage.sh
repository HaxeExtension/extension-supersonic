#!/bin/bash
dir=`dirname "$0"`
cd "$dir"
PKG_NAME="extension-supersonic"

haxelib remove "$PKG_NAME"
haxelib local "${PKG_NAME}.zip"
