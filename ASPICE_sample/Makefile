# Makefile for Writing Make Files Example
 
# *****************************************************
# Variables to control Makefile operation
 
CC = g++
CFLAGS = -Wall -g -std=c++2a
 
# ****************************************************
# Targets needed to bring the executable up to date

all: main

main: main.o Asil.o Qm.o
	$(CC) $(CFLAGS) -o main main.o Qm.o Asil.o
 
# The main.o target can be written more simply
 
main.o: main.cpp Qm.hpp Asil.hpp
	$(CC) $(CFLAGS) -c main.cpp
 
Qm.o: Qm.hpp Qm.cpp
 
Asil.o: Asil.hpp Asil.cpp

clean:
	-rm *.o *.exe
