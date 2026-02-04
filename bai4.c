#include <stdio.h>

int giaiPTBacMot(int a, int b, float *x) {
    if (a == 0) {
        if (b == 0) {
            return -1; // Vô số nghiệm
        } else {
            return 0; // Vô nghiệm
        }
    } else {
        *x = - (float)b / a;
        return 1; // Có một nghiệm
    }
}

int main() {
    int a, b;
    float x;
    
    printf("Nhap he so a: ");
    scanf("%d", &a);
    printf("Nhap he so b: ");
    scanf("%d", &b);
    
    int ketQua = giaiPTBacMot(a, b, &x);
    
    if (ketQua == -1) {
        printf("Phuong trinh vo so nghiem.\n");
    } else if (ketQua == 0) {
        printf("Phuong trinh vo nghiem.\n");
    } else {
        printf("Nghiem cua phuong trinh la: x = %.2f\n", x);
    }
    
    return 0;
}