SHELL = /bin/sh

libcfoobar.so: cfoobar.c
	gcc -shared -fPIC -o libcfoobar.so cfoobar.c

clean:
	rm -f libcfoobar.so
