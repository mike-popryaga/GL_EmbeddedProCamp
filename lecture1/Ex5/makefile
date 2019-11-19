all: ex5_test.bin
ex5_test.bin: ex5_test.o
	gcc ex5_test.o -std=c99 -o ex5_test.bin

ex5_test.o: ex5_test.c
	gcc -c -std=c99 ex5_test.c
	
clean:
	rm -f *.o *.bin
.PHONY: clean all
