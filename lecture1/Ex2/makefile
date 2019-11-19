all: ex2_test.bin
ex2_test.bin: ex2_test.o
	gcc ex2_test.o -std=c99 -o ex2_test.bin

ex2_test.o: ex2_test.c
	gcc -c -std=c99 ex2_test.c
	
clean:
	rm -f *.o *.bin
.PHONY: clean all
