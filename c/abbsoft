#include <stdio.h>
#include <string.h>
void main(){
    char str[30];
    int i,l,s;
    puts("Enter string : ");
    gets(str);
    l = strlen(str);
    for(i=1; i<l; i++) if(str[i] == ' ') s = i;
    if(str[0] >= 'a' && str[0] <= 'z') {
            str[i] = str[i] - 32;
    }
    printf("%c.", str[0]);
    for(i=1; i<s; i++){
        if(str[i] == ' '){
            if(str[i+1] >= 'a' && str[i+1] <= 'z') {
            str[i+1] = str[i+1] - 32;
            }
            printf("%c.",str[i+1]);
        }
    }
    for(i=s; i<l; i++) printf("%c",str[i]);

}

