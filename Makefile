CC = g++
BUILD = .toejam/build/
LIBS = -lglfw -lGL -lGLEW 
DEPS = src/pong.h src/display.h src/input.h src/welcome.h src/system.h 

pong: $(BUILD)pong.o $(BUILD)display.o $(BUILD)input.o $(BUILD)welcome.o $(BUILD)system.o
	$(CC) -o bin/pong $^ $(LIBS)

$(BUILD)pong.o: src/pong.cpp $(DEPS)
	$(CC) -c src/pong.cpp -o $@

$(BUILD)display.o: src/display.cpp $(DEPS)
	$(CC) -c src/display.cpp -o $@

$(BUILD)input.o: src/input.cpp $(DEPS)
	$(CC) -c src/input.cpp -o $@

$(BUILD)welcome.o: src/welcome.cpp $(DEPS)
	$(CC) -c src/welcome.cpp -o $@

$(BUILD)system.o: src/system.cpp $(DEPS)
	$(CC) -c src/system.cpp -o $@

.PHONY: clean

clean:
	rm .toejam/build/*.o
	rm -rf bin
