#include <stdio.h>

int main(){
	int n;
	int a[1000000];
	int max=-1000001,min=1000001;
	
	scanf("%d",&n);
	for (int i=0; i<n; i++){
		scanf("%d" ,&a[i]);	
	}
	
	for (int i=0; i<n; i++){
		if (max<a[i]) {
			max=a[i];
		}	
	}
	
	printf("%d\n",max);
	
	
}
