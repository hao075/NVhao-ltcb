#include <stdio.h>

int main() {
    int n, i;
    printf("Nhap so phan tu cua mang: ");
    scanf("%d", &n);
    
    int arr[n]; 
    int sum = 0, sum_duong = 0, sum_am = 0;
    int duong = 0, am = 0;
    
    printf("Nhap %d so nguyen:\n", n);
    for (i = 0; i < n; i++) {
        printf("Phan tu thu %d: ", i + 1);
        scanf("%d", &arr[i]);
        
        sum += arr[i]; 
        
        if (arr[i] > 0) {
            sum_duong += arr[i];
            duong++;
        } else if (arr[i] < 0) {
            sum_am += arr[i];
            am++;
        }
    }
    
    float avg = (float)sum / n;
    float avg_duong = (duong > 0) ? (float)sum_duong /duong : 0;
    float avg_am = (am > 0) ? (float)sum_am /am : 0;

    printf("\nTong tat ca cac so: %d", sum);
    printf("\nTong cac so duong: %d", sum_duong);
    printf("\nTong cac so am: %d", sum_am);
    printf("\nTrung binh cong cua mang: %.2f", avg);
    printf("\nTrung binh cong cac so duong: %.2f", avg_duong);
    printf("\nTrung binh cong cac so am: %.2f\n", avg_am);
    
    return 0;
}