#include <stdio.h>
#include <stdlib.h> // malloc ������ �ʿ��� ������� 
int main(){
	int *sp;
	
	sp=(int *)malloc(sizeof(int) * 10);
	// memory allocation -> �޸� �Ҵ� 
	for (int i=0; i<10; i++){
		sp[i]=i;
	
	
	} 
	for (int i=0; i<10; i++){
		printf("%d\n" ,*(sp+i));
	}
	
	free(sp); 
	
	
} 
