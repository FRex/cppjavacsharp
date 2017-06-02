#!/bin/bash


javac UseNative.java
javah UseNative
g++ -fpic -shared -o libnative.so UseNative.cpp -I/usr/lib/jvm/java-1.8.0-openjdk/include -I/usr/lib/jvm/java-1.8.0-openjdk/include/linux
