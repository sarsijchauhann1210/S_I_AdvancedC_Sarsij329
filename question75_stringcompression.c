#include <stdio.h>

int main(){
    char str[100];
    int i,count;

    printf("Enter a string (like AAABBC):");
    scanf("%s",str);

    printf("Compressed String:");

    for(i=0;str[i]!='\0';i++){
        count = 1; 
        
        while(str[i]==str[i+1]){    //so if the letter is same as adjacent letter so count++
            count++;
            i++;
        }
        printf("%c%d",str[i],count);
    }
    printf("\n");
    return 0;
}