CC = g++
FLAGS = -Wall -Werror
OFLAGS = -O2
STDFLAGS = -std=c++14

#SRC = references.cpp
#OBJ = references.o
#
#test: $(OBJ) references.h
#	$(CC) $(FLAGS) $(OFLAGS) $(STDFLAGS) -o references $(SRC)

SRC = $(wildcard *.cpp)
OBJS=$(subst .cpp,.o,$(SRC))

%.o: %.cpp
	$(CC) -c $(FLAGS) $(STDFLAGS) $< -o $@

scratch: $(OBJS)
	$(CC) $(FLAGS) $(OFLAGS) $(STDFLAGS) -o test $(OBJS)

clean:
	rm -rf *.o
