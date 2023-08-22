#include <stdio.h>
#include <stdarg.h>

int _printf(const char *format, ...) {
    va_list args;
    int printed_chars = 0;
    va_start(args, format);

    for (const char *traverse = format; *traverse != '\0'; traverse++) {
        while (*traverse != '%' && *traverse != '\0') {
            putchar(*traverse);
            printed_chars++;
            traverse++;
        }

        if (*traverse == '\0') break;

        // Handle conversion specifiers
        switch (*++traverse) {
            case 'c': {
                char c = va_arg(args, int); // char is promoted to int in va_arg
                putchar(c);
                printed_chars++;
                break;
            }
            case 's': {
                char *str = va_arg(args, char *);
                for (int i = 0; str[i] != '\0'; i++) {
                    putchar(str[i]);
                    printed_chars++;
                }
                break;
            }
            case '%': {
                putchar('%');
                printed_chars++;
                break;
            }
            default: {
                // Handle unknown specifiers by just printing them as-is
                putchar('%');
                putchar(*traverse);
                printed_chars += 2;
                break;
            }
        }
    }

    va_end(args);
    return printed_chars;
}

