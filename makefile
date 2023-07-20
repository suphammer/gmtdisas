DEFAULT_DESTDIR = /usr/local
DESTDIR ?= $(DEFAULT_DESTDIR)
CFLAGS= -g -Wall -Werror -o2 -std=gnu99 -DSTM8_INC_PATH='"$(DESTDIR)/share"'
CC= gcc

all:
	$(CC) $(CFLAGS) gmtdisas.c -o gmtdisas

install:
	mkdir -p $(DESTDIR)/bin
	cp -p gmtdisas $(DESTDIR)/bin/
	mkdir -p $(DESTDIR)/share
	cp -p stm8.inc $(DESTDIR)/share/

clean:
	rm gmtdisas
