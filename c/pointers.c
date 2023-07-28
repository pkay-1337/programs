#include <stdio.h>
void main(){
  int a = 78;
  int c;
  int test = 46;
  int *b = &a;
  printf("%p \n",b);
  printf("%d \n",b[0]);
  printf("%d \n",*&a);
  printf("%d \n",*&*&a);
  scanf("%d",&c);
}
