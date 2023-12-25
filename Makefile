BINARY=sort

all: ${BINARY}

sort: heapsort.cpp
	g++ -std=c++11 heapsort.cpp -o sort

clean: 
	/bin/rm -rf *.o *~ ${BINARY}
