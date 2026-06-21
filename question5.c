
//temperature converter
#include<stdio.h>
int main(){
    float c,f;
    int choice;
    printf("select your choice\n 1 for conversion of celsius to faherneit and\n 2 for fahernneit to celsius");
scanf("%d",&choice);
    switch (choice)
{
case 1:
printf("enter the temperature in celsius");
scanf("%f",&c);
f=(c*9/5) + 32;
printf("after conversion the temperature in fahreneit:%f",f);
    break;
case 2:
printf("enter the temperature in fahreneit");
scanf("%f",&f);
c=(f-32)*5/9;
printf("after conversion the temperature in celsius:%f",c);
break;

default:
printf("invalid case");

}
return 0;
}