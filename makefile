PATH_SRC = src/
PATH_BUILD_SRC = build/
PATHTEST = test/
PATHBUILDTEST = build/test/

test: build build/test project_test

project_test: $(PATHBUILDTEST)main.o $(PATHBUILDTEST)test.o $(PATHBUILDTEST)lib.o
	g++ -Wall $(PATHBUILDTEST)main.o $(PATHBUILDTEST)test.o $(PATHBUILDTEST)lib.o -o project_test

$(PATHBUILDTEST)test.o: $(PATHTEST)test.c 
	g++ -Wall -I lib -I src -c $(PATHTEST)test.c -o $(PATHBUILDTEST)test.o

$(PATHBUILDTEST)main.o: $(PATHTEST)main.c
	g++ -Wall -I lib -I src -c $(PATHTEST)main.c -o $(PATHBUILDTEST)main.o

$(PATHBUILDTEST)lib.o: $(PATH_SRC)lib.cpp $(PATH_SRC)lib.hpp
	g++ -Wall -I lib -I src -c $(PATH_SRC)lib.cpp -o $(PATHBUILDTEST)lib.o

build:
	mkdir build

build/test:
	mkdir build/test

projectTest: 
	./project_test

clean:
	rm -f *.o *.so server client