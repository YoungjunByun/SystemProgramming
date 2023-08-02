# compiler option
CC := gcc -Wall
CC := $(CC) -g

hello: hello.o hello_func.o
	$(CC) -o $@ $^

hello.o: hello.c hello_api.h
	$(CC) -c $<

hello_func.o : hello_func.c hello_api.h
	@$(CC) -c $<

clean:
	rm -rf *.o hello