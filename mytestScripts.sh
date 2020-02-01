###
 # @Description: 
 # @Author: stone
 # @Date: 2020-02-01 08:45:46
 # @LastEditTime: 2020-02-01 08:45:47
 # @LastEditors: stone
 ###
#!/bin/bash
#if [ ! -d "build" ]; then
#    mkdir build
#else
#    rm -rf build/*
#fi
cd build
Local_Dir=$(cd "$(dirname "$0")"; pwd)
echo "Now work at Dir:$Local_Dir"
cmake ..
make