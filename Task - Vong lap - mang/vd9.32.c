#include <stdio.h>

main()
{
	char i;
	for( ; ; )
		{
		printf("This will go on and on");
		i = getchar();
		if(i == 'X' || i == 'x')
		break;
		}
}
