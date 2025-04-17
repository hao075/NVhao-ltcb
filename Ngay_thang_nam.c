#include<stdio.h>
 int main(){
 	int a,b;
 	printf("Nhap thang: \n"); scanf("%d",&a);
 	printf("Nhap nam: \n"); scanf("%d",&b);
 	if(b%4==0){
 	switch(a){
 		case 1: case 3: case 5: case 7: case 8: case 10: case 12:printf("Thang %d nam %d co 31 ngay",a ,b);break;
 		case 2: printf("Thang %d nam %d co 29 ngay",a ,b);break;
 		case 4: case 6: case 9: case 11: printf("Thang %d nam %d co 31 ngay",a ,b);break;
 		
	 }
 return 0;
}
    if(b%4!=0){
    	switch(a){
	    case 1: case 3: case 5: case 7: case 8: case 10: case 12:printf("Thang %d nam %d co 31 ngay",a ,b);break;
 		case 2: printf("Thang %d nam %d co 28 ngay",a ,b);break;
 		case 4: case 6: case 9: case 11: printf("Thang %d nam %d co 31 ngay",a ,b);break;
 	}
 		return 0;
}
}