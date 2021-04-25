---
layout: page
title: Coding Convention
parent: Contribute
nav_order: 9
---

# Coding Convention

## Language
The language of this project is **C++**, and all new code must be written in C++. (Modern) C++ provides a lot of useful tools and functionalities that are beneficial for embedded software development like `constexpr`, `template` and anything that provides zero-cost abstraction.  

It's OK to include C code if this code comes from another library like FreeRTOS, NimBLE, LVGL or the NRF-SDK.

## Coding style
The most important rule to follow is to try to keep the code as easy to read and maintain as possible.

 - **Identation** : 2 spaces, no tabulation
 - **Opening brace** at the end of the line
 - **Naming** : Choose self-describing variable name
    - **class** : PascalCase
    - **namespace** : PascalCase
    - **variable** : camelCase, **no** prefix/suffix ('_', 'm_',...) for class members
 - **Include guard** : `#pragma once` (no `#ifdef __MODULE__ / #define __MODULE__ / #endif`)
 - **Includes** :
    - files from the project : `#include "relative/path/to/the/file.h"`
    - external files and std : `#include <file.h>`
