#include <stdio.h>
#include <math.h>

/*
int test(int num){
    return sqrt(num) == (int) sqrt(num) ? 1 : 0;
}
*/
void main(){
    int num; scanf("%d", &num);
    printf("%s", sqrt(num) == (int) sqrt(num) ? "True" : "False");
}
