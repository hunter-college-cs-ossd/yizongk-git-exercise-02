# A Makefile for compiling all of the programs in this directory
# Assumes each source file is a main program in either C or C++
# and that the C files have .c extension and C++ have .cpp extension.
# Executables should be copied into the ../bin directory and then 
# removed, so the sequence of a successful build is
# 	make
#	make install
# 	make clean

# Written by Stewart Weiss, October 8, 2018


CXX        = /usr/bin/g++
CXXFLAGS  += -Wall -g 

.PHONY: all clean install

all:   oddities

clean:
	$(RM)  *.o oddities

install: oddities
	cp oddities ../bin

oddities:   main.cpp
	$(CXX) $(CXXFLAGS) main.cpp  -o oddities

