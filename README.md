# C - printf
## About:
In this project is we well create custom `printf` with format data using only limits `func` and `macros`:
- `write`
- `malloc`
- `free`
- `va_start`
- `va_end`
- `va_copy`
- `va_arg`

# Contributing:
[Ibtissam Toujni](https://github.com/IbtissamSmile) | [Mehdi Ait Mouh](https://github.com/mehdi-dev97)
## Tasks:
### Task 0
##### Write a function that produces output according to a format.

Prototype: int _printf(const char *format, ...);
Returns: the number of characters printed (excluding the null byte used to end output to strings)
write output to stdout, the standard output stream
format is a character string. The format string is composed of zero or more directives. See man 3 printf for more detail. You need to handle the following conversion specifiers:
`c`
`s`
`%`
You don’t have to reproduce the buffer handling of the C library printf function
You don’t have to handle the flag characters
You don’t have to handle field width
You don’t have to handle precision
You don’t have to handle the length modifiers