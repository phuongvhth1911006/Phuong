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
		if(a[i]%2==1 && i%2==1){
			tbc+=(float)a[i];
			cnt++;
		}
	}
	if(cnt==0){
		printf("Trung binh cong cua cac so le va o vi tri chan trong mang la: 0");
	}else{
		tbc/=cnt;	
		printf("Trung binh cong cua cac so le va o vi tri chan trong mang la: %f",tbc);
	}
	return 0;
}
