strcmp:strcmp.o cmp.o len.o cpy.o
	gcc -o strcmp strcmp.o cmp.o len.o cpy.o
strcmp.o:strcmp.c
	gcc -c -o strcmp.o strcmp.c
cmp.o:cmp.c
	gcc -c -o cmp.o cmp.c
len.o:len.c
	gcc -c -o len.o len.c
cpy.o:cpy.c
	gcc -c -o cpy.o cpy.c
clean:
	rm -rf strcmp.o cmp.o len.o cpy.o strcmp