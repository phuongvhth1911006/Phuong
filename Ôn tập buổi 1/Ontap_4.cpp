#include <stdio.h>
int main()
{
	int n,s;
	printf("Nhap vao so n: ");
	scanf("%d",&n);
	if(n<=2){
		for(int i=1; i<=n;i++){
			s+=i;	
		}
		printf("Tong %d so Fibonacci dau tien la: %d",n,s);
	}else{
		int a,b,f,count;
		a=1;
		b=2;
		count=s=3;
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
