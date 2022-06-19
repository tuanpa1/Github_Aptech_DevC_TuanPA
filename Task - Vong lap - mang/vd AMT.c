#include <stdio.h>

main(){
	int CardID, Pin, num;
	num = 0;
	prinft ("Login");
	printf ("\n\t - CardID: ");
	scanf ("%d",&CardID);
	printf ("\n\t - Pin code:");
	scanf ("%d",&Pin);
	if (CardID == 123 && Pin ==456){
		do {
		printf ("Menu\n");
		prinft ("1. Rut tien\n");
		prinft ("2. Chuyen khoan\n");
		prinft ("3. Xem so du\n");
		prinft ("4. Ket thuc");
		scanf ("%d",&num);
		switch (num)
			{
			case 1 :
				printf ("Nhap vao so tai khoan");
				break;
			case 2 :
				printf ("So tai khoan can chuyen khoan sang");
				break;
			case 3 :
				printf ("So du tai khoan cua ban la: %d VND",123456);
				break;
			case 4 :
				printf ("Rat han hanh duoc phuc vu quy khach");
				break;
			default :
				printf (".....");
				break;
			}
		}
		while (num = 4);
	}
	else printf("Invalid");
}
