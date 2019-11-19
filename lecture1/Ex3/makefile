all: ex3_test.bin
ex3_test.bin: ex3_test.o
	gcc ex3_test.o -std=c99 -o ex3_test.bin

ex3_test.o: ex3_test.c
	gcc -c -std=c99 ex3_test.c
	
clean:
	rm -f *.o *.bin
.PHONY: clean all
