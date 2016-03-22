lab2.out:main.o header.o
	g++ -o lab2.out main.o header.o

header.o:header.cpp a.h
	g++ -c header.cpp

main.o:main.cpp a.h
	gcc -c main.cpp

