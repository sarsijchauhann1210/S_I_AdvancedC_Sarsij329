

//simple andcompound intrest

#include<stdio.h>
#include<math.h>
int main(){
    float p,r,t,si,ci;
    int choice;
    printf("select your choice\n 1 for calculation of simple intrest and\n 2 for compound intrest\n");
    scanf("%d",&choice);
    switch (choice)
    {
    case 1:
        printf("enter the principal, rate and time\n");
        scanf("%f %f %f",&p,&r,&t);
        si=(p*r*t)/100;
        printf("after calculation the simple intrest:%f",si);
        break;
    case 2:
        printf("enter the principal, rate and time\n");
        scanf("%f %f %f",&p,&r,&t);
        ci=p*pow((1+r/100),t) - p;
        printf("after calculation the compound intrest:%f",ci);
        break;

    default:
        printf("invalid case");
    }
    return 0;
}