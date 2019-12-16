#include <stdio.h>
int main(){
	int n;
	printf("Nhap vao so phan tu cua mang n: ");
	scanf("%d",&n);
	int a[n];
	printf("Nhap vao mang a[] co n phan tu\n");
	for(int i=0; i<n; i++){
		printf("a[%d] = ",i);
		scanf("%d",&a[i]);
	}
	int cnt=0;
	for(int i=n-1; i>=0; i--){
		if(a[i]%2==1){
			cnt=1;
			printf("So le cuoi cung cua mang la a[%d] = %d",i,a[i]);
			break;
		}
	}
	if(cnt==0){
		printf("Mang ko co so le nao");
	}
	return 0;
}
