#include <stdio.h>
void main(int argc, char *argv[]){
	char *str,c;
	printf("Enter file name : ");
	scanf("%s",str);
	freopen("output.txt","w",stdout);
	freopen(str,"r",stdin);
	c = getchar();
	while(c != EOF){
		putchar(c);
		c = getchar();
	}
	
	
}
