#include <stdio.h>
int main(){
	printf("Nhap vao 3 so la canh cua tam giac");
	int a,b,c;
	int count=0;
	do{
		if(count>0){
			printf("3 so tren ko phai la canh cua tam giac, nhap lai");
		}
		printf("\na = ");
		scanf("%d",&a);
		printf("\nb = ");
		scanf("%d",&b);
		printf("\nc = ");
		scanf("%d",&c);
		count++;
	}while(!((a+b>c) && (a+c>b) && (b+c>a)));
	printf("a= %d, b= %d, c= %d la 3 canh cua tam giac",a,b,c);
	return 0;
}
