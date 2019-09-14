CC=g++
CFLAGS=-std=c++14
EXEC=solution
SRC=$(EXEC).cpp

all: $(SRC) $(EXEC)

$(EXEC):
	$(CC) $(SRC) $(CFLAGS) -o $(EXEC)

clean:
	rm $(EXEC)

.PHONY: all clean
