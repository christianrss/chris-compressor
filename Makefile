CFLAGS=-O2 -Wall -I. -std=c23 -m64
LDFLAGS=-lbu

.PHONY: all clean

all: clean bin/chris_compressor

bin:
	mkdir -p bin

bin/chris_compressor: bin/chris_compressor.o | bin
	cc $(CFLAGS) $^ -o $@ $(LDFLAGS)

bin/chris_compressor.o: chris_compressor.c chris_compressor.h | bin
	cc $(CFLAGS) -c $< -o $@

clean:
	rm -f ./bin/*.o ./bin/chris_compressor