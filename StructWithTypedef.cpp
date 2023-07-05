#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct Employees //Type (like Class Declaration)
{
    /* fields */
    char name[30];
    int age;
    char email[40];
}employee; //Short form of Type (like short name of Class)

int main() {

    employee employee1; //declare reference variables here
    employee employee2;

    employee1.age = 21;
    strcpy(employee1.name, "Rovshan");
    strcpy(employee1.email, "rouvsen@gmail.com");

    //show on console
    printf("Employee name is %s\n", employee1.name);
    printf("Employee age is %d\n", employee1.age);
    printf("Employee email is %s\n", employee1.email);

    employee2.age = 22;
    strcpy(employee2.name, "Rovshan2");
    strcpy(employee2.email, "rouvsen2@gmail.com");

    printf("Employee name is %s\n", employee2.name);
    printf("Employee age is %d\n", employee2.age);
    printf("Employee email is %s\n", employee2.email);

    return 0;
}

