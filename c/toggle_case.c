#include <stdio.h>
#include <string.h>
void main(){
    char str[30];
    int i,l;
    puts("Enter string : ");
    gets(str);
    l = strlen(str);
    for(i=0; i<l; i++){
        if(str[i] >= 'A' && str[i] <= 'Z'){
            str[i] = str[i] + 32;
        } else if(str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] - 32;
        }
        
        //printf("%c",str[i]);
    }
    puts(str);
}