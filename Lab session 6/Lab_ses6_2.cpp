#include <stdio.h>
int main(){
	int n;
	printf("Nhap vao so phan tu cua day n:");
	scanf("%d",&n);
	int a[n];
	printf("Nhap vao day co %d phan tu\n",n);
	for(int i=0; i<n; i++){
		printf("a[%d] = ",i);
		scanf("%d",&a[i]);
	}
	printf("Cac so le trong mang la:\n");
	int cnt=0;
	for(int i=0; i<n; i++){
		if(a[i]%2==1){
			printf("%d  ",a[i]);
			cnt++;
		}
	}
	if(cnt==0){
		printf("Mang khong co so le nao");
	}
	return 0;
}
