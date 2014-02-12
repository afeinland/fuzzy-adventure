CFLAGS = -ggdb -Wall -Werror

all: polymorph.out

polymorph.out: polymorph.o Monster.o Zombie.o
	g++ $(CFLAGS) -o polymorph.out polymorph.o Monster.o

polymorph.o: polymorph.cpp
	g++ $(CFLAGS) -c polymorph.cpp

Monster.o: Monster.h Monster.cpp
	g++ $(CFLAGS) -c Monster.cpp

Zombie.o: Zombie.h Zombie.cpp
	g++ $(CFLAGS) -c Zombie.cpp


clean:
	rm polymorph.out polymorph.o Monster.o Zombie.o
