# printf

## _printf.c
contains _printf function implementation. The function produces output according to a format. Format controls the output just like the printf function from the standard library.

## Example
> To print character `1`, string `three` and length `39`;  
> _printf("%c %s %d %i", '1', "three", 39, 39);

## _putchar.c
contains _putchar function implementation

function _putchar prints a single character to stdout

## holberton.h
contains function prototypes

	int _putchar(char c);
	int _print_str(char *string);
	int _print_int(long int var);
	int _printf(const char *format, ...);


## print_functions.c
contains function implementation for printing

function _print_str prints a null terminated string to stdout
function _print_int prints an integer to stdout



## Testing
	./build.sh
	tests/t_printf



