//even /odd number using bitwise operator

#include<stdio.h>
int main(){
    int n;
    
    printf("enter the number\n");
    scanf("%d",&n);
    
    if((n & 1) == 0)
    {
        printf("the number is even");
    }
    else
    {
        printf("the number is odd");
    }
    
    return 0;
}