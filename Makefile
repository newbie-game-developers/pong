CC = g++
BUILD = .toejam/build/
LIBS = -lglfw -lGL -lGLEW 
DEPS = src/pong.h src/input.h src/system.h src/display.h src/inputP.h 

pong: $(BUILD)pong.o $(BUILD)input.o $(BUILD)display.o $(BUILD)system.o $(BUILD)inputP.o
	$(CC) -o bin/pong $^ $(LIBS)

$(BUILD)pong.o: src/pong.cpp $(DEPS)
	$(CC) -c src/pong.cpp -o $@

$(BUILD)input.o: src/input.cpp $(DEPS)
	$(CC) -c src/input.cpp -o $@

$(BUILD)display.o: src/display.cpp $(DEPS)
	$(CC) -c src/display.cpp -o $@

$(BUILD)system.o: src/system.cpp $(DEPS)
	$(CC) -c src/system.cpp -o $@

$(BUILD)inputP.o: src/inputP.cpp $(DEPS)
	$(CC) -c src/inputP.cpp -o $@

.PHONY: clean

clean:
	rm .toejam/build/*.o
	rm -rf bin
