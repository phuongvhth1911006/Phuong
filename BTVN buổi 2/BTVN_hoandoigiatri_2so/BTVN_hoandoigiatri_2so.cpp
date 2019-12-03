#include <stdio.h>
int main(){
	float x,y,tg;
	printf("Nhap vao 2 so x,y");
	printf("\nx = ");
	scanf("%f",&x);
	printf("\ny = ");
	scanf("%f",&y);
	tg = x;
	x = y;
	y = tg;
	printf("\n2 so x va y da duoc hoan doi gia tri cho nhau");
	printf("\nx = %f",x);
	printf("\ny = %f",y);
}
