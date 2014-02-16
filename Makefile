# Course: CS 100 <Winter 2014>
#
# First Name: Alex
# Last Name: Feinland
# CS Login: afein001
# UCR email: afein001@ucr.edu
# SID: 861056485
#
# Lecture Section: <001>
# Lab Section: <021>
# TA: Bryan Marsh 
#
# Assignment <HW5>
#
# I hereby certify that the code in this file 
# is ENTIRELY my own original work.

CFLAGS = -ggdb -Wall

all: polymorph.out my_shell

polymorph.out: polymorph.o Monster.o Zombie.o Ninja.o Yeti.o
	g++ $(CFLAGS) -o polymorph.out polymorph.o Monster.o Zombie.o Ninja.o Yeti.o

polymorph.o: polymorph.cpp
	g++ $(CFLAGS) -c polymorph.cpp

Monster.o: Monster.h Monster.cpp
	g++ $(CFLAGS) -c Monster.cpp

Zombie.o: Zombie.h Zombie.cpp
	g++ $(CFLAGS) -c Zombie.cpp

Ninja.o: Ninja.h Ninja.cpp
	g++ $(CFLAGS) -c Ninja.cpp

Yeti.o: Yeti.h Yeti.cpp
	g++ $(CFLAGS) -c Yeti.cpp


my_shell: my_shell.cpp
	g++ $(CFLAGS) -o my_shell my_shell.cpp


clean:
	rm polymorph.out polymorph.o Monster.o Zombie.o Ninja.o Yeti.o my_shell

strip:
	strip -S my_shell

print:
	ls my_shell.* > my_shell_Files.pdf

