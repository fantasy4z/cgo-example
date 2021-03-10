SHELL = /bin/sh

libcppfoobar.so: cppfoobar.cpp cppfoobar_wrapper.cpp
	g++ -std=c++11 -shared -fPIC -o libcppfoobar.so  cppfoobar.cpp cppfoobar_wrapper.cpp

clean:
	rm -f libcppfoobar.so
