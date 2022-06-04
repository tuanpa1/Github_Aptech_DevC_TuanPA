#include <stdio.h>

void main()
{
	int NgayCuaMonHoc, SoBuoiHoc;
	float LyThuyet, ThucHanh, BaiTapLon;
	
	printf("Tong so ngay cua mon hoc: ");
	scanf("%d",&NgayCuaMonHoc);
	printf("Nhap vao so buoi di hoc: ");
	scanf("%d",&SoBuoiHoc);
	
	if (SoBuoiHoc < 0.75 * NgayCuaMonHoc) 
		printf("Hoc lai");
		else{
			printf("Duoc thi");
			printf("\nNhap vao cac diem Ly Thuyet (max = 20), Thuc hanh (max = 15), Bai tap lon (max = 10): ");
			scanf("%f %f %f",&LyThuyet, &ThucHanh, &BaiTapLon);
			
			if (LyThuyet >= 8)
				printf("Pass Ly Thuyet\n");
				else
				printf("Fail Ly Thuyet\n");
			if (ThucHanh >= 6)
				printf("Pass Thuc Hanh\n");
				else
				printf("Fail Thuc Hanh\n");
			if (BaiTapLon >= 4)	
				printf("Pass BaiTapLon\n");
				else
				printf("Fail BaiTapLon\n");
		}
}

