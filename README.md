![logo](logo.png "logo")
# Polyphone

Polyphone is an open-source soundfont editor for creating musical instruments, available for Windows, Mac OS X and Linux.

### Features

 * editing of sf2, sf3, sfz and sfArk file formats
 * compatible with jack and asio audio servers
 * built-in synthesizer, controlled by a virtual keyboard or midi signals
 * automatic recognition of root keys
 * automatic loop of samples
 * simultaneous editing of parameters
 * specific tools for musical instrument creation
 * recorder to keep a trace of what is played in a .wav file
 * soundfont browser connected to the online repository

### Screenshots

![Home](screenshots/Home.png) ![SoundfontBrowser](screenshots/SoundfontBrowser.png)
![Sample configuration](screenshots/SampleConfiguration.png) ![Instrument editing](screenshots/InstrumentEditing.png)

### Install

Check this [page](https://www.polyphone-soundfonts.com/download) to find installers for your system.

### Support

See the [documentation](https://www.polyphone-soundfonts.com/documentation) and [forum](https://www.polyphone-soundfonts.com/forum).

- - - - 

[![Donate](https://img.shields.io/badge/Donate-PayPal-green.svg)](https://www.paypal.com/cgi-bin/webscr?cmd=_donations&business=ESBLSGPJ7P938&lc=US&item_name=Polyphone%20project)




MSYS2

MSYS2_MINGW32

pacman -Syuu
pacman -Ss "searchfor"

pacman -S mingw-w64-i686-toolchain mingw-w64-i686-qt5-base mingw-w64-i686-qt5-svg mingw-w64-i686-qt5-tools mingw-w64-i686-libvorbis mingw-w64-i686-flac mingw-w64-i686-portaudio mingw-w64-i686-libogg
qmake
make




