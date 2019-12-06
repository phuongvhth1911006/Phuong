#include <stdio.h>
#include <math.h>
int main(){
	int a,b,c;
	printf("Nhap vao 3 so:");
	printf("\na= ");
	scanf("%d",&a);
	printf("\nb= ");
	scanf("%d",&b);
	printf("\nc= ");
	scanf("%d",&c);
	if(((a+b)>c)&&((a+c)>b)&&((b+c)>a)){
		printf("Dung la 3 canh cua tam giac");
		int cv = a+b+c;
		float dt = (float)(sqrt((a+b+c)*(a+b-c)*(b+c-a)*(c+a-b))/4);
		printf("\nChu vi cua tam giac la: %d",cv);
		printf("\nDien tich cua tam giac la: %f",dt);
	}
}
