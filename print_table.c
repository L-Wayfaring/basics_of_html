#include<stdio.h>
void Print_table(int n);// function declearation

int main () {
    int n;
    printf("Enter a number to print table:");
    scanf("%d",&n);

    Print_table(n); // function call  // here n is Actual Parameter or, Argument 

    return 0;
}
void Print_table(int n) //function defination
{
    for (int i =1;i<=10;i++)
    printf("%d\n",n*i);

    return;
}