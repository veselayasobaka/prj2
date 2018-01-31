.PHONY: all clean
	
all: prj2
	
clean:
			rm -rf prj2 *.o
main.o: main.cpp
	g++  -std=c++11 -c -o  main.o main.cpp
join.o: join.cpp
	g++  -std=c++11 -c -o  join.o join.cpp
prj2: main.o join.o
	g++  -std=c++11 -o prj2 main.o join.o