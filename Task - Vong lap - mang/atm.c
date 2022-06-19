#include <stdio.h>

main()
{
	int cardid, pin, num;
	char ch;
	
	printf ("\tLogin\n");
	printf ("- CardID: ");
	scanf  ("%d",&cardid);
	printf ("- Enter Pin code: ");
	scanf ("%d",&pin);
	
	if (cardid == 123 && pin == 456){
		printf ("Menu\n");
		printf ("1. Rut tien\n");
		printf ("2. Chuyen khoan\n");
		printf ("3. Van tin tai khoan\n");
		printf ("4. Ket thuc\n");
		do
		{
			scanf("%d",&num);
			switch (num)
			{
				case 1 :
					printf ("Nhap so tien can rut");
					break;
				case 2 :
					printf ("Nhap so tai khoan chuyen khoan");
					break;
					printf ("So tien trong tai khoan cua ban la: %d VND", 123456);
					break;
				case 4 :
					printf ("See you");
					break;
//				default :
			}
			printf ("\nQuit Y/N");
			fflush(stdin);
			scanf ("%c",&ch);
		}
		while ((num !=4 ) || (ch != 'Y') || (ch != 'y'));
	}else printf ("Invalid ID and Passcode");
}
