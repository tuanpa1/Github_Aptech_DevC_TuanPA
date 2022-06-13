#include <stdio.h>

main()
{
    int i, j, tong;
    printf("Please enter the maxinum value \n");
    printf("for which a table can be printed: ");
    scanf("%d", &tong);
    for (i = 0, j = tong; i <= tong; i++, j--)
        printf("\n%d + %d = %d", i, j, i + j);
}

