#include <stdio.h>
int main(){
	int n;
	int count=0;
	do{
		if(count>0){
			printf("n<0, nhap lai\n");
		}
		printf("Nhap vao n = ");
		scanf("%d",&n);
		count++;
	}while(n<0);
	if(n<2){
		printf("Khong co so nguyen to nao nho hon %d",n);	
	}else{
		printf("Cac so nguyen to nho hon n = %d la: ",n);
		int count2=0;
		for(int j=1; j<n; j++){
			count=0;
			for(int i=1; i<=j; i++){
				if(j%i==0){
				count++;
				}
			}
			if(count==2){
				printf("%d; ",j);
				count2++;
			}	
		}	
	}	
}
