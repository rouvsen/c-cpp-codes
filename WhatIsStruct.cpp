#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct Employee
{
    /* fields */
    char name[30];
    int age;
    char email[40];
}employee1, employee2; //declare reference variables here, after that use anywhere (f.e inside of main()..)

int main() {

    employee1.age = 21;
    strcpy(employee1.name, "Rovshan");
    strcpy(employee1.email, "rouvsen@gmail.com");

    //show on console
    printf("Employee name is %s\n", employee1.name);
    printf("Employee age is %d\n", employee1.age);
    printf("Employee email is %s\n", employee1.email);

    return 0;
}

