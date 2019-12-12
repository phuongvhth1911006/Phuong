#include <stdio.h>
int main(){
	int a=0,b=0;
	printf("Nhap vao a,b");
	printf("\na = ");
	scanf("%d",&a);
	printf("\nb = ");
	scanf("%d",&b);
	int x;
	if(a<b){
		x=a+1;
	}else{
		x=b+1;
	}
	do{
			x--;
		}while(a%x!=0 || b%x!=0);
		printf("Uoc chung lon nhat cua a = %d va b = %d la: %d",a,b,x);
	return 0;
}
