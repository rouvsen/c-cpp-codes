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

void findMiddles(int x1, int x2) {
    while (x1+1 < x2)
    {
        printf("%d\n", x1+1);
        x1++;
    }
    
}

int main() {

    findMiddles(10,15);

    // int num;
    // here:
    // printf("please, Enter number that be bigger than 0.. num: ");
    // scanf("%d", &num);

    // if(num > 0) {
    //     printf("\nGood Job! you entered: %d", num);
    // } else {
    //     printf("\nFailed! you entered: %d, please try again and enter a valid number\n", num);
    //     goto here;
    // }

    return 0;
}

// lf --> double type, f --> float type