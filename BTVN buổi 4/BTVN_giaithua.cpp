#include <stdio.h>
int main(){
	int n;
	do{
		printf("Nhap vao n >= 0");
		printf("\nn = ");
		scanf("%d",&n);
	}while(n<=0);
	int s=1;
	for(int i=1; i<=n; i++){
		s*=i;
	}
	printf("n! = %d",s);
	return 0;
}
