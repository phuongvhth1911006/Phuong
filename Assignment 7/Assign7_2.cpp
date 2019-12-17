#include <stdio.h>
int main(){
	int a[4][4];
	printf("Nhap vao a[4,4]\n");
	float tbc=0;
	for(int i=0; i<4; i++){
		for(int j=0; j<4; j++){
			printf("a[%d][%d] = ",i,j);
			scanf("%d",&a[i][j]);
			if(i==j){
				tbc+=(float)a[i][j]/4;
			}
		}
	}
	printf("Trung binh cong duong cheo: %f",tbc);
	return 0;
}
