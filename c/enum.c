#include <stdio.h>
int main (int argc, char *argv[])
{
  enum {banana, apple, blueberry, mango = 56};
  printf("%d\n",mango);
  return 0;
}
