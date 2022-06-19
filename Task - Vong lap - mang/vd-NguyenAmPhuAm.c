#include <stdio.h>

	
main (){
	char NhapTen[100], NguyenAm[20] = "Dau Minh Tam";
	int i,j,count;
	

	printf("Nhap ten: ");
	gets(NhapTen);
	count = 0;
	for (i = 1; i <= strlen(NhapTen); i++)
		for (j = 1; j <= 13; j++)
			if (NhapTen[i] == NguyenAm[j]) count++;
		
	printf ("Diem hop nhau: %d\n",count);
	printf ("Diem khong hop: %d\n", strlen(NhapTen) - count);
}
