# Numbers, Oct 2026 omardev29
CC = clang++
FLAGS = -g -Wextra -Werror -O2 -std=c++23 -o




collatz: 
	mkdir -p build/collatz
	$(CC) collatz/src/main.cpp $(FLAGS) build/collatz/main && ./build/collatz/main

beautiful: 
	mkdir -p build/beautiful
	$(CC) beautiful/src/main.cpp $(FLAGS) build/beautiful/main && ./build/beautiful/main
rcollatz: collatz
	./build/collatz/main



clean:
	@rm -rf build




.PHONY: collatz
