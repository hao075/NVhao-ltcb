#include<stdio.h>
int main(){
	float DTB;
	printf("Nhap vao diem trung binh:"); scanf("%f",&DTB);
	if(DTB<=5){
		printf("Xep loai yeu");
	}
	if(5<=DTB && DTB<7){
		printf("Xep loai trung binh");
	}
	if(7<=DTB && DTB<8){
		printf("Xep loai kha");
	}
	else{
		printf("Xep loai gioi");
	}
	return 0;
}