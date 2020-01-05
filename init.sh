#!/usr/bin/env bash

echo "Creating dependencies directory..."
[ ! -d "deps" ] && mkdir deps
cd deps || exit
[ ! -d "sfml" ] && mkdir sfml
cd sfml || exit
echo "Downloading SFML..."
wget "https://www.sfml-dev.org/files/SFML-2.5.1-linux-gcc-64-bit.tar.gz"
echo "Unpacking SFML..."
tar -xvzf SFML-2.5.1-linux-gcc-64-bit.tar.gz --strip-components=1
rm *.tar.gz
cd ../..
cd deps || exit
[ ! -d "boost" ] && mkdir boost
cd boost || exit
echo "Downloading boost libraries..."
wget "https://dl.bintray.com/boostorg/release/1.71.0/source/boost_1_71_0.tar.gz"
echo "Unpacking boost libraries..."
tar -xvzf boost_1_71_0.tar.gz --strip-components=1
rm *.tar.gz
./bootstrap.sh --prefix=../boost-build
./b2 install
cd .. || exit
rm -rf boost
cd .. || exit
echo "Creating build directory..."
[ ! -d "build" ] && mkdir build
cd build || exit
echo "Initializing Cmake..."
cmake ..