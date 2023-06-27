#include <stdio.h> //standard input output
#include <locale.h> //include dictionary

int main() {
    
    setlocale(LC_ALL, "Turkish"); //set turkish dictionary
    
    printf("Hello\n");
    printf("Azərbaycan");

    return 0;
}