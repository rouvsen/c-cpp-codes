#include <stdio.h> //standard input output
#include <locale.h> //include dictionary

/*
    assert.h --> Debugging (library)
    ctype.h --> <,> and other operations, If there is lower case - you can change to Upper case with this (library)
    errno.h --> reporting errors (library)
    float.h --> decimal numbers (library 0.0)
    limits.h --> contains limitations of Ststem (library)
    locale.h --> depends on location you want, for instance Turkish characters (include dictionary)
    math.h --> Mathematics functions, f.e - sqrt(num)
    setjmp.h --> invoke functions, and jumping on iterate
    signal.h --> overcome exceptions
    stdarg.h --> a list of arguments for a function whose numbers and types are unknown
    stdio.h --> standard input output, for instance: printf function for 'output', and scanf function for 'input'
    stdlib.h --> Text to number, Number to text - you can, also generate random values
    time.h --> Time and Date operations for.
*/

int main() {
    
    setlocale(LC_ALL, "Turkish"); //set turkish dictionary
    
    printf("Hello\n");
    printf("Azərbaycan");

    return 0;
}