#include <stdio.h>
int main(){
	int a,b,c;
	int result;
	int numCheck[10]={0}; // 배열 초기화 
	int resultString[10]; 
	
	scanf("%d %d %d",&a,&b,&c);
	result= a*b*c;
	
	int i=0;
	while (result!=0){
		resultString[i]=result%10; // 배열 접근  
		result/=10;
		//printf("%d %d\n" ,result, resultString[i]);
		i++;
	}
	
	for (int j=i-1; j>=0; --j){
		numCheck[resultString[j]]++; // 배열 연 산 
	}
	
	for (int j=0; j<=9; j++){
		printf("%d\n",numCheck[j]);
	}
	
	return 0;
	
	
}
