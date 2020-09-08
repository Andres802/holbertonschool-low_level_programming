#!/bin/bash
wget -P /tmp/ https://raw.githubusercontent.com/Andres802/holbertonschool-low_level_programming/master/0x18-dynamic_libraries/raffle.so
export LD_PRELOAD=/tmp/raffle.so