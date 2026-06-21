# include <stdio.h>
int main ( )
{      int temp;
    int Arr[]= {1,2,3,4,5,6,7};
    int n=7;
    for (int i=0; i<n; i++){
     temp=Arr[i];
     Arr[i]=Arr[n-1-i];
     Arr[n-1-i]=temp;
    }
    printf("reversed array is :");
    for(int i=0; i<n; i++){
        printf("%d",Arr[n-i-1]);
    
    }
    return 0;
}
