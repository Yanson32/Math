#!/bin/bash
cmake -S . -B ./build/gcc/debug -DCMAKE_BUILD_TYPE:STRING="Debug" 
cmake -S . -B ./build/gcc/release -DCMAKE_BUILD_TYPE:STIRNG="Release" 

