#include <stdio.h>
#include <string.h>
int main(){
    char students[10][20];
    int i,j;
    for(i=0;i<10;i++){
        printf("Enter student name : ");
        scanf("%s",students[i]);
    }
    for(j=0;j<9;j++)
        for(i=0;i<9;i++)
            if( strcmp(students[i], students[i+1] ) > 0 ){
                char temp[20];
                strcpy(temp, students[i]);
                strcpy(students[i], students[i+1]);
                strcpy(students[i+1],temp);
            }
    for(i=0;i<10;i++)
    printf("student name = %s\n",students[i]);
}