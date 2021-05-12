INCLUDE_DIR = include

SFML_LIBRARIES = -lsfml-system -lsfml-window -lsfml-graphics -lsfml-audio

ENTITY_LIB_NAME = sebgine-entity
ENTITY_DIR_NAME = entity
ENTITY_SOURCE_FILES = src/${ENTITY_DIR_NAME}/*.cpp
ENTITY_OBJECT_FILE = build/${ENTITY_DIR_NAME}/${ENTITY_LIB_NAME}
ENTITY_LIB_FILE = lib${ENTITY_LIB_NAME}.dylib

UTILS_LIB_NAME = sebgine-utils
UTILS_SOURCE_FILES = src/utils/*.cpp
UTILS_OBJECT_FILE = build/${UTILS_LIB_NAME}
UTILS_LIB_FILE = lib${UTILS_LIB_NAME}.dylib


default: build

build:
	mkdir -p build
	cd build

	# TODO: is there a better way to organize the object files instead of dumping them in the current dir and removing them after
	g++ -Wall -W -c -std=c++11 -I ${INCLUDE_DIR} ${ENTITY_SOURCE_FILES}
	g++ -Wall -W -std=c++11 -dynamiclib -install_name @rpath/${ENTITY_LIB_FILE} -o lib/${ENTITY_LIB_FILE} *.o ${SFML_LIBRARIES}
	rm *.o

	g++ -Wall -W -c -std=c++11 -I ${INCLUDE_DIR} ${UTILS_SOURCE_FILES}
	g++ -Wall -W -std=c++11 -dynamiclib -install_name @rpath/${UTILS_LIB_FILE} -o lib/${UTILS_LIB_FILE} *.o ${SFML_LIBRARIES}
	rm *.o

clean:
	rm -f build/*

.PHONY: build clean
