#include <stdio.h>
int main(){
	int a;
	scanf("%d",&a);
	
	for(int i=1; i<=a; ++i){ // i=1 i==2 
		for(int j=1; j<=a-i; ++j){ // jÀÇ ³¡Àº 4 
			printf(" ");
			
		} 
		for(int k=1; k<=i; ++k){
			printf("*");
	
		} 
		
		printf("\n");
		
		
	}
	
	
	
}


			
			
		
			

