main: *.h *.cpp
	g++ -std=c++11 *.cpp -o main
	
run: reset main
	./main

reset:
	reset