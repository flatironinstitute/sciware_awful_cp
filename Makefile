CXX ?= g++

ifeq ($(PREFIX),)
    PREFIX := /usr/local
endif

awful_cp: src/awful_cp.cpp
	$(CXX) src/awful_cp.cpp -o awful_cp -std=c++17

clean:
	rm -f awful_cp

install: awful_cp
	install -d $(PREFIX)/bin/
	install -m 755 awful_cp $(PREFIX)/bin/
