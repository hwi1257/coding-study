#include <stdio.h>
int a[1000000];

int main(){
	int n;
	int max=-1000001,min=1000001;
	scanf("%d",&n);
	
	for(int i=0; i<n; ++i){
		scanf("%d",&a[i]);
		if(max<a[i]){
			max=a[i];
		}
		if(min>a[i]){
			min=a[i];
		}
		
	}
	printf("%d\n%d",min,max);
	 
	
} 
