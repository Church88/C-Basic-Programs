a.out: main.o queue.o node.o
	g++ -Weffc++ -g -std=c++11 main.o queue.o node.o

main.o: main.cc queue.h node.h
	g++ -Weffc++ -c -g -std=c++11 main.cc

queue.o: queue.cc queue.h node.h
	g++ -Weffc++ -c -g -std=c++11 queue.cc

node.o: node.cc node.h
	g++ -Weffc++ -c -g -std=c++11 node.cc

clean:
	rm -f *.o core a.out

