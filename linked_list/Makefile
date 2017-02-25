a.out: main.o list.o node.o
	g++ -g -std=c++11 main.o list.o node.o

main.o: main.cc list.h node.h
	g++ -c -g -std=c++11 main.cc

list.o: list.cc list.h node.h
	g++ -c -g -std=c++11 list.cc

node.o: node.cc node.h
	g++ -c -g -std=c++11 node.cc

clean:
	rm -f *.o core a.out

