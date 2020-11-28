CC = g++
BUILD = .toejam/build/
LIBS = -lglfw -lGL -lGLEW 
DEPS = src/pong.h src/display.h 

pong: $(BUILD)pong.o $(BUILD)display.o
	$(CC) -o bin/pong $^ $(LIBS)

$(BUILD)pong.o: src/pong.cpp $(DEPS)
	$(CC) -c src/pong.cpp -o $@

$(BUILD)display.o: src/display.cpp $(DEPS)
	$(CC) -c src/display.cpp -o $@

.PHONY: clean

clean:
	rm .toejam/build/*.o
	rm -rf bin
