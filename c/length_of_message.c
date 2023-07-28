#include <stdio.h>

void main() {
  char str[30];
  int i, v = 0, s = 0;
  puts("Enter String : ");
  gets(str);
  printf("YO");
  printf("ls");
  for (i = 0; str[i] != '\0'; i++) {
    if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' ||
        str[i] == 'u' || str[i] == 'A' || str[i] == 'E' || str[i] == 'I' ||
        str[i] == 'O' || str[i] == 'U')
      v++;
    if (str[i] == ' ')
      s++;
    /*
    switch(str[i]){
        case 'A':
        case 'a':
        case 'E':
        case 'e':
        case 'I':
        case 'i':
        case 'O':
        case 'o':
        case 'U':
        case 'u':
            a++;
        break;
    }
    */
  };
  printf("Number of vowels = %d\n", v);
  printf("Number of consonent = %d\n", i - v - s);
  printf("Length of Message = %d", i);
}
