# waffling80

A TKL PCB attempting a87 compatibility with different switch and layout-options. 

* Keyboard Maintainer: [4pplet](https://github.com/4pplet)
* Hardware Supported: [waffling80](https://github.com/4pplet/waffling80)

Make example for this keyboard (after setting up your build environment):

    make 4pplet/waffling80/rev_a:default
    make 4pplet/waffling80/rev_b:default
    make 4pplet/waffling80/rev_b_ansi:default

See the [build environment setup](https://docs.qmk.fm/#/getting_started_build_tools) and the [make instructions](https://docs.qmk.fm/#/getting_started_make_guide) for more information. Brand new to QMK? Start with our [Complete Newbs Guide](https://docs.qmk.fm/#/newbs).

How to enter bootloader (DFU):
* Tap the physical reset button or short the reset-header (labled RESET) on tha back of the PCB for keyboard to enter DFU. When in DFU, it's ready to flash the firmware.

Alternative option if the firmware is already pre-flashed:
* Unplug your keyboard, hold down the Spacebar and B at the same time, plug in your keyboard and wait a second before releasing the keys. The keyboard will enter DFU and is ready to flash the firmware.
