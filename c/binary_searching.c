#include <stdio.h>
#include <string.h>
#define size 10

void main(){
    char str[size][30];
    char search[30];
    int min=0, max=size-1, i, mid;
    printf("Enter %d Strings in ascending order: ", size);
    for(i=0; i<size;i++) gets(str[i]);
    for(i=0; i<size;i++) strupr(str[i]);
    printf("Enter Search String :");
    gets(search);
    strupr(search);
    while(min <= max){
        mid = (min+max)/2;
        if(strcmp(str[mid], search) == 0){
            printf("Found!!!");
            break;
        }
        if(strcmp(str[mid], search) > 0){
            max = mid - 1;
        }
        if(strcmp(str[mid], search) < 0){
            min = mid + 1;
        }
        if(min>max) printf("Not Found!!!");
    }
    if(i == size) printf("Not Found!");
}