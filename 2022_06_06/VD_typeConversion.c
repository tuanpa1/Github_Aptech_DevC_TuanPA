#include <stdio.h>

void main(){
	char ch;
	int i;
	float f;
	double d, result;

	
	printf("char, int, float, double\n");
	scanf("%c%d%f%lf",&ch, &i, &f, &d);
	fflush(stdin);
	
	result = (ch/i) + (f*d) - (f+i);
		

	printf("%c\n%d\n",ch,ch);
	
	printf("%lf",result);
	
	
	
}
