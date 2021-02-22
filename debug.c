#include <stdio.h>

int main(int argc, char const *argv[])
{
	int i, j, t;
	int temp, length_object = -1, length_find = -1, sign = -1;
	char array_object[100];
	char array_find[100];
	for(i = 0; i < 100; i ++){
		array_object[i] = 0;
		array_find[i] = 0;
	}

	printf("请输入被查找的字符串\n");
	for(i = 0; array_object[i - 1] != '.'; i ++){
		scanf("%c", &array_object[i]);
		length_object ++;
	}
	fflush(stdin);
	printf("请输入要查找的字符串\n");
	for(i = 0; array_find[i - 1] != '.'; i ++){
		scanf("%c", &array_find[i]);
		length_find ++;
	}

	temp = array_find[0];
	for(i = 0; i < length_object; i ++){
point:	if(temp == array_object[i]){
			t = i + 1;
			for(j = 1; i < length_find; j ++, t ++){
				if(array_object[t] != array_find[j]){
					i ++;
					goto point;
					sign = 0;
				}
			}
			if(sign != 0){
				sign = 1;
			}
		}
	}
	printf("%d\n", sign);
	if(sign == 1){
		for(i = 0; i < length_find; i ++){
			printf("%c", array_find[i]);
		}
	}

	return 0;
}
