#include <stdio.h>
int main(){
	int n;
	int a[1000];
	int max=-1;
	int total=0;
	scanf("%d",&n);
	
	 
	for(int i = 0; i<n; ++i){
		scanf("%d",&a[i]);
		total = total+a[i];
	}
	for(int i = 0; i<n; ++i){
		if(max<a[i]){
			max = a[i];
		}
	}
	printf("%lf",(double)100*total/n/max);
	

} 









