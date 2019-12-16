#include <stdio.h>
int main(){
	int n;
	printf("Nhap vao so phan tu cua mang n: ");
	scanf("%d",&n);
	int a[n];
	float tbc=0;
	printf("Nhap vao mang a[] co n phan tu\n");
	for(int i=0; i<n; i++){
		int cnt;  
		do{
			cnt=0;
			printf("a[%d] = ",i);
			scanf("%d",&a[i]);
			for(int j=0; j<i ; j++){
				if(a[i]==a[j]){
					printf("So vua nhap vao a[%d] = %d da bi trung, nhap lai\n",i,a[j]);
					cnt=1;	
				}
			}
		}while(cnt>0);
	}
	printf("Mang vua nhap vao:\n");
	for (int i=0; i<n; i++){
		printf("%d  ", a[i]);
	}
	return 0;
}
