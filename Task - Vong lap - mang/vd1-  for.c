#include <stdio.h>

main()
{
    int count,count2;
    printf("\t This is a \n");
    
    for (count = 1; count <= 6; count--)
    	{
    		printf("\n \t");
    		printf("%d",count);
			for (count2 = 1; count2 <= count; count2++)
    			printf("\t");
    		printf("nice");
		}

//    for (count = 1; count <= 6; count++)
//      printf(“\n \t \t nice”);
//
//    printf(“\n\t\t world. \n”);

    printf("\n\t\t world. \n");
}

