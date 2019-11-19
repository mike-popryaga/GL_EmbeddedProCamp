all: ex6_test.bin
ex6_test.bin: ex6_test.o
	gcc ex6_test.o -std=c99 -o ex6_test.bin

ex6_test.o: ex6_test.c
	gcc -c -std=c99 ex6_test.c
	
clean:
	rm -f *.o *.bin
.PHONY: clean all
