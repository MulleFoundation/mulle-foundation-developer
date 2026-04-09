## 0.26.0







feature: add Objective-C dependency template and fix demo method implementation

* new `MulleObjCDeps+PROJECT_NAME` category and public header expose a dependencies() API for project-oneshot libraries, enabling inclusion of generated objc-deps.inc
* fix demo +printName:version: implementation so it compiles and logs the provided name and version
