# A Love Story About Two Circles
### Computational Sound Module 1

This is the official repository for my submission to the first module of COMS3930 Creative Embedded Systems.
The project serves as a tiny art installation that tells the story of two circles that are (or maybe aren't) in love.
The project is written in C++ with the original intention being to run it on a [TTGO T1 Display ESP32 Microcontroller](https://www.lilygo.cc/products/lilygo%C2%AE-ttgo-t-display-1-14-inch-lcd-esp32-control-board),
but it can be modified to run on any microcontroller that can be flashed with the Arduino or similar IDEs.

## Getting Started

To get this installation up and running to a device near you, you should first begin by cloning this repository by
clicking on "Code" and then "Download ZIP" to get the files.
![alt-text](https://docs.github.com/assets/cb-14601/mw-1440/images/help/repository/code-button.webp) "Code Button")
![alt-text](https://docs.github.com/assets/cb-69468/mw-1440/images/help/repository/https-url-clone-cli.webp) "Download ZIP")

Once you have the files, you should open it in your favorite IDE of choice that supports C++. I recommend using the [Arduino IDE](https://www.arduino.cc/en/software)
as it is the most user-friendly and makes the process much easier.

Next, depending on your hardware specifics, you may need to install the necessary drivers to get your device to connect to the ESP32.
For MacOS users, you can get the [ch32xser drivers](https://github.com/WCHSoftGroup/ch34xser_macos) here, which should allow older
devices to connect to the ESP32.

## Building
Now that you've gotten everything together, you can build it by navigating to the Arduino IDE and opening the 'Module1.ino' file from this repository in the IDE.

