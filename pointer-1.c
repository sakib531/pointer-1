/*1. a) Declare an int, char and double variable.
     b) Get the memory address of these variables and print them using both
     pointer and reference operator (&amp;).
     c) Using a pointer variable, edit the values of these variables and print them.\
*/

#include<stdio.h>

int main()
{
    int age = 22 ;
    char ch = 'R' ;
    double id = 4845486756.154 ;
    int *ptr1 = &age ;
    char *ptr2 = &ch ;
    double *ptr3 = &id ;

    printf("Value of integer = %d\n" , age);
    printf("Value of character = %c\n" , ch);
    printf("Value of double = %lf\n" , id);

    printf("\nValue of integer using pointer = %d\n" , *ptr1);
    printf("Value of character using pointer = %c\n" , *ptr2);
    printf("Value of double using pointer = %lf\n" , *ptr3);

    printf("\nMemory address of integer = %d\n" , &age);
    printf("Memory address of character = %x\n" , &ch);
    printf("Memory address of double = %x\n" , &id);

    printf("\nMemory address of integer using pointer = %d\n" , ptr1);
    printf("Memory address of character using pointer = %x\n" , ptr2);
    printf("Memory address of double using pointer = %x\n" , ptr3);

    *ptr1 = 21;
    *ptr2 = 'K';
    *ptr3 = 1548674612.541;

    printf("\nModified value of integer using pointer = %d\n" , *ptr1);
    printf("Modified value of character using pointer = %c\n" , *ptr2);
    printf("Modified value of double using pointer = %lf\n" , *ptr3);
    return 0 ;
}