#include <stdio.h>
int main(){
	int a[4][3],b[3][4];
	printf("Nhap vao a[4,3]\n");
	for(int i=0; i<4; i++){
		for(int j=0; j<3; j++){
			printf("a[%d][%d] = ",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	printf("\nMa tran chuyen vi cua a[4][3] la b[3][4]:\n");
	for(int i=0; i<3; i++){
		for(int j=0; j<4; j++){
			b[i][j]=a[j][i];
			printf("%d ",b[i][j]);
		}
		printf("\n");
	}
	return 0;
}
