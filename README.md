# mulle-foundation-developer

#### 👑 Objective-C development with the MulleFoundation and mulle-sde

This is a collection of [mulle-sde](//github.com/mulle-sde/mulle-sde)
*extensions* to support development of [MulleFoundation](//github.com/MulleFoundation)
code. As a package **mulle-foundation-developer** is also a convenient way to
install mulle-sde and [mulle-clang](//github.com/mulle-cc/mulle-clang-project).


| Release Version                                       | Release Notes
|-------------------------------------------------------|--------------
| ![Mulle kybernetiK tag](https://img.shields.io/github/tag//mulle-foundation-developer.svg?branch=release) [![Build Status](https://github.com//mulle-foundation-developer/workflows/CI/badge.svg?branch=release)](//github.com//mulle-foundation-developer/actions)| [RELEASENOTES](RELEASENOTES.md) |



## Usage


### Create an Objective-C executable project

```
mkdir foo
cd foo
mulle-sde init -m mulle-foundation/objc-developer executable
```

### Create an Objective-C library project

```
mulle-sde init -m mulle-foundation/objc-developer -d foolib library
```



Extension                       | Type | Description
--------------------------------|------|----------------------------
mulle-foundation/objc-developer | meta | Create Objective-C projects





## Add

Use [mulle-sde](//github.com/mulle-sde) to add mulle-foundation-developer to your project:

``` sh
mulle-sde add github:MulleFoundation/mulle-foundation-developer
```

## Install

### Install with mulle-sde

Use [mulle-sde](//github.com/mulle-sde) to build and install mulle-foundation-developer:

``` sh
mulle-sde install --prefix /usr/local \
   https://github.com/MulleFoundation/mulle-foundation-developer/archive/latest.tar.gz
```

### Manual Installation


Download the latest [tar](https://github.com/MulleFoundation/mulle-foundation-developer/archive/refs/tags/latest.tar.gz) or [zip](https://github.com/MulleFoundation/mulle-foundation-developer/archive/refs/tags/latest.zip) archive and unpack it.

Install **mulle-foundation-developer** into `/usr/local` with [cmake](https://cmake.org):

``` sh
cmake -B build \
      -DCMAKE_INSTALL_PREFIX=/usr/local \
      -DCMAKE_PREFIX_PATH=/usr/local \
      -DCMAKE_BUILD_TYPE=Release &&
cmake --build build --config Release &&
cmake --install build --config Release
```

## Author

[Nat!](https://mulle-kybernetik.com/weblog) for Mulle kybernetiK


