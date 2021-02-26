#include <stdio.h>
int main(void)
{
	int input_number, input_power;
	scanf("%d %d", &input_number, &input_power);
	//调用函数的参数


	int i;
	i = input_number;
	for(; input_power -1 > 0; input_power --){
		input_number *= i;
	}

	printf("%d\n", input_number);

	return input_number;
}