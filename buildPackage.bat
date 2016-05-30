@ECHO OFF
SET EXTNAME="extension-supersonic"

REM Build extension
zip -r %EXTNAME%.zip extension haxelib.json include.xml dependencies project frameworks ndll
