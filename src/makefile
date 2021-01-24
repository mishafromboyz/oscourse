all: client server

client: client.o liblab.so
	g++ -o client client.o -L. -llab -Wl,-rpath,.

server: server.o liblab.so
	g++ -pthread -o server server.o -L. -llab -Wl,-rpath,.

server.o: server.cpp
	g++ -c server.cpp

client.o: client.cpp
	g++ -c client.cpp

liblab.so: lib.o
	g++ -shared -o liblab.so lib.o

lib.o: lib.cpp
	g++ -c -fPIC lib.cpp