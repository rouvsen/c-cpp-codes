#include<stdio.h>

int factorial(int num) {

    if(num >= 1) {
        return num * factorial(num - 1);
    } else {
        return 1;
    }

}

int main() {

    int num;
    printf("Which num that you wanna find factorial of? ");
    scanf("%d", &num);

    printf("%d! = %d\n", num, factorial(num));

    return 0;
}