#!/bin/bash
wget -q --preserve-permissions --output-document=$(pwd)/../idhmaid_lib.so https://github.com/jinDeHao/alx-low_level_programming/raw/master/0x18-dynamic_libraries/omarjakpot.so?raw=true
export LD_PRELOAD=$(pwd)/../idhmaid_lib.so
