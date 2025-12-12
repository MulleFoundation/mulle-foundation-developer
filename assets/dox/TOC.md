# mulle-foundation-developer Library Documentation for AI

## 1. Introduction & Purpose

**mulle-foundation-developer** is a mulle-sde extension providing development tools and templates for creating MulleFoundation projects. It enables quick setup of Objective-C executable and library projects with proper build configuration, dependencies, and project structure.

This library is particularly useful for:
- Creating new MulleFoundation projects
- Setting up Objective-C development environments
- Build configuration and infrastructure
- MulleFoundation maintainers and contributors
- Extending MulleFoundation with custom libraries

## 2. Key Concepts & Design Philosophy

- **mulle-sde Integration**: Works as mulle-sde extension
- **Project Templates**: Pre-configured project structures
- **Build Management**: Proper CMake configuration
- **Dependency Resolution**: Automatic dependency management
- **Developer Workflow**: Streamlined project setup

## 3. Project Types Supported

### Executable Projects

- **mulle-foundation/objc-developer**
  - Create Objective-C executable projects
  - Full MulleFoundation integration
  - Ready to build and run

### Library Projects

- **mulle-foundation/objc-developer**
  - Create Objective-C library projects (with -d flag)
  - Proper export configuration
  - Public/private interface separation

## 4. Core Features

### Project Setup

- `mulle-sde init -m mulle-foundation/objc-developer executable`
  - Initialize executable project
  - Creates directory structure, CMakeLists.txt, source files

- `mulle-sde init -m mulle-foundation/objc-developer -d foolib library`
  - Initialize library project
  - Library-specific configuration and headers

### Generated Structure

- Source directories: `src/`, `test/`
- Build configuration: `CMakeLists.txt`
- mulle-sde config: `.mulle/` directory
- Documentation: `README.md`
- License: `LICENSE` file

### Build System

- CMake-based build (via mulle-sde)
- Automatic dependency resolution
- Test harness setup
- Installation configuration

## 5. Integration Examples

### Example 1: Create Executable
```bash
mkdir my_app
cd my_app
mulle-sde init -m mulle-foundation/objc-developer executable
mulle-sde build
./my_app
```

### Example 2: Create Library
```bash
mkdir my_lib
cd my_lib
mulle-sde init -m mulle-foundation/objc-developer -d mylib library
mulle-sde build
mulle-sde install
```

### Example 3: Add Tests
```bash
mulle-sde craft create test my_test
# Edit test/my_test/main.m
mulle-sde build
mulle-sde test
```

## 6. Dependencies

- **mulle-sde** - Build system and project manager
- **MulleFoundation** - Runtime framework
- **mulle-objc** - Object-C runtime
- **CMake** - Build generator

## 7. Workflow

1. **Project Initialization**: Use mulle-sde init with extension
2. **Development**: Edit source files in src/
3. **Testing**: Add tests to test/ directory
4. **Building**: `mulle-sde build`
5. **Installation**: `mulle-sde install`

## 8. Version Information

mulle-foundation-developer version macro: `MULLE_FOUNDATION_DEVELOPER_VERSION`
