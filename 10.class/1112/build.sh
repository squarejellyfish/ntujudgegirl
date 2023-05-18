#!/bin/bash

set -xe

g++ -std=c++98 -O2 main.cpp square.cpp -o main
./main
