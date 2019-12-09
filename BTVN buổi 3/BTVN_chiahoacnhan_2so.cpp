#include <stdio.h>
int main(){
	int a,b;
	printf("Nhap vao 2 so a,b");
	printf("\na = ");
	scanf("%d",&a);
	printf("\nb = ");
	scanf("%d",&b);
	if (a>=b){
		printf("a >= b va a/b = %f",(float)a/b);
	}else{
		printf("a < b va a*b = %d",a*b);
	}
}
