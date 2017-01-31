CC ?= cc

.PHONY: all clean
all: tinycalc

clean:
	rm -f tinycalc

tinycalc: tinycalc.c tinyexpr/tinyexpr.c linenoise/linenoise.c
	$(CC) -o $@ $^ -static -lm

