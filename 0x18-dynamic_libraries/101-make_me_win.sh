#!/bin/bash
wget --continue --output-document=/tmp/giga.so https://github.com/Ludten/alx-low_level_programming/raw/master/0x18-dynamic_libraries/giga.so
export LD_PRELOAD=/tmp/giga.so
