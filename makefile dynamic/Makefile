# create shared library

CC=gcc
CFLAGS=-I.
DEPS = BankLibrary.h
 


# $@ - the file on the left side of the :
# $< - the first name in the dependencies list
# $^ - the right side of :

# makefile use the first target as default
hellomakelib: main.o libmyBank.so
	$(CC) -o $@  main.o $(CFLAGS) -L. libmyBank.so # the lib should placed after main.o



main.o: main.c 
	$(CC) -c -o $@ $< $(CFLAGS)




#gcc -fPIC create objects for used in shared library
myBank.o: myBank.c
	gcc -Wall -fPIC -c myBank.c


#gcc -shared create the shared library itself
# by convention, it starts with lib and ends with .so 
libmyBank.so: main.o myBank.o   # can also add here more objects
	gcc -shared main.o myBank.o -o libmyBank.so



.PHONY: clean

clean:
	rm -f *.o *.a hellomakelib
