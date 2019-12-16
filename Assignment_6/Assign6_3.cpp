#include <stdio.h>
int main(){
	int n;
	printf("Nhap vao so phan tu cua mang n: ");
	scanf("%d",&n);
	int a[n];
	float tbc=0;
	printf("Nhap vao mang a[] co n phan tu\n");
	int cnt=0;
	for(int i=0; i<n; i++){
		printf("a[%d] = ",i);
		scanf("%d",&a[i]);
		if(a[i]<0){
			a[i]=0;
		}
	}
	printf("Mang sau khi da thay the cac so am:\n");
	for (int i=0; i<n; i++){
		printf("%d  ", a[i]);
	}
	return 0;
}
