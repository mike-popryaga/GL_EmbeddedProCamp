all: ex1_test.bin
ex1_test.bin: ex1_test.o
	gcc ex1_test.o -std=c99 -o ex1_test.bin

ex1_test.o: ex1_test.c
	gcc -c -std=c99 ex1_test.c
	
clean:
	rm -f *.o *.bin
.PHONY: clean all
