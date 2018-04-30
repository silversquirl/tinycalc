#include <stdio.h>
#include "linenoise/linenoise.h"
#include "tinyexpr/tinyexpr.h"

int main() {
  char *expr;
  int error;

  while ((expr = linenoise("> "))) {
    linenoiseHistoryAdd(expr);
    double result = te_interp(expr, &error);
    if (error == 0)
      printf("%.20g\n", result);
    else
      printf("Parse error:\n  %s\n  %*.1s\n", expr, error, "^");
    linenoiseFree(expr);
  }
  return 0;
}
