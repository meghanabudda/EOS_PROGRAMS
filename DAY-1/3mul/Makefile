main: main.o mul.o
	gcc -o main main.o mul.o
main.o: main.c
	gcc -c -o main.o main.c
mul.o: mul.c
	gcc -c -o mul.o mul.c
clean:
	rm -rf main.o mul.o main