#!/bin/bash
wget --continue --output-document=/tmp/gigamil.so https://github.com/Ludten/alx-low_level_programming/raw/master/0x18-dynamic_libraries/gigamil.so
export LD_PRELOAD=/tmp/gigamil.so
