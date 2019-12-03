#include <stdio.h>
#include <math.h>
int main(){
	int a,b,c,delta;
	printf("Phuong trinh bac 2 co dang ax^2 + bx + c = 0\n");
	printf("Moi nhap vao a,b,c\na=");
	scanf("%d",&a);
	printf("\nb=");
	scanf("%d",&b);
	printf("\nc=");
	scanf("%d",&c);
	delta = pow(b,2)-(4*a*c);
	printf("\nDelta = %d",delta);
	float x1,x2;
	if (delta<0){
		printf("\nPhuong trinh vo nghiem");
	}
	if (delta==0){
		x1 = -b/(2*a);
		printf("\nPhuong trinh co nghiem kep x1 = x2 = %f",x1);
	}
	if (delta>0){
		x1 = (-b+sqrt(delta))/(2*a);
		x2 = (-b-sqrt(delta))/(2*a);
		printf("\nPhuong trinh co 2 nghiem phan biet");
		printf("\nx1 = %f",x1);
		printf("\nx2 = %f",x2);
	}
}
