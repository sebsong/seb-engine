LIB_FILE = libsebgine-utils.dylib

SFML_LIBRARIES = -lsfml-system

default: build

build:
	mkdir -p build
	g++ -Wall -W -c -std=c++11 src/utils/*.cpp -o build/sebgine-utils.o
	g++ -Wall -W -std=c++11 -dynamiclib -install_name @rpath/${LIB_FILE} -o lib/${LIB_FILE} build/sebgine-utils.o ${SFML_LIBRARIES}

clean:
	rm -f build/*

.PHONY: build clean