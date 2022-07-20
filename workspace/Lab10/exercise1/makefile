HelloWorld: main.o circle.o circleDriver.o
	g++ -std=c++11 -g -Wall main.o circle.o circleDriver.o -o HelloWorld

main.o: main.cpp circle.h circleDriver.h
	g++ -std=c++11 -g -Wall -c main.cpp

circle.o: circle.h circle.cpp
	g++ -std=c++11 -g -Wall -c circle.cpp

circleDriver.o: circleDriver.h circleDriver.cpp
	g++ -std=c++11 -g -Wall -c circleDriver.cpp

clean:
	rm *.o HelloWorld
