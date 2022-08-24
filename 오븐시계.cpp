#include <stdio.h>
int main() {
	int a,b,c,temp;
	
	scanf("%d %d",&a,&b);
    scanf("%d",&c);
	b+=c;
	
	if (b>60){
	    int temp = b/60;
	
		a+=temp;
		b=b%60;
		if(a>23)a-=24;
	}
	printf("%d %d",a,b);
	return 0;
	
		
		
}
	

