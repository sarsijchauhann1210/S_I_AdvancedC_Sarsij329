// area and circumference of circle 

#include<stdio.h>
int main(){
    float r,area,c;
    
    printf("enter the radius of the circle\n");
    scanf("%f",&r);
    
    area=3.14159*r*r;
    c=2*3.14159*r;
    
    printf("the area of the circle:%f\n",area);
    printf("the circumference of the circle:%f",c);
    
    return 0;
}