#!/bin/sh

set -xe

g++ -std=c++98 -O2 main.cpp pokemon.cpp -o main
./main
