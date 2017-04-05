ean:
	rm -rf a.out Fibonacci.o libFibonacci.a main
obj:
	gcc -c Fibonacci.c -o Fibonacci.o
lib:
	ar rcs libFibonacci.a Fibonacci.o
bin: obj lib
	gcc -static main.c -L. -I. -lFibonacci -o main




