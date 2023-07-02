//Dev C++ <-- Compiler

#include<stdio.h>

// int main()
// { double x;
// double a=3,b=2;
// x=a/b;
// printf("%2.1lf",(int)x);
// return 0;}

//result --> " 0.0"

//Note: \a is alarm, you can use is it in f.e if(x == 1) printf("\a\n Hello");

//How we can use --> 'art:' 'goto art;' <-- this feature is like while loop (in java)
int main() {

    int num;
    here:
    printf("please, Enter number that be bigger than 0.. num: ");
    scanf("%d", &num);

    if(num > 0) {
        printf("\nGood Job! you entered: %d", num);
    } else {
        printf("\nFailed! you entered: %d, please try again and enter a valid number\n", num);
        goto here;
    }

    return 0;
}