###
 # @Description:
 # @Author: stone
 # @Date: 2020-02-01 08:44:51
 # @LastEditTime: 2020-02-01 08:44:52
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
