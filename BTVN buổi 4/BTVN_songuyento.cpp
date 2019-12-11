#include <stdio.h>
int main(){
	int x;
	int count=0;
	do{
		if(count>0){
			printf("x<0, nhap lai\n");
		}
		printf("Nhap vao x = ");
		scanf("%d",&x);
		count++;
	}while(x<0);
	count=0;
	for(int i=1; i<=x; i++){
		if(x%i==0){
			count++;
		}
	}
	if(count>2){
		printf("x = %d khong phai la so nguyen to",x);
	}else{
		printf("x = %d la so nguyen to",x);
	}
}
