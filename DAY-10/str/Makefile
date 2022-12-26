main: main.o cmp.o len.o cpy.o
	gcc -o main main.o cmp.o len.o cpy.o
main.o:main.c
	gcc -c -o main.o main.c
cmp.o:cmp.c
	gcc -c -o cmp.o cmp.c
len.o:len.c
	gcc -c -o len.o len.c
cpy.o:cpy.c
	gcc -c -o cpy.o cpy.c
clean:
	rm -rf main.o cmp.o  len.o cpy.o main
