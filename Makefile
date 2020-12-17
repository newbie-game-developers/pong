CC = g++
BUILD = .toejam/build/
CFLAG = 
LIBS = -lglfw -lGL -lGLEW 
DEPS = src/pong.h src/input.h src/inputP.h src/display.h src/system.h 

pong: $(BUILD)pong.o $(BUILD)input.o $(BUILD)display.o $(BUILD)inputP.o $(BUILD)system.o
	$(CC) $(CFLAG) -o bin/pong $^ $(LIBS)

$(BUILD)pong.o: src/pong.cpp $(DEPS)
	$(CC) -c src/pong.cpp -o $@

$(BUILD)input.o: src/input.cpp $(DEPS)
	$(CC) -c src/input.cpp -o $@

$(BUILD)display.o: src/display.cpp $(DEPS)
	$(CC) -c src/display.cpp -o $@

$(BUILD)inputP.o: src/inputP.cpp $(DEPS)
	$(CC) -c src/inputP.cpp -o $@

$(BUILD)system.o: src/system.cpp $(DEPS)
	$(CC) -c src/system.cpp -o $@

.PHONY: clean

clean:
	rm .toejam/build/*.o
	rm -rf bin
	mkdir bin
