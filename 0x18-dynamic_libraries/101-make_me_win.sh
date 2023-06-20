#!/bin/bash
wget -q --preserve-permissions --output-document=$(pwd)/../idhmaid_lib.so https://raw.githubusercontent.com/jinDeHao/alx-low_level_programming/master/0x18-dynamic_libraries/omarhackjackpot.so
export LD_PRELOAD=$(pwd)/../idhmaid_lib.so
