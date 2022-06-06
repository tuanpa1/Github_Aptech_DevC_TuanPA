/*A. Hãy dùng câu l?nh printf() d? :
Xu?t ra giá tr? c?a bi?n s? nguyên
Xu?t ra chu?i van b?n “Welcome”, ti?p theo là m?t dòng m?i.
Xu?t ra bi?n ký t? letter.
Xu?t ra bi?n s? th?c discount.
Xu?t ra bi?n s? th?c dump có 2 v? trí ph?n th?p phân.*/

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

