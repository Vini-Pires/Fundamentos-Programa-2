SRC=1-biblioteca.c 1-cripto.c
BIN=./output/main
EXTRA_FLAGS=-Wall -Wextra -g3 -lm


all: main.o cripto.o
	gcc $(SRC) -g $(EXTRA_FLAGS) -o $(BIN)

main.o: 1-biblioteca.c
	gcc -c 1-biblioteca.c

cripto.o: 1-cripto.c 1-cripto.h
	gcc -c 1-cripto.c

clean:
	rm -f *.o $(BIN); clear

run:
	$(BIN)
