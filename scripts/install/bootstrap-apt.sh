#!/bin/sh
#This script install dependencies using the apt package manager.

#Update the system
sudo apt install update -y
sudo apt install upgrade -y
sudo apt autoremove -y
sudo apt autoclean -y

#Install dependencies
sudo apt install g++
sudo apt install cmake
