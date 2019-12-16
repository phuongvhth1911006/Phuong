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
	int x=0,sl=0;
	for(int i=0; i<n; i++){
		if(a[i]>0){
			x++;
		}else{
			if(x>sl){
			sl=x;
			x=0;
			}
		}	
	}
	if(x>sl){
		sl=x;
	}
	printf("So luong cac so duong lien tiep nhieu nhat la: %d",sl);
	return 0;
}
