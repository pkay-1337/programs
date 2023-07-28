#include<stdio.h>
int main()
{
	struct dog{
		int height;
		char name[5];
	};
	struct dog mine;
	mine.height = 5;
	scanf("%s",mine.name);
	printf("my dog's height = %d and name = %s",mine.height,mine.name);
return 0;
}

