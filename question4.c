
//swaping using only 2 variables

#include<stdio.h>
int main(){

    int a=63,b=53;

    a=a+b;
    b=a-b;
    a=a-b;

    printf("after swaping the value of a is:%d\n and the value of b is:%d\n",a,b);

    return 0;
}