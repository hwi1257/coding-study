#include <stdio.h>
int main(){
	int a;
	int x,y;
	int i=0;
	while(1){
		scanf("%d %d" ,&x, &y);
		if (x==0 && y==0){
			break;
		}
		printf("%d\n",x+y);
	}
}
