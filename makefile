all:  main.o  
	g++ -o all main.o 
main.o: main.cpp main.h boat.h
	g++ -c -g -Wall main.cpp
