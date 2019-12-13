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
	int max1=a[0],min1=a[0];
	for(int i=0; i<n; i++){
		if(max1<a[i]){
			max1=a[i];
		}
		if(min1>a[i]){
			min1=a[i];
		}
	}
	int max2=a[0],min2=a[0];
	for(int i=0; i<n ;i++){
		if(a[i]!=max1){
			max2=a[i];
		}
		if(a[i]!=min1){
			min2=a[i];
		}
	}
	for(int i=0; i<n; i++){
		if(max2<a[i] && a[i]<max1){
			max2=a[i];
		}
		if(min2>a[i] && a[i]>min1){
			min2=a[i];
		}
	}
	printf("So gan lon nhat la: %d",max2);
	printf("\nSo gan nho nhat la: %d",min2);
	return 0;
}
