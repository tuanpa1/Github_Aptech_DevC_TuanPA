#include <stdio.h>

void main(){
    char name[20];
    int basic;
    float daper, bonper, loandet, salary;
    
    
    printf(" Nhap vao name, basic, daper(phan tram cua D.A), bonper (phan tram loi tuc) va loandet (tien vay bi khau tru) cho mot nhan vien: ");
    scanf("%s %d %f %f %f", name, &basic, &daper, &bonper, &loandet);
    //salary = basic + (basic * daper/100) + (bonper *  basic/100) – loandet;
    salary = basic + basic * daper/100 + bonper * basic/100 - loandet;
    // printf("name\tbasic\tdaper\tbonper\tloadet");
    printf("Name\tBasic\tSalary\n");
    printf("%s\t%d\t%f", name, basic, salary);
   
//     Vi?t m?t chuong trình nh?p vào name, basic, daper (ph?n tram c?a D.A), bonper (ph?n tram l?i t?c) và loandet (ti?n vay b? kh?u tr?) cho m?t nhân viên. Tính luong nhu sau:
// salary = basic + basic * daper/100 + bonper *  basic/100 – loandet

// B?ng d? li?u:

// name	basic	daper	bonper	loandet
// MARK	2500	55	33.33	250.00
// Tính salary và xu?t ra k?t qu? du?i các d?u d? sau (Luong du?c in ra g?n d?u dôla ($)):

//             Name                                       Basic                           Salary

// Vi?t m?t chuong trình yêu c?u nh?p vào tên, h? c?a b?n và sau dó xu?t ra tên, h? theo d?ng là h?, tên.
    
}
