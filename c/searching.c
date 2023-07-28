#include <stdio.h>
#include <string.h>
#define size 10

void main(){
    char str[size][30];
    char search[30];
    int i;
    printf("Enter %d Strings : ", size);
    for(i=0; i<size;i++) gets(str[i]);
    printf("Enter Search String :");
    gets(search);
    for(i=0;i<size;i++){
        if(strcmp(str[i],search) == 0){
            printf("Found!");
            break;
        }
    }
    if(i == size) printf("Not Found!");
}