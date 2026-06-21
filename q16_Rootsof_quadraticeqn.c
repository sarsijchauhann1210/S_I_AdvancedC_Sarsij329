#include<stdio.h>
#include<math.h>

int main() {
    float a, b, c;
    float d, root1, root2;
    
    printf("Enter coefficients a, b and c: ");
    scanf("%f %f %f", &a, &b, &c);
    
    d = (b*b)-(4*a*c);//discriminant
    
    if (d > 0) {
        root1 = (-b + sqrt(d)) / (2 * a);
        root2 = (-b - sqrt(d)) / (2 * a);
        printf("Roots are real and different.\n");
        printf("Root 1 = %f\n", root1);
        printf("Root 2 = %f\n", root2);
    } 
    else if (d == 0) {
        root1 = -b / (2 * a);
        printf("Roots are real and same.\n");
        printf("Root = %f\n", root1);
    } 
    else {
        printf("Roots are complex/imaginary.\n");
    }
    
    return 0;
}