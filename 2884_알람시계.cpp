#include <stdio.h>
int main(){
	int a,b;
	scanf("%d %d", &a,&b);
	
	if (b<45) {
		b+=60-45;	
		a-=1;
		if (a<0) {
		a+=24;	
		
		}	
	}
	else {
		b-=45;
		
	}
	
	printf("%d %d" ,a,b);
} 
