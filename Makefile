all:	helloworld
helloworld:	helloworld.c
	gcc -o $@ $<
clean:
	rm -f helloworld
