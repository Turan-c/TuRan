#include <stdio.h>
int main(int argc, char const *argv[])
{
	const int number = 10;
	int i, x;
	int count[number];
	for(i = 0; i < number; i ++){
		count[i] = 0;
	}
	scanf("%d", &x);
	while(x != -1){
		count[x] ++;
		scanf("%d", &x);
	}
	for(i = 0; i < number; i ++){
		printf("%d\n", count[i]);
	}

	return 0;
}