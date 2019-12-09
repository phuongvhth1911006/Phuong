#include <stdio.h>
int main(){
	int x;
	printf("Nhap vao so x: ");
	scanf("%d",&x);
	if (x>=2 && x<=8){
		if (x<=7){
			printf("\nx la mot thu trong tuan va la thu %d",x);
		}else{
			printf("\nx la mot thu trong tuan va la chu nhat");
		}
	}else{
		printf("\nx= %d ko phai la mot thu trong tuan",x);
	}
}
