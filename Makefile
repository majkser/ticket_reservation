CXX = g++
CXXFLAGS = -std=c++11 -Wall
TARGET = main.exe
SRCS = main.cpp flights.cpp admin.cpp

all: $(TARGET)

$(TARGET):
	$(CXX) $(SRCS) -o $(TARGET) $(CXXFLAGS)

clean:
	rm -f $(TARGET)

.PHONY: all clean