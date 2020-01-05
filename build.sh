#!/usr/bin/env bash

[ ! -d "build" ] && echo "No build directory. Run 'init.sh' first"
cd build || exit
echo "Building..."
make