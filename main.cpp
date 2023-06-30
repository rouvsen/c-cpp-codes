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

    windows.h --> you can change 'color of code' (library), (output color). It is just for Windows OS
*/

int main() {
    
    setlocale(LC_ALL, "Turkish"); //set turkish dictionary

    //show on the console entered numbers
    int numm, nummm;
    char character;
    
    printf("Enter the first num: ");
    scanf("%d", numm);
    printf("Enter the second num: ");
    scanf("%d", nummm);
    printf("Enter the character: ");
    scanf(" %c", character);
    // If you want to declare a character, don't forget to leave a space.

    int a = 5;
    a++;
    ++a;

    // -> \n, \t, \a - warning! with the voice or visible warning, \\, \"

    int five = 5;
    int six = 6;
    printf("five: %d, six: %d, five + six = %d", five, six, five + six);
    
    printf("Hello\n");
    printf("Azərbaycan");

    // system("COLOR 1"); - color 1 is blue, 2/3/4/5/6/7/8/9 and A/B/C/D/E/F different colors. you can write color like lower case - no problem (COLOR or color).

    int num1 = 5;
    
    printf("%d", num1); //%d for integer

    double num2 = 2; //Ram 8byte
    printf("%f", num2); //%f for float, double, 2.00000
    printf("%.2f", num2); //%f for float, double, 2.00
    printf("%.1f", num2); //%f for float, double, 2.0
    float num3;  //Ram 4byte

    char character = 'r';
    printf("%c", character); //%c for char

    return 0;
}