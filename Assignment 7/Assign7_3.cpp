#include <stdio.h>
int main(){
	int a[4][3],b[4][3],c[4][3];
	printf("Nhap vao a[4,3]\n");
	for(int i=0; i<4; i++){
		for(int j=0; j<3; j++){
			printf("a[%d][%d] = ",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	printf("\nNhap vao b[4,3]\n");
	for(int i=0; i<4; i++){
		for(int j=0; j<3; j++){
			printf("b[%d][%d] = ",i,j);
			scanf("%d",&b[i][j]);
		}
	}
	printf("\nTong cua 2 mang a[],b[]: \n");
	for(int i=0; i<4; i++){
		for(int j=0; j<3; j++){
			c[i][j]=a[i][j] + b[i][j];
			printf("%d  ",c[i][j]);
		}
		printf("\n");
	}
	printf("\nHieu cua 2 mang a[],b[]: \n");
	for(int i=0; i<4; i++){
		for(int j=0; j<3; j++){
			c[i][j]=a[i][j] - b[i][j];
			printf("%d  ",c[i][j]);
		}
		printf("\n");
	}
	return 0;
}
