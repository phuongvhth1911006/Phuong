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
	int x=0,tong=0;
	for(int i=0; i<n; i++){
		if(a[i]>0){
			x+=a[i];
		}else{
			if(x>tong){
			tong=x;
			x=0;
			}
		}	
	}
	if(x>tong){
		tong=x;
	}
	printf("So luong cac so duong lien tiep nhieu nhat la: %d",tong);
	return 0;
}
