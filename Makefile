LIB_FILE = libsebgine-utils.dylib

default: build

build:
	mkdir -p build
	g++ -Wall -W -c -std=c++11 src/utils/*.cpp -o build/sebgine-utils.o
	g++ -dynamiclib -install_name @rpath/${LIB_FILE} -o lib/${LIB_FILE} build/sebgine-utils.o

clean:
	rm -f build/*

.PHONY: build clean