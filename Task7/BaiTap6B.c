#include <stdio.h>

void main(){
// B. Dùng câu l?nh scanf() và th?c hi?n:
// Ð?c giá tr? th?p phân t? bàn phím vào bi?n s? nguyên
// Ð?c m?t giá tr? s? th?c vào bi?n discount_rate.
// Vi?t m?t chuong trình xu?t ra giá tr? ASCII c?a các ký t? ‘A’ và ‘b’.
// Xét chuong trình sau:
    int BienSoNguyen;
    float discount_rate;
    
	printf("Nhap vao gia tri thuc cho bien so nguyen :");
    scanf("%BienSoNguyen",&BienSoNguyen);
   	printf("%d",BienSoNguyen);
 //???   
	printf("Doc vao gia tri so thuc vao bien discount_rate: ");   
    scanf("%f", &discount_rate);
    printf("\n%f", discount_rate);

    printf("\ngia tri ASCII ky tu A va B la: %i va %d", 'A', 'b');
    
}
