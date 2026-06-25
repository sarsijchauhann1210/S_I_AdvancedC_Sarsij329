#include <stdio.h>
#include <string.h>

int main() {
    char str[5][20]={"Banana","Apple","Grapes","Orange","Mango"};
    char temp[20];
    int i,j;

    for(i=0;i<5;i++){
        for(j=i+1;j<5;j++){
            if(strcmp(str[i], str[j]) > 0) {
                strcpy(temp, str[i]);
                strcpy(str[i], str[j]);
                strcpy(str[j], temp);
            }
        }
    }

    printf("Sorted strings:\n");
    for(i=0;i<5;i++) {
        printf("%s\n",str[i]);
    }
    return 0;
}