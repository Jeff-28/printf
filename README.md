# _printf

### Description

_printf is a custom funtion, made in C language, that implements the same functionality of printf from the stdio.h library, which handles formatted output conversions as a variadic function. _printf returns the number of characters printed (excluding the null byte used to end output to strings). This project was part of the low level programming section at the Holberton School's curriculum. 

### Compilation

    $ gcc -Wall -Werror -Wextra -pedantic *.c
    
### Prototype
    int _printf(const char *format, ...);

### Authorized functions and macros
- write (man 2 write)
- malloc (man 3 malloc)
- free (man 3 free)
- va_start (man 3 va_start)
- va_end (man 3 va_end)
- va_copy (man 3 va_copy)
- va_arg (man 3 va_arg)

### Usage examples
#### Character
- Input: `_printf("The first letter of my name is %c\n", 'J');`
- Output: *The first letter of my name is J*

#### String
- Input: `_printf("%s are the first three letters of the alphabet\n", "abc");`
- Output: *abc are the first three letters of the alphabet*

#### Integer
- Input: `_printf("I'm %i years old\n", 30);`
- Output: *I'm 30 years old*
