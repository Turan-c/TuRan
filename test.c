#include <stdio.h>
#include <stdlib.h>
//the test for push
int main(int argc, char const *argv[])
{
	void *p;
	int count = 0;

	while((p =malloc(100 * 1024 * 1024))){
		count ++;
	}

	printf("%d\n", count);

	return 0;
}
