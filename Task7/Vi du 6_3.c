#include <stdio.h>

void main()
{
printf("The number 555.55 in various forms:\n");
printf("In float form without modifiers:\n");
printf("[%f]\n", 555.55);//[555.550000]
printf("In float form with - modifier:\n");
printf("[%-f]\n", 555.55);//[555.550000]
printf("In float form with 0 as modifier:\n");
printf("[%0f]\n", 555.55);//[555.550000]
printf("In float form with digit string 10.3 as modifier\n");
printf("[%10.3f]\n", 555.55);
//[   555.550]
//[1234567890]
printf("In float form with 0 and digit string 10.3 as modifiers:\n");
printf("[%010.3f]\n", 555.55);
//[000555.550]
//[1234567890]

printf("In float form with -, 0 and digit string 10.3 as modifiers:\n");
printf("[%-010.3f]\n", 555.55);
//[555.550   ]
//[1234567890]

printf("In exponential form without any modifier:\n");
printf("[%e]\n", 555.55);
//[5.555500e+002]
//[1234567890123]
printf("In exponential form with 0 and digit string 10.3 as modifiers:\n");
printf("[%010.3e]\n", 555.55);
//[5.555e+002]
//[1234567890]
printf("In exponential form with -, 0 and digit string 10.3 as modifiers:\n");
printf("[%-010.3e]\n\n", 555.55);
//[5.555e+002]
//[1234567890]
}

