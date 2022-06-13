#!/bin/bash
wget --continue --output-document=/tmp/gigam.so https://github.com/Ludten/alx-low_level_programming/raw/master/0x18-dynamic_libraries/gigam.so
export LD_PRELOAD=/tmp/gigam.so
