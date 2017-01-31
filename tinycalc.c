#include <stdio.h>
#include <stdlib.h>
#include "linenoise/linenoise.h"
#include "tinyexpr/tinyexpr.h"

int main() {
  char *expr;
  int error;
  double result;

  while ((expr = linenoise("> ")) != NULL) {
    linenoiseHistoryAdd(expr);

    result = te_interp(expr, &error);

    if (error == 0) {
      printf("%g\n", result);
    } else {
      printf("Parse error:\n  %s\n  ", expr);
      for (int i = 1; i < error; i++) {
        putchar(' ');
      }
      puts("^");
    }

    linenoiseFree(expr);
  }

  return 0;
}

