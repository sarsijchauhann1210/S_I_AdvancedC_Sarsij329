#include <stdio.h>  
int main()
{
    int count=0;int i,j,k;
    int Arr[]={1,3,5,2,2};

    int n=5;
    for(int i=1;i<=n-1;i++)
    {
        int sumL=0;
        int sumR=0;
        for (int j=i-1;j>=0;j--)
        {
            sumL+=Arr[j];
     }
     for(int k=i+1;k<=n-1;k++)
     {
         sumR+=Arr[k];
     }
     if(sumL==sumR)
     count++;
 }
 printf("Count: %d", count);
}