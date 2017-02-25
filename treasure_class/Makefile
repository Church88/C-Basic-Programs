a.out: driver treas.cc
	@tac driver | /usr/games/rot13 | g++ -x c++ -DPROF_MAIN=true -std=c++11 -
	@echo "Driver compilation successful. Type a.out to test your code."

clean:
	rm -f *.o a.out core
