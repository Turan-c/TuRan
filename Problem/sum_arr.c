#include <stdio.h>

#define SIZE 10

int sum(int *, int );

int main(int argc, char const *argv[])
{
	int marbles[SIZE] = {1, 2,3,4,5,6,7,8,9,1};

	long answer = sum(marbles, SIZE);

	printf("%ld \n", answer);



	return 0;
}

int sum(int *arr, int n)
{
	int i;
	int total = 0;

	for(i = 0; i < n; i ++){
		total += arr[i];
	}

	return total;
}