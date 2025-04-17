#include <stdio.h>

int main() {
    int a, b;
    printf("Nhap thang: ");
    scanf("%d", &a);
    printf("Nhap nam: ");
    scanf("%d", &b);

    if (b % 4 == 0) {
        switch (a) {
            case 1: case 3: case 5: case 7: case 8: case 10: case 12:
                printf("Thang %d nam %d co 31 ngay", a, b);
                break;
            case 4: case 6: case 9: case 11:
                printf("Thang %d nam %d co 30 ngay", a, b);
                break;
            case 2:
                printf("Thang %d nam %d co 29 ngay", a, b);
                break;
            default:
                printf("Thang khong hop le!");
        }
    } else {
        switch (a) {
            case 1: case 3: case 5: case 7: case 8: case 10: case 12:
                printf("Thang %d nam %d co 31 ngay", a, b);
                break;
            case 4: case 6: case 9: case 11:
                printf("Thang %d nam %d co 30 ngay", a, b);
                break;
            case 2:
                printf("Thang %d nam %d co 28 ngay", a, b);
                break;
            default:
                printf("Thang khong hop le!");
        }
    }
    
    return 0;
}
