.PHONY: all create clean

ODIR = build

CC = g++

FLAGS = -Wall -Werror

all: create bin/main 

bin/main: $(ODIR)/main.o $(ODIR)/bfs.o $(ODIR)/dfs.o 
	$(CC) $^ -o $@ 
$(ODIR)/main.o: main.cpp general.h bfs.h dfs.h
	$(CC) $(FLAGS) -c $< -o $@
$(ODIR)/bfs.o: bfs.cpp bfs.h
	$(CC) $(FLAGS) -c  $< -o $@
$(ODIR)/dfs.o: dfs.cpp dfs.h
	$(CC) $(FLAGS) -c  $< -o $@
create:
	mkdir -p $(ODIR)
	mkdir -p bin
clean:
	rm -rf $(ODIR)
