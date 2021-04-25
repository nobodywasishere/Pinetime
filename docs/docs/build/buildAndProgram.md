---
layout: page
title: Build with CMake
parent: Build
nav_order: 0
---

# Build
{: .no_toc}

## Table of contents
{: .no_toc .text-delta }

- TOC
{:toc}

## Dependencies
To build this project, you'll need:
 - A cross-compiler : [ARM-GCC (9-2020-q2-update)](https://developer.arm.com/tools-and-software/open-source-software/developer-tools/gnu-toolchain/gnu-rm/downloads/9-2020-q2-update)
 - The NRF52 SDK 15.3.0 : [nRF-SDK v15.3.0](https://developer.nordicsemi.com/nRF5_SDK/nRF5_SDK_v15.x.x/nRF5_SDK_15.3.0_59ac345.zip)
 - A reasonably recent version of CMake (I use 3.16.5)

## Build steps
### Clone the repo
```
git clone https://github.com/JF002/Pinetime.git
cd Pinetime
mkdir build
cd build
```
### Project generation using CMake
CMake configures the project according to variables you specify the command line. The variables are:

 Variable | Description | Example|
----------|-------------|--------|
**ARM_NONE_EABI_TOOLCHAIN_PATH**|path to the toolchain directory|`-DARM_NONE_EABI_TOOLCHAIN_PATH=/home/jf/nrf52/gcc-arm-none-eabi-9-2020-q2-update/`|
**NRF5_SDK_PATH**|path to the NRF52 SDK|`-DNRF5_SDK_PATH=/home/jf/nrf52/Pinetime/sdk`|
**USE_JLINK, USE_GDB_CLIENT and USE_OPENOCD**|Enable *JLink* mode, *GDB Client* (Black Magic Probe) mode or *OpenOCD* mode (set the one you want to use to `1`)|`-DUSE_JLINK=1`
**CMAKE_BUILD_TYPE**| Build type (Release or Debug). Release is applied by default if this variable is not specified.|`-DCMAKE_BUILD_TYPE=Debug`
**NRFJPROG**|Path to the NRFJProg executable. Used only if `USE_JLINK` is 1.|`-DNRFJPROG=/opt/nrfjprog/nrfjprog`
**GDB_CLIENT_BIN_PATH**|Path to arm-none-eabi-gdb executable. Used only if `USE_GDB_CLIENT` is 1.|`-DGDB_CLIENT_BIN_PATH=/home/jf/nrf52/gcc-arm-none-eabi-9-2019-q4-major/bin/arm-none-eabi-gdb`
**GDB_CLIENT_TARGET_REMOTE**|Target remote connection string. Used only if `USE_GDB_CLIENT` is 1.|`-DGDB_CLIENT_TARGET_REMOTE=/dev/ttyACM0`


#### CMake command line for JLink
```
cmake -DCMAKE_BUILD_TYPE=Debug -DARM_NONE_EABI_TOOLCHAIN_PATH=... -DNRF5_SDK_PATH=... -DUSE_JLINK=1 -DNRFJPROG=... ../
```

#### CMake command line for GDB Client (Black Magic Probe)
```
cmake -DARM_NONE_EABI_TOOLCHAIN_PATH=... -DNRF5_SDK_PATH=... -DUSE_GDB_CLIENT=1 -DGDB_CLIENT_BIN_PATH=... -DGDB_CLIENT_TARGET_REMOTE=... ../
```

#### CMake command line for OpenOCD
```
cmake -DARM_NONE_EABI_TOOLCHAIN_PATH=... -DNRF5_SDK_PATH=... -DUSE_OPENOCD=1 -DGDB_CLIENT_BIN_PATH=[optional] ../
```

### Build the project
During the project generation, CMake created the following targets:
- FLASH_ERASE : mass erase the flash memory of the NRF52.
- FLASH_pinetime-app : flash the firmware into the NRF52.
- pinetime-app : build the standalone (without bootloader support) version of the firmware.
- pinetime-mcuboot-app : build the firmware with the support of the bootloader (based on MCUBoot).
- pinetime-graphics : small firmware that writes the boot graphics into the SPI flash.

If you just want to build the project and run it on the Pinetime, using *pinetime-app* is recommanded. See [this page]({{ site.baseurl }}/docs/develop/bootloader.html) for more info about bootloader support.

Build:
```
make -j pinetime-app
```

List of files generated:
Binary files are generated into the folder `src`:
 - **pinetime-app.bin, .hex and .out** : standalone firmware in bin, hex and out formats.
 - **pinetime-app.map** : map file
 - **pinetime-mcuboot-app.bin, .hex and .out** : firmware with bootloader support in bin, hex and out formats.
 - **pinetime-mcuboot-app.map** : map file
 - **pinetime-graphics.bin, .hex and .out** : firmware for the boot graphic in bin, hex and out formats.
 - **pinetime-graphics.map** : map file
