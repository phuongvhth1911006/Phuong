#include <stdio.h>
int main(){
	int n,cnt;
	do{
		if(cnt>0){
			printf("n ko phai so nguyen duong, nhap lai\n");	
		}
		printf("Nhap vao n = ");
		scanf("%d",&n);
		cnt++;
	}while(n<=0);
	if(n==1){
		printf("Khong co so Fibonacci nao nho hon 1");
	}else if(n==2){
		printf("So Fibonacci nho hon va gan n = %d nhat la: %d",n,1);
	}else{
		int a,b,f,count;
		a=1;
		b=1;
		f=0;
		for(;f<n;){
			f=a+b;
			a=b;
			b=f;
		}
		printf("So Fibonacci nho hon va gan n= %d nhat la: %d",n,a);
	}
	return 0;
}
