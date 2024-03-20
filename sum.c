#include<stdio.h>

int sum(int a,int b);
int main () {
    int a,b;
    printf("Enter a value : ");
    scanf("%d",&a);
     printf("Enter a value : ");
    scanf("%d",&b);
    int s = sum(a,b);
    printf("%d",s);
    return 0;
}

int sum(int a,int b){
    return a+b;
}