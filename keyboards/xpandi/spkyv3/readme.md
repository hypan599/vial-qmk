# xpandi/spkyv3

![xpandi/spkyv3](imgur.com image replace me!)

*A short description of the keyboard/project*

* Keyboard Maintainer: [hypan599](https://github.com/hypan599)
* Hardware Supported: Pi Pico
* Hardware Availability: TaoBao

Make example for this keyboard (after setting up your build environment):

    make xpandi/spkyv3:default

Flashing example for this keyboard:

    make xpandi/spkyv3:default:flash

See the [build environment setup](https://docs.qmk.fm/#/getting_started_build_tools) and the [make instructions](https://docs.qmk.fm/#/getting_started_make_guide) for more information. Brand new to QMK? Start with our [Complete Newbs Guide](https://docs.qmk.fm/#/newbs).

## Bootloader

Enter the bootloader in 3 ways:

* **Bootmagic reset**: Hold down the key at (0,0) in the matrix (usually the top left key or Escape) and plug in the keyboard
* **Physical reset button**: Briefly press the button on the back of the PCB - some may have pads you must short instead
* **Keycode in layout**: Press the key mapped to `QK_BOOT` if it is available

raw KLE data:
[{x:0.5},"0,0","0,1","0,2","0,3","0,4","0,5",{x:6.5},"0,6","0,7","0,8","0,9","0,10","0,11"],
[{x:0.5},"1,0","1,1","1,2","1,3","1,4","1,5",{x:6.5},"1,6","1,7","1,8","1,9","1,10","1,11"],
[{x:0.5},"2,0","2,1","2,2","2,3","2,4","2,5",{x:6.5},"2,6","2,7","2,8","2,9","2,10","2,11"],
[{x:0.5},"3,0","3,1","3,2","3,3","3,4","3,5",{x:6.5},"3,6","3,7","3,8","3,9","3,10","3,11"],
[{x:1.5},"4,1","4,2","4,3","4,4","4,5","4,0",{x:4.5},"4,11","4,6","4,7","4,8","4,9","4,10"]
