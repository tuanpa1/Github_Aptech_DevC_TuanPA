#include <stdio.h>

main(){
	int i,min,max;
	scanf("%d%d", &min, &max);
	for (i = min;i <= max;i++)
		if(i % 7 == 0)
			printf("\n%d",i);
	
}
