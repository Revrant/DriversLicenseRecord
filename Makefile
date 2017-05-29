DMVprogram: main.o DMV.o DriversLicenseRecord.o
	g++ -std=c++11 -g -Wall main.o DMV.o DriversLicenseRecord.o -o DMVprogram

main.o: main.cpp DMV.h DriversLicenseRecord.h
	g++ -std=c++11 -g -Wall -c main.cpp

DMV.o: DMV.h DMV.cpp
	g++ -std=c++11 -g -Wall -c DMV.cpp

DriversLicenseRecord.o: DriversLicenseRecord.h DriversLicenseRecord.cpp
	g++ -std=c++11 -g -Wall -c DriversLicenseRecord.cpp

clean:
	rm *.o DMVprogram
