---
layout: page
title: About
nav_order: 0
---

<img id="mainSiteLogo" src="/Pinetime/assets/about/logo.svg" alt="InfiniTime logo" title="InfiniTime Logo">


An open source firmware for the Pinetime

Source code, releases and documentation available on Github.

The **Pinetime** smartwatch is built around the NRF52832 MCU (512KB Flash, 64KB RAM), a 240*240 LCD display driven by the ST7789 controller, an accelerometer, a heart rate sensor, and a vibration motor.

The goal of this project is to design an open-source firmware for the Pinetime smartwatch:

 - Code written in **modern C++**;
 - Build system based on **CMake**;
 - Based on **[FreeRTOS 10.0.0](https://freertos.org)** real-time OS.
 - Using **[LittleVGL/LVGL 6.1.2](https://lvgl.io/)** as UI library...
 - ... and **[NimBLE 1.3.0](https://github.com/apache/mynewt-nimble)** as BLE stack.

## Overview

![Pinetime screens]({{ site.baseurl }}/assets/about/0.7.0/montage.jpg "PinetimeScreens")

As of now, here is the list of achievements of this project:

 - Fast and optimized LCD driver
 - BLE communication
 - Rich user interface via display, touchscreen and pushbutton
 - Time synchronization via BLE
 - Notification via BLE
 - Multiple 'apps' :
    * Clock (displays the date, time, battery level, BLE connection status, heart rate and step count)
    * Heart rate
    * Motion
    * System info (displays various info : BLE MAC, build date/time, uptime, version, ...)
    * Brightness (allows the user to configure the brightness of the display)
 - Supported by 2 companion apps (development is in progress):
    * [Gadgetbridge](https://codeberg.org/Freeyourgadget/Gadgetbridge/) (on Android)
    * [Amazfish](https://openrepos.net/content/piggz/amazfish) (on SailfishOS)
 - **[Experimental]** OTA (Over-the-air) update via BLE
 - **[Experimental]** Bootloader based on [MCUBoot](https://juullabs-oss.github.io/mcuboot/)

## Contribute

This project is far from being finished, and there are still a lot of things to do for this project to become a firmware usable by the general public.

Here a quick list out of my head of things to do for this project:

 - Improve BLE communication stability and reliability
 - Improve OTA and MCUBoot bootloader
 - Add more functionalities : Alarm, chronometer, configuration, activities, heart rate logging, games,...
 - Add more BLE functionalities : call notifications, agenda, configuration, data logging,...
 - Measure power consumption and improve battery life
 - Improve documentation, take better pictures and video than mine
 - Improve the UI
 - Create companion app for multiple OSes (Linux, Android, iOS) and platforms (desktop, ARM, mobile). Do not forget the other devices from Pine64 like [the Pinephone](https://www.pine64.org/pinephone/) and the [Pinebook Pro](https://www.pine64.org/pinebook-pro/).
 - Design a simple CI (preferably self-hosted and easy to reproduce).

Do not hesitate to clone/fork the code, hack it and create pull-requests. I'll do my best to review and merge them :)

## Licenses
This project is released under the GNU General Public License version 3 or, at your option, any later version.

It integrates the following projects:
 - RTOS : **[FreeRTOS](https://freertos.org)** under the MIT license
 - UI : **[LittleVGL/LVGL](https://lvgl.io/)** under the MIT license
 - BLE stack : **[NimBLE](https://github.com/apache/mynewt-nimble)** under the Apache 2.0 license
 - Font : **[Jetbrains Mono](https://www.jetbrains.com/fr-fr/lp/mono/)** under the Apache 2.0 license

## Credits
I’m not working alone on this project. First, many people create PR for this projects. Then, there is the whole #pinetime community : a lot of people all around the world who are hacking, searching, experimenting and programming the Pinetime. We exchange our ideas, experiments and code in the chat rooms and forums.

Here are some people I would like to highlight:

 - [Atc1441](https://github.com/atc1441/) : He works on an Arduino based firmware for the Pinetime and many other smartwatches based on similar hardware. He was of great help when I was implementing support for the BMA421 motion sensor and I²C driver.
 - [Koen](https://github.com/bosmoment) : He’s working on a firmware based on RiotOS. He integrated similar libs as me : NimBLE, LittleVGL,… His help was invaluable too!
 - [Lup Yuen Lee](https://github.com/lupyuen) : He is everywhere: he works on a Rust firmware, builds a MCUBoot based bootloader for the Pinetime, designs a Flutter based companion app for smartphones and writes a lot of articles about the Pinetime!

*If you feel like you should appear on this list, just get in touch with me or submit a PR :)*
