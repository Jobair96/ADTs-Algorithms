CC= gcc
CFLAGS= -Werror -I -Wall -g

# typing 'make' will invoke the first target entry in the file 
# (in this case the default target entry)
# you can name this target entry anything, but "default" or "all"
# are the most commonly used names as a convention.

default: Main

# To create the executable file Main we need the object files
# Main.o and LinkedList.o
#
Main: Main.o LinkedList.o
	$(CC) $(CFLAGS) -o main Main.o LinkedList.o

# To create the object file Main.o, we need the source
# files Main.c and the header LinkedList.h
Main.o: Main.c LinkedList.h
	$(CC) $(CFLAGS) -c Main.c

# To create the object file LinkedList.o, we need the
# source files LinkedList.c, LinkedList.h, and Node.h
# 
LinkedList.o: LinkedList.c LinkedList.h Node.h
	$(CC) $(CFLAGS) -c LinkedList.c

clean:
	rm -rf main *.o *~
