## Usage

This is a keyboard layout the [controllerworks mini36](https://controller.works/products/mini36-low-profile-ergonomic-keyboard).

### Setup QMK

If you haven't already, head over to the [tutorial](https://docs.qmk.fm/#/newbs) to make sure
you understand the basics and have everything setup.

### Create A New Keyboard Layout

Use `qmk new-keymap -kb controllerworks/mini36` to create a new layout

### Copy File Over

Copy over this files in the repo (or the parts you like) to the directory from the output of the previous step

### Compile

Use `qmk compile` to compile the layout. You may need some extra flags depending on your setup.

### Flash

Use `qmk flash` to put the firmware on you keyboard. Again you may need some extra flags depending on your setup.

It should be noted that if you are changing the way the key coloring works, you will need to flash each half of the keyboard to have the colors properly picked up on the second half of the keyboard.

For more information on how to get your keyboard into boot mode, see the [documentation](https://docs.controller.works/mini36/firmware/).
