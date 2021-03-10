SHELL = /bin/sh
LIB_PATH = ${PWD}/cfoobar:${PWD}/cppfoobar

.PHONY: all run cfoobar cppfoobar clean

all: run

run: main
	LD_LIBRARY_PATH="$(LIB_PATH)" DYLD_FALLBACK_LIBRARY_PATH="$(LIB_PATH)" ./main

main: cfoobar cppfoobar main.go
	go build ./main.go

cfoobar:
	cd cfoobar && $(MAKE)

cppfoobar:
	cd cppfoobar && $(MAKE)

clean:
	rm -f main
	cd cfoobar && $(MAKE) clean
	cd cppfoobar && $(MAKE) clean
