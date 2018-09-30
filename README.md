# ergodox-keymap

> my layout for the [Ergodox EZ](https://ergodox-ez.com/) keyboard

:warning: This is still work in progress!

// TODO: insert image here

## Motivation

// TODO

## Inspired by

* https://github.com/naps62/ergodox-layout/
* https://github.com/ianlewis/ergodox_keymap/
* https://implementsblog.com/2016/10/16/my-ergodox-ezs-custom-layout/

## Build

To build the keymap you need to first download the
[qmk\_firmware](https://github.com/jackhumbert/qmk_firmware/) and
create a link to this repository.

```shell
$ git clone https://github.com/jackhumbert/qmk_firmware.git
$ cd qmk_firmware
$ ls -s /path/to/ergodox-keymap keyboards/ergodox/keymaps/waynee95
```

Then you can build the keymap hex file.

```shell
$ make keyboard=ergodox keymap=waynee95
```

## Flashing

Make sure you have the
[teensy\_loader\_cli](http://www.pjrc.com/teensy/loader_cli.html) installed.
Then you can flash to the Ergodox Ez on USB. Run this command and hit
the reset button on the Ergodox Ez.

```shell
$ teensy_loader_cli -mmcu=atmega32u4 -w -v waynee95.hex
```

If you have the teensy\_loader\_cli installed, you can also build and flash the
keymap in one step.

```shell
$ make teensy keyboard=ergodox keymap=waynee95
```

## License

[MIT](LICENSE)
