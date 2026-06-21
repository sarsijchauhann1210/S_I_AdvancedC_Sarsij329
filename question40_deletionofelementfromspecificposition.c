
#include<stdio.h>
int main() {
   int arr[]={1,2,3,4,5,6,7};
   int n=7,delindex=3,i;

    for(i=delindex;i<n-1;i++){
        arr[i]=arr[i+1];
    }
    n--;
    printf("Final array is:");
    for(int i=0;i<n;i++){
      printf(" %d",arr[i]);
      }
    return 0;
}