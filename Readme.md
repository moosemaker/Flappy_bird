# SFML CMake Setup
## Description
Follow setup to bet the basic sfml project running on your computer

## Setup
* Install chocolaty
    * [Chocolaty Download Page](https://chocolatey.org/install)

* After chocolaty is installed, run ```choco install mingw``` in a new command prompt

* Install CMake
    * [CMake Download Page](https://cmake.org/download/)

* In vscode install CMake Tools
    * ![CMake Tools](https://i.imgur.com/QFazixd.png)

* in vscode terminal, run ```git submodule update --init --recursive```
* in vscode, Run ```CMake: CMake Scan for Kits```
* in vscode, Run ```CMake: Select a Kit```
    * select ```GCC [version] x86_64-w64-mingw32``` (windows)
    * select any gcc (linux)
* in vscode, Run ```CMake: Delete Cache and Reconfigure```
    * This may take a bit, but you shouldn't have to run it again
* press [f7]
* in the vscode terminal you can now run the project by Running ```build\cmake_sfml.exe```

