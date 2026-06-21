#include<stdio.h>
int main(){
int arr[]={12,5,8,20,3};
int n=5,min=arr[0],max=arr[0],i;
for(i=1;i<n;i++){
if(arr[i]>max)max=arr[i];
if(arr[i]<min)min=arr[i];
}
printf("Max=%d\nMin=%d\n",max,min);
return 0;
}