/******************************************************************************
 * Họ và tên: Phan Lạc Đoàn Long
 * MSSV:      PS47837
 * Lớp:       CS21301
 *****************************************************************************/

//  BÀI 2: XÂY DỰNG HÀM TÍNH NĂM NHUẬN 
//  Input: Nhập vào năm 
//  Output: Có phải là năm nhuận hay không? 
//  Biết rằng: Năm nhuận là năm chia hết cho 400 hoặc chia hết cho 4 nhưng không 
//  chia hết cho 100 
 
#include <stdio.h>

//Tạo hàm 
int checkYear(int year) {
    int flag = 0;

    if (year % 400 == 0)
        flag = 1;
    else if (year % 4 == 0 && year % 100 != 0)
        flag = 1;

    return flag;
}

int main() {
    int year;
    
    printf("Nhap nam: ");
    scanf("%d", &year);
    
    // //Gọi hàm trong hàm main 
    if (checkYear(year))
        printf("%d la nam nhuan\n", year);
    else
        printf("%d khong phai la nam nhuan\n", year);

return 0;
}


