CC = g++
FLAGS = -Wall -Werror
OFLAGS = -O2
STDFLAGS = -std=c++14

SRC = $(wildcard *.cpp)
OBJS=$(subst .cpp,.o,$(SRC))

SCRATCH_OBJS = scratch.o random.o
TEST_OBJS = test.o
SORT_OBJS = sort.o

scratch: $(SCRATCH_OBJS)
	$(CC) $(FLAGS) $(OFLAGS) $(STDFLAGS) -o scratch $(SCRATCH_OBJS)

test: $(TEST_OBJS)
	$(CC) -fsanitize=address -o test $(TEST_OBJS)

sort: $(SORT_OBJS)
	$(CC) $(FLAGS) $(OFLAGS) $(STDFLAGS) -o sort $(SORT_OBJS)

%.o: %.cpp
	$(CC) -c -g -fsanitize=address $(FLAGS) $(STDFLAGS) $< -o $@

clean:
	rm -rf *.o
