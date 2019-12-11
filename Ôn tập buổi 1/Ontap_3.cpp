#include <stdio.h>
int main()
{
	int n;
	printf("Nhap vao so n: ");
	scanf("%d",&n);
	if(n<=2){
		printf("So Fibonacci thu %d la: %d",n,1);
	}else{
		int a,b,f,count;
		a=1;
		b=1;
		count=3;
		for(;count<=n;count++){
			f=a+b;
		a=b;
		b=f;
		}
		printf("So Fibonacci thu %d la: %d",n,f);
	}
	return 0;
}
