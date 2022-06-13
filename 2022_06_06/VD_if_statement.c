#include <stdio.h>

void main(){
	printf("Enterchoice [1-3]: ");
	int x;
	scanf("%d",&x);
	if (x == 1)
		printf("\nChoice is 1");
		else if (x == 2)
			printf("\nChoice is 2");
			else if (x == 3)
				printf ("\nChoice is 3");
				else
				printf ("Invalid choice");
}
