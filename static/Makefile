CC = g++
FLAGS = -Wall -Werror
OFLAGS = -O2
STDFLAGS = -std=c++14

#
#SRC = scope.cpp
#OBJ = scope.o
#test: $(OBJ) references.h
#	$(CC) $(FLAGS) $(OFLAGS) $(STDFLAGS) -o references $(SRC)

SRC = $(wildcard *.cpp)
OBJS=$(subst .cpp,.o,$(SRC))

%.o: %.cpp
	$(CC) -c $(FLAGS) $(STDFLAGS) $< -o $@

static: $(OBJS)
	$(CC) $(FLAGS) $(OFLAGS) $(STDFLAGS) -o static $(OBJS)

clean:
	rm -rf *.o
