#!/bin/sh

set -xe

g++ -std=c++98 -O2 main.cpp Pokemon.cpp -o main
./main
