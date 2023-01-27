CC=gcc
CCFLAGS=-Wall -Wextra

all: wait_prompt

wait_prompt: wait_prompt.c
	${CC} $< -o $@ ${CCFLAGS}

.PHONY: clean

clean:
	[ -f wait_prompt ] && rm -f wait_prompt
