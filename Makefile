CC1=clang++
CC2=g++
CFLAGS_CLANG=-O0 -Wfatal-errors -Wall -Werror -Wextra -g3 -fsanitize=address,leak,undefined,float-divide-by-zero -Wpedantic -Wformat=2 -Wshadow -fno-common -std=c++20
CFLAGS_GCC=-O0 -Wfatal-errors -Wall -Werror -Wextra -g3 -fsanitize=address,leak,undefined,float-divide-by-zero -Wpedantic -Wformat=2 -Wshadow -fno-common -std=c++20 -Wformat-truncation=2 -Wformat-overflow
BINDIR=bin
SRCS=$(wildcard *.cpp)
OBJS_CLANG=$(patsubst %.cpp, $(BINDIR)/clang/%, $(SRCS))
OBJS_GCC=$(patsubst %.cpp, $(BINDIR)/gcc/%, $(SRCS))
MAKEFLAGS += -j$(nproc)

all: clang gcc ch6e9

clean:
	rm -rf $(BINDIR)/gcc/*
	rm -rf $(BINDIR)/clang/*

clang: $(OBJS_CLANG)

gcc: $(OBJS_GCC)

$(BINDIR)/clang/%: %.cpp
	@mkdir -p $(BINDIR)/clang
	$(CC1) $(CFLAGS_CLANG) -o $@ $<

$(BINDIR)/gcc/%: %.cpp
	@mkdir -p $(BINDIR)/gcc
	$(CC2) $(CFLAGS_GCC) -o $@ $<

ch6e9: $(BINDIR)/clang/FACT $(BINDIR)/gcc/FACT

$(BINDIR)/clang/FACT: fact.o factMain.o
	@mkdir -p $(BINDIR)/clang
	$(CC1) $(CFLAGS_CLANG) factMain.o fact.o -o $(BINDIR)/clang/FACT

$(BINDIR)/gcc/FACT: fact.o factMain.o
	@mkdir -p $(BINDIR)/gcc
	$(CC2) $(CFLAGS_GCC) factMain.o fact.o -o $(BINDIR)/gcc/FACT

fact.o: fact.cc
	$(CC2) $(CFLAGS_GCC) -c fact.cc

factMain.o: factMain.cc
	$(CC2) $(CFLAGS_GCC) -c factMain.cc

.PHONY: all clean clang gcc
