//days into years, weeks, and days

#include<stdio.h>
int main(){
    int totaldays, y, w, d;
    
    printf("enter the total number of days\n");
    scanf("%d",&totaldays);
    
 
    y = totaldays / 365;
    totaldays = totaldays % 365;
    
 
    w = totaldays / 7;
    d = totaldays % 7;
    
    printf("years:%d\n",y);
    printf("weeks:%d\n",w);
    printf("days:%d",d);
    
    return 0;
}