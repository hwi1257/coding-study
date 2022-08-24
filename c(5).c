#include <stdio.h>
int numsquare (int number);
int sum (int nl, int n2);
int print (int num);

int main() {
	int num1, num2, square1, square2, sum_num;
	
	num1 = 3;
	num2 = 5;
	square1 = numsquare (num1);
	square2 = numsquare (num2);
	sum_num = square1 + square2;
	print (sum_num);
}

int numsquare (int number) {
	return (number * number);
	
}

int sum (int n1, int n2) {
	return (n1 + n2);
}

int print (int num) {
	printf ("the sum of square of two numbers is %d\n", num);
}
