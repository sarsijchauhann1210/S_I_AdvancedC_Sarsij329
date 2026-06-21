// the size of different data types (int, char, float, double) using sizeof

#include<stdio.h>
int main(){
    printf("size of int is:%zu bytes\n", sizeof(int));
    printf("size of char is:%zu bytes\n", sizeof(char));
    printf("size of float is:%zu bytes\n", sizeof(float));
    printf("size of double is:%zu bytes", sizeof(double));
    
    return 0;
}