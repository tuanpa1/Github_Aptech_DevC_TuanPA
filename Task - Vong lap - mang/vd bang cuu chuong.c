#include <stdio.h>

main(){
	int i,j;
	i=j=0;
	for (i = 2; i<=8; i+=6)
	{
		printf("\n");
		for (j = 1; j <= 10; j++){
			printf("%d * %d = %d\t", i, j, i*j);
			printf("%d * %d = %d\t", i+1, j, (i+1)*j);
			printf("%d * %d = %d\t", i+2, j, (i+2)*j);
			if (i + 3 < 11) 
				{
			printf("%d * %d = %d\t", i+3, j, (i+3)*j);
			printf("%d * %d = %d\t", i+4, j, (i+4)*j);
			printf("%d * %d = %d\t\n", i+5, j, (i+5)*j);
				}
				else
				printf("\n");
			
		}
//		printf("%d * %d = %d\t%d * %d = %d\t%d * %d = %d\t%d * %d = %d\t%d * %d = %d\t\n", i, j, i*j,i++,j++,(i+1)*(j+1),i+2,(i+2)*(j+2),
//		i+3,(i+3)*(j+3),
//		i+4,(i+4)*(j+4),
//		i+5,(i+5)*(j+5)
//		
//		);
	}
}
