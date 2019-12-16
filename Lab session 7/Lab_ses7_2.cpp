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
	int min_d = a[0];
	for(int i=1; i<n; i++){
		if(a[i]>0){
			min_d = a[i];
			break;
		}
	} 
	if(min_d<=0){
		printf("Mang ko co so duong nao");
	}else{
		for(int i=0; i<n ; i++){
			if(a[i+1]>0 && a[i+1]<a[i]){
			min_d = a[i+1];
			}
		}
		printf("So duong nho nhat cua mang la: %d",min_d);
	}
	
	return 0;
}
