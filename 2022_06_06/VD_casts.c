#include <stdio.h>

void main(){
	int make1,make2;
	float avgGPA;
	
	scanf("%d%d", &make1, &make2);
	fflush(stdin);
//	make1 = 111;
//	make2 = 222;
//	avgGPA = (float)make1/2 + (float)make2/2;
	avgGPA =(float)(make1+make2)/2;
	printf("%.3f",avgGPA);
	
}
