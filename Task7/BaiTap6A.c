/*A. H�y d�ng c�u l?nh printf() d? :
Xu?t ra gi� tr? c?a bi?n s? nguy�n
Xu?t ra chu?i van b?n �Welcome�, ti?p theo l� m?t d�ng m?i.
Xu?t ra bi?n k� t? letter.
Xu?t ra bi?n s? th?c discount.
Xu?t ra bi?n s? th?c dump c� 2 v? tr� ph?n th?p ph�n.*/

#include <stdio.h>

void main()
{

int songuyen;
char letter;
float discount, dump;

songuyen = 123;
letter = 'T';
discount = 1.12345;
dump = 5.67890123;

printf("%d\n",songuyen);
printf("Welcome\n");
printf("%d -- %c\n", letter, letter) ;
printf("%c\n", letter);

printf("%f\n", discount);
printf("%.2f\n", dump);

}

