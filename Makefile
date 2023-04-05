all : main.o test.o filo.o
	g++ main.o test.o filo.o -g -DTEST_FULL_INFO

main.o : main.c
	g++ -c main.c -g -DTEST_FULL_INFO

test.o : test.c
	g++ -c test.c -g -DTEST_FULL_INFO

filo.o : filo.c
	g++ -c filo.c -g -DTEST_FULL_INFO

clean :
	rm -rf *.o a.out
