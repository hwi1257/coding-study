#include <stdio.h>

int main() {
	int num;
	
	num = 2147483647;
	num = num + 2;
	printf("최대값보다 2가 큰 값은 %d.\n",num);
	num = num - 4;
	printf ("최대값보다 2가 작은 값은 %d.\n", num);
}

