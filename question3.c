
//swap using temp variable

#include<stdio.h>
int main(){
int A=2,B=3;
int temp;
temp=A;
A=B;
B=temp;
printf("After swapping the value of A is:%d\n and the value of B is:%d\n",A,B);
return 0;

}