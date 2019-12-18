#include <stdio.h>
void timf(unsigned int n){
	int a[n];
	a[0]=1;
	a[1]=1;
	for(int i=2;i<n;i++){
		a[i]=a[i-1]+a[i-2];
	}
	if(n<3){
		printf("So thu %d trong day Fibonacci la: %d",n,1);
	}else{
		printf("So thu %d trong day Fibonacci la: %d",n,a[n-1]);
	}
}
int main(){
	int n;
	printf("Nhap vao n: ");
	scanf("%d",&n);
	timf(n);
	return 0;
}
