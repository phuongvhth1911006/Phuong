#include <stdio.h>
int main(){
	int n;
	printf("Nhap vao so phan tu cua mang n: ");
	scanf("%d",&n);
	int a[n],b[n];
	printf("Nhap vao mang a[] co n phan tu\n");
	for(int i=0; i<n; i++){
		printf("a[%d] = ",i);
		scanf("%d",&a[i]);
	}
	printf("Mang vua nhap vao:\n");
	for(int i=0; i<n; i++){
		printf("%d  ",a[i]);
	}
	printf("\nMang bao gom cac so nghich dao:\n");
	for(int i=0; i<n; i++){
		if(a[i]<10 && a[i]>-10){
			printf("%d  ",a[i]);
		}else if(a[i]==10){
			printf("1  ");
		}else if(a[i]==-10){
			printf("-1  ");
		}else{
			b[i]=0;
			for(;a[i]!=0;){
				b[i]=b[i]*10 + a[i]%10;
				a[i]/=10;
			}
			printf("%d  ",b[i]);
		}
	}
	return 0;
}
