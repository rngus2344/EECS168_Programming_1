HelloWorld: main.o DriversLicenseRecord.o DMV.o
	g++ -std=c++11 -g -Wall main.o DriversLicenseRecord.o DMV.o -o HelloWorld

main.o: main.cpp DriversLicenseRecord.h DMV.h 
	g++ -std=c++11 -g -Wall -c main.cpp

DMV.o: DriversLicenseRecord.h DMV.h DMV.cpp
	g++ -std=c++11 -g -Wall -c DMV.cpp

DriversLicenseRecord.o: DriversLicenseRecord.h DriversLicenseRecord.cpp
	g++ -std=c++11 -g -Wall -c DriversLicenseRecord.cpp

clean:
	rm *.o HelloWorld
