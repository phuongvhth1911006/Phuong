#include <stdio.h>
int main(){
	int n,x;
	printf("Nhap vao n:");
	scanf("%d",&n);
	printf("Nhap vao x: ");
	scanf("%d",&x);
	int a[n];
	printf("Nhap vao mang a[] co %d phan tu\n",n);
	for(int i=0; i<n; i++){
		printf("a[%d] = ",i);
		scanf("%d",&a[i]);
	}
	int dem = -1;
	for(int i=0; i<n; i++){
		if(a[i]==x){
			dem=i;
			break;
		}
	}
	if (dem==-1){
		printf("x = %d ko co trong mang a[]",x);
	}else{
		printf("x = %d gan nhat o vi tri: a[%d]",x,dem);
	}
	return 0;
}
