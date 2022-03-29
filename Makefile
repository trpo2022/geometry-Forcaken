all: main
main: main.c
	gcc -Wall -Werror -o geometry main.c
clean:
	rm geometry
run:
	./geometry
