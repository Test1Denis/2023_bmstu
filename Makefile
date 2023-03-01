all : test

test : main.o sorts.o
	g++ main.o sorts.o -o test

main.o : main.c
	g++ -c main.c

sorts.o : sorts.c
	g++ -c sorts.c 

infostudent.o : infostudent.c
	g++ -c infostudent.c

clean :
	rm -rf *.o test
