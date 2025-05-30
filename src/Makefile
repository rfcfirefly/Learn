# -*- Makefile -*-
# Simple makefile to create the exe in the app directory
# Makefile to be improved upon:
# TODO: 
CC=gcc
CPP=g++
CFLAGS=-Wall -g
EXEDIR=../app/

all: %

%: %.c
	@echo "Compiling ${<} into $(EXEDIR)${@}..."
	$(CC) $(CFLAGS) $< -o $(EXEDIR)$@

clean:
	rm -ef *.sSYM *.o $(EXEDIR)$(EXE)
