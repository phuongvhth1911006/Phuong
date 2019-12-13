#include <stdio.h>
int main(){
	int n;
	printf("Nhap vao so phan tu cua day n:");
	scanf("%d",&n);
	int a[n];
	printf("Nhap vao day co %d phan tu la so le\n",n);
	for(int i=0; i<n; i++){
		int cnt=0;
		do{
			if(cnt>0){
				printf("Ban vua nhap vao mot so chan, nhap lai\n");
			}
			cnt=0;
			printf("a[%d] = ",i);
			scanf("%d",&a[i]);
			printf("\n");
			cnt++;
		}while(a[i]%2==0);
	}
	return 0;
}
