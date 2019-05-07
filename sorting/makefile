.PHONY: all create clean

CDIR = src
ODIR = build

CC = g++

FLAGS = -Wall -Werror

all: create bin/main clean

bin/main: $(ODIR)/main.o $(ODIR)/quickSort.o 
	$(CC) $^ -o $@ 
$(ODIR)/main.o: $(CDIR)/main.cpp $(CDIR)/quickSort.h
	$(CC) $(FLAGS) -c $< -o $@
$(ODIR)/quickSort.o: $(CDIR)/quickSort.cpp $(CDIR)/quickSort.h
	$(CC) $(FLAGS) -c  $< -o $@
create:
	mkdir -p $(ODIR)
	mkdir -p bin
clean:
	rm -rf $(ODIR)
