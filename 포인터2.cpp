#include <stdio.h>
int main(){
	int arr[3] ={0,2,4};
	int *b;
	
	b=arr;
	printf("%d",*(b+4)); 
} 
