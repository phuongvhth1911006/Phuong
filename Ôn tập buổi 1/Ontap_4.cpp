#include <stdio.h>
int main()
{
	int n,s;
	printf("Nhap vao so n: ");
	scanf("%d",&n);
	if(n<2){
		printf("Tong %d so Fibonacci dau tien la: %d",n,1);
	}else if(n==2){
		printf("Tong %d so Fibonacci dau tien la: %d",n,2);
	}else{
		int a,b,f,count;
		a=1;
		b=1;
		count=3;
		s=2;
		for(;count<=n;count++){
			f=a+b;
			s+=f;
		a=b;
		b=f;
		}
		printf("Tong %d so Fibonacci dau tien la: %d",n,s);
	}
	return 0;
}
