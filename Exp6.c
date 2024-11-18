/*
Exp 6 Task 1
Title : WAP to define a counter to print how many times a function is called. Use storage classes.
Name:Shubham
Class:First Year
DIV:C
UIN :241P051
ROLL NO. :47
*/

#include<stdio.h>

void counter(){
   static int a = 0;
   a++;
   printf("The Function is Called : %d \n",a);
}

int main(){
    counter();
    counter();
    counter();
    counter();
    counter();

    return 0;
}

OUTPUT :
The Function is Called : 1
The Function is Called : 2
The Function is Called : 3
The Function is Called : 4
The Function is Called : 5

Process returned 0 (0x0)   execution time : 1.567 s
Press any key to continue.
