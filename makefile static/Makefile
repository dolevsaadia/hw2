CC=gcc
CFLAGS=-I.
DEPS = BankLibrary.h
OBJ = main.o myBank.o 
TARGET = hellomakelib

# $@ - the file on the left side of the :
# $< - the first name in the dependencies list
# $^ - the right side of :

%.o: %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

$(TARGET): $(OBJ) libmyBank.a
	$(CC) -o $@ $^ $(CFLAGS)

# by convention, it starts with lib and ends with .a 
libmyBank.a: main.o myBank.o  # can also add here more objects
	ar rcs $@ $^

.PHONY: clean

clean:
	rm -f *.o *.a $(TARGET)
