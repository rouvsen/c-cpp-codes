#include<stdio.h>

int ebob(int num1, int num2) {

    if(num2 != 0) {
        ebob(num2, num1 % num2);
    } else {
        return num1;
    }
    
}

int main() {

    int num1, num2;
    
    printf("Enter first num: ");
    scanf("%d", &num1);
    printf("Enter second num: ");
    scanf("%d", &num2);

    printf("EBOB(%d,%d) = %d\n", num1, num2, ebob(num1, num2));

    return 0;
}