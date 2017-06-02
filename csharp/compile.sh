#!/bin/bash

mcs UseNative.cs

g++ -shared -fpic native.cpp -o libnative.so
