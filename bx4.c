#include<stdio.h>
#include<math.h>
int main(){
    float R,S,V;
    const float  pi = 3.14;
	printf("Nhap vao gia tri ban kinh R\n");
	scanf("%f",&R);
		S=pi*(R*R);
	    V=4/3*(pi*R*R*R);
	printf("Dien tich la:%f\n",S);
	printf("The tich la:%f",V);
	return 0;
}