/******************************************************************************
 * Họ và tên: Phan Lạc Đoàn Long
 * MSSV:      PS47837
 * Lớp:       CS21301
 *****************************************************************************/

//  BÀI 1: XÂY DỰNG CHƯƠNG TRÌNH TÌM GIÁ TRỊ LỚN NHẤT TRONG 3 SỐ  
//  Input: Nhập từ bàn phím 3 số bất kỳ 
//  Output: Xuất ra màn hình số lớn nhất trong 3 số 
//  Hướng dẫn: Xây dựng hàm tìm giá trị lớn nhất trong 3 số. Hàm có giá trị trả về mà 
//  giá trị lớn nhất giữa 3 số 

#include <stdio.h>

// //Tạo hàm 
// int tenHam(so1, so2, so3){ 
// int max; 
// //Cách giải để tìm ra số lớn nhất 
// return max; 
// } 

int timMax(int so1, int so2, int so3){
    int max = so1;
    if(so1 >= so2 && so1 >= so3){
        max = so1;
    } else if(so2 >= so1 && so2 >= so3){
        max = so2;
    } else {
        max = so3;
    }
    return timMax;
}

int main() {

    // //Gọi hàm trong hàm main 
    // //ví dụ 
    // int soMax = temHam(3,5,10)

    int so1, so2, so3;
    printf("nhap so thu nhat: ");
    scanf("%d", &so1);
    printf("nhap so thu hai: ");
    scanf("%d", &so2);
    printf("nhap so thu ba: ");
    scanf("%d", &so3);

    int max = timMax(so1, so2, so3);
    printf("so lon nhat trong ba so la: %d\n", max);
    
    return 0;
}