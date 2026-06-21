#include<stdio.h>
int main(){
int arr[]={10,20,30,40,50};
int n=5,sum=0,i;
for(i=0;i<n;i++)
{
    sum+=arr[i];
}
printf("Sum=%d\nAverage=%.2f\n",sum,(float)sum/n);
return 0;
}