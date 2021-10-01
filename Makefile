#Libs:
libSDL2=-lSDL2

all: example

example: main.o window.o event.o
	$(CXX) main.o window.o event.o $(libSDL2) $(CXXFLAGS) -o example

main.o: src/main.cpp
	$(CXX) src/main.cpp $(CXXFLAGS) -c -o main.o

window.o: src/window.cpp
	$(CXX) src/window.cpp $(CXXFLAGS) -c -o window.o

event.o: src/event.cpp
	$(CXX) src/event.cpp $(CXXFLAGS) -c -o event.o

clean:
	rm *.o
