#include <stdio.h>
#include <math.h>
//ham tinh p=(a+b+c)/2
double perimeter(double a,double b,double c){
	return (a+b+c)/2;
}
//ham tinh dien tich s theo p
double area(double a,double b,double c){
	return sqrt(perimeter(a,b,c)*(perimeter(a,b,c)-a)*(perimeter(a,b,c)-b)*(perimeter(a,b,c)-c));
}
int main(){
	//Nhap vao tam giac
	printf("Nhap vao 3 canh cua tam giac a,b,c");
	double a,b,c;
	int count=0;
	do{
		if(count<0){
			printf("3 so a,b,c nhap vao phai la so duong (>0), nhap lai");
		}
		if(count>0){
			printf("3 so tren ko phai la canh cua tam giac, nhap lai");
		}
		printf("\n\n  a = ");
		scanf("%lf",&a);
		printf("  b = ");
		scanf("%lf",&b);
		printf("  c = ");
		scanf("%lf",&c);
		if(a<=0 || b<=0 || c<=0){
			count=-1;
		}else{
			count=1;
		}
	}while((a+b<=c) || (a+c<=b) || (b+c<=a) || a<=0 || b<=0 || c<=0);
	printf("Chuc mung ban da nhap vao dung 3 canh cua tam giac.\n\n");
	//in ra ket qua
	printf("Tam giac co 3 canh a=%lf, b=%lf, c=%lf",a,b,c);
	printf("\nChu vi cua tam giac: %lf",perimeter(a,b,c)*2);
	printf("\nDien tich cua tam giac: %lf",area(a,b,c));
	return 0;
}
