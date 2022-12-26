main: main.o sub.o
	gcc -o main main.o sub.o
main.o: main.c
	gcc -c -o main.o main.c
sub.o: sub.c
	gcc -c -o sub.o sub.c
clean:
	rm -rf main.o sub.o main
