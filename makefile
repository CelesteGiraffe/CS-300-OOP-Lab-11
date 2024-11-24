CXX = g++
CXXFLAGS = -Wall -std=c++11

TARGET = vigenere_test
SRCS = main.cpp vigenere.cpp
OBJS = $(SRCS:.cpp=.o)

.PHONY: all clean docs

all: $(TARGET)

$(TARGET): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(OBJS)

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS) $(TARGET)

docs:
	doxygen Doxyfile
