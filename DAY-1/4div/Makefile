main: main.o div.o
	gcc -g -o main main.o div.o
main.o: main.c
	gcc -c -o main.o main.c
div.o: div.c
	gcc -c -o div.o div.c
clean: 
	rm -rf main.o div.o main