#include <stdio.h>
#include <stdlib.h> // malloc 쓸려면 필요한 헤더파일 
int main(){
	int *sp;
	
	sp=(int *)malloc(sizeof(int) * 10);
	// memory allocation -> 메모리 할당 
	for (int i=0; i<10; i++){
		sp[i]=i;
	
	
	} 
	for (int i=0; i<10; i++){
		printf("%d\n" ,*(sp+i));
	}
	
	free(sp); 
	
	
} 
