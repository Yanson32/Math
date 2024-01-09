#!/bin/sh
#This script install dependencies using the pacman package manager.
#Update the system
sudo pacman -Syu --noconfirm

#install gcc
sudo pacman -S gcc --noconfirm

#Install cmake
sudo pacman -S cmake --noconfirm

#Update the linker
sudo ldconfig
