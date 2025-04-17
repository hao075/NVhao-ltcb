#include <stdio.h>
int main() {
    float R, S, V;
    const float pi = 3.14; 
    printf("Nhap vao gia tri ban kinh R: ");
    scanf("%f", &R);
    S = pi * (R * R);
    V = (4.0 / 3.0) * (pi * R * R * R);
    printf("Dien tich la: %f\n", S);
    printf("The tich la: %f\n", V);
    return 0;
}