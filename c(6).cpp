#include <stdio.h>
#define PI  3.1416

int main() {
	int radius; 
	float circumference;
	
	radius = 5;
	printf ("The radius of circle is %d m\n", radius);
	circumference = (radius + radius) * PI; 
	printf ("the circumference of circle is %7.2f m.\n", circumference);
	
}

