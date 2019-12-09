#include <stdio.h>
int main(){
	int n;
	do{
		printf("Nhap vao n (khac 0): ");
		scanf("%d",&n);
	}while(n == 0);
	float s=0;
	for(int i=1; i<=n; i++){
		s += (float)1/i;
	}
	printf("S = %f",s);
	return 0;
}
