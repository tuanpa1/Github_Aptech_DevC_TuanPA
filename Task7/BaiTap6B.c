#include <stdio.h>

void main(){
// B. D�ng c�u l?nh scanf() v� th?c hi?n:
// �?c gi� tr? th?p ph�n t? b�n ph�m v�o bi?n s? nguy�n
// �?c m?t gi� tr? s? th?c v�o bi?n discount_rate.
// Vi?t m?t chuong tr�nh xu?t ra gi� tr? ASCII c?a c�c k� t? �A� v� �b�.
// X�t chuong tr�nh sau:
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
