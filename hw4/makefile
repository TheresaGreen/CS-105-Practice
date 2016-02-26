CXX = g++
CPPFLAGS = -g -Wall
BIN_DIR = bin

all: $(BIN_DIR)/hw4

$(BIN_DIR)/hw4: $(BIN_DIR)/.dirstamp $(BIN_DIR)/LetStatement.o $(BIN_DIR)/PrintStatement.o $(BIN_DIR)/ProgramState.o
	$(CXX) $(CPPFLAGS) Facile.cpp $(BIN_DIR)/LetStatement.o $(BIN_DIR)/ProgramState.o -o $(BIN_DIR)/hw4

$(BIN_DIR)/ProgramState.o: $(BIN_DIR)/.dirstamp ProgramState.cpp ProgramState.h
	$(CXX) $(CPPFLAGS) -c ProgramState.cpp -o $(BIN_DIR)/ProgramState.o

$(BIN_DIR)/LetStatement.o: $(BIN_DIR)/.dirstamp LetStatement.cpp LetStatement.h
	$(CXX) $(CPPFLAGS) -c LetStatement.cpp -o $(BIN_DIR)/LetStatement.o

$(BIN_DIR)/PrintStatement.o: $(BIN_DIR)/.dirstamp PrintStatement.cpp PrintStatement.h
	$(CXX) $(CPPFLAGS) -c PrintStatement.cpp -o $(BIN_DIR)/PrintStatement.o

.PHONY: clean
clean:
	rm -rf $(BIN_DIR)

$(BIN_DIR)/.dirstamp:
	mkdir -p $(BIN_DIR)
	touch $(BIN_DIR)/.dirstamp