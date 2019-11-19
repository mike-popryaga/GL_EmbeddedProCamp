all: ex4_test.bin
ex4_test.bin: ex4_test.o
	gcc ex4_test.o -std=c99 -o ex4_test.bin

ex4_test.o: ex4_test.c
	gcc -c -std=c99 ex4_test.c
	
clean:
	rm -f *.o *.bin
.PHONY: clean all
