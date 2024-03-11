# Makefile for Writing Make Files Example
 
# *****************************************************
# Variables to control Makefile operation
 
CC = g++
CFLAGS = -Wall -g -std=c++2a
 
# ****************************************************
# Targets needed to bring the executable up to date

all: mainTest

mainTest: mainTest.o Asil.o Qm.o AsilTest.o QmTest.o
	$(CC) $(CFLAGS) -o mainTest mainTest.o QmTest.o AsilTest.o  ../Qm.o ../Asil.o
 
# The main.o target can be written more simply
 
mainTest.o: mainTest.cpp QmTest.hpp AsilTest.hpp ../Qm.hpp ../Asil.hpp
	$(CC) $(CFLAGS) -c mainTest.cpp

QmTest.o: QmTest.cpp QmTest.hpp
 
AsilTest.o: AsilTest.cpp AsilTest.hpp

Qm.o: ../Qm.hpp ../Qm.cpp
 
Asil.o: ../Asil.hpp ../Asil.cpp

clean:
	-rm *.o *.exe
