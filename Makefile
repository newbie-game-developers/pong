CC = g++
BUILD = .toejam/build/
LIBS = -lglfw -lGL -lGLEW 
DEPS = src/pong.h src/display.h src/input.h src/system.h 

pong: $(BUILD)pong.o $(BUILD)display.o $(BUILD)input.o $(BUILD)system.o
	$(CC) -o bin/pong $^ $(LIBS)

$(BUILD)pong.o: src/pong.cpp $(DEPS)
	$(CC) -c -g src/pong.cpp -o $@

$(BUILD)display.o: src/display.cpp $(DEPS)
	$(CC) -c -g src/display.cpp -o $@

$(BUILD)input.o: src/input.cpp $(DEPS)
	$(CC) -c -g src/input.cpp -o $@

$(BUILD)system.o: src/system.cpp $(DEPS)
	$(CC) -c -g src/system.cpp -o $@

.PHONY: clean

clean:
	rm .toejam/build/*.o
	rm -rf bin
