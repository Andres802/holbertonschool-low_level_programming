#!/bin/bash
wget -P /tmp/ https://raw.githubusercontent.com/gedafu/holbertonschool-low_level_programming/master/0x18-dynamic_libraries/raffle.so
export LD_PRELOAD=/tmp/raffle.so