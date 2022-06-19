#include <stdio.h>

void main()
{
    int arr[2][3];
    int row, col;

    for(row = 0; row < 2; row++)
    {
        for(col = 0; col < 3; col++)
            {
             printf("Enter a Number at [%d][%d]: ", row, col);
             scanf("%d", &arr[row][col]);
            }
    }

    printf ("arr[2][3] = {");
    for(row = 0; row < 2; row++)
       {
           for(col = 0; col < 3; col++)
              {
//                printf("\nThe Number at [%d][%d] is %d", row, col, arr[row][col]);
                  printf("%d", arr[row][col]);
              }
       }
    printf ("}");
getchar();
}
