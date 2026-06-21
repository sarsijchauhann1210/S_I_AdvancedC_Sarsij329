#include<stdio.h>
int main(){
int arr[]={1,2,2,3,4,4,5};
int n=7,i,j,k;
for(i=0;i<n;i++){
for(j=i+1;j<n;j++){

    if(arr[i]==arr[j]){
for(k=j;k<n-1;k++)
{
    arr[k]=arr[k+1];
}
n--;
j--;
}
}
}
for(i=0;i<n;i++)printf("%d ",arr[i]);
printf("\n");
return 0;
}