#include <stdio.h>

int main(int argc, char const *argv[])
{
	int i;
	int length = 0;
	scanf("%d", &length);
	int array[length];
	// printf("Please enter the large of string\n");
	for(i = 0; i < length; i ++){
		array[i] = 0;
	}
	// printf("Please enter the number of string\n");
	for(i = 0; i < length; i ++){
		scanf("%d", &array[i]);
	}


	for (i = 0; i < length; i ++)
	{
		printf("%d\n", array[i]);
	}
	
	return 0;
}