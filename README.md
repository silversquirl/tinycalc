# tinycalc

tinycalc is a calculator. A tiny one. No, really; it's less than 20
lines of code.

tinycalc started as an experiment to play around with
[TinyExpr][tinyexpr]. It then evolved into a little calculator that I
actually use. I used to use Python for calculations, now I use tinycalc.

tinycalc is written in pure C. It uses [Linenoise][linenoise] for line
editing and [TinyExpr][tinyexpr] for evaluating mathematical
expressions.

## Installation

To build tinycalc, run `make`. This will result in the statically-linked
binary file named `tinycalc`. This should be able to run from any
location on any machine with the same Operating System and processor
architecture, so copy it to `~/bin`, `/usr/bin` or any other location in
your `PATH`.

[tinyexpr]: https://github.com/codeplea/tinyexpr
[linenoise]: https://github.com/antirez/linenoise
