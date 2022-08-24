#include <stdio.h>
int main(){
	 int x;
	 int *xp;
	 
	 x=7;
	 xp = &x;
	 
	 printf("address of x : %p\n" ,&x); // x의 주소값 
	 printf("value of x : %d\n" ,x); // x의 값 7 
	 
	 printf("address of xp : %p\n" ,&xp); // xp의 주소값 
	 printf("value of xp : %p\n", xp); // xp = &x= x의 주소값 
	 
	 printf("value of *xp : %d\n", *xp);
}
