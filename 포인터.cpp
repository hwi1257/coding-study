#include <stdio.h>
int main(){
	 int x;
	 int *xp;
	 
	 x=7;
	 xp = &x;
	 
	 printf("address of x : %p\n" ,&x); // x�� �ּҰ� 
	 printf("value of x : %d\n" ,x); // x�� �� 7 
	 
	 printf("address of xp : %p\n" ,&xp); // xp�� �ּҰ� 
	 printf("value of xp : %p\n", xp); // xp = &x= x�� �ּҰ� 
	 
	 printf("value of *xp : %d\n", *xp);
}
