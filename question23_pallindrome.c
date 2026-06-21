#include<stdio.h>

int main() {
    int n, rev=0,rem,original,temp;
    
    printf("Enter an integer: ");
    scanf("%d", &n);
    
    original=n;
    for(temp=n;temp!=0;temp=temp/10){
        rem=temp%10;
        rev=rev*10+rem;
    }

    
    if(original==rev){
        printf("%d is a Palindrome.\n",original);
    } else {
        printf("%d is not a Palindrome.\n",original);
    }
    
    return 0;
}