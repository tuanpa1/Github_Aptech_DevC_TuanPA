#include <stdio.h>

void main()
{
     int num[5],i;

     num[0] = 10;
     num[0] = 70;
     num[2] = 60;
     num[3] = 40;
     num[4] = 50;

     for (i = 0; i < 5; i++)
          printf("\n Number at [%d] is %d", i, num[i]);
}
