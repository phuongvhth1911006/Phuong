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
	int s=0;
	for(int tg=n; tg>0;){
		s+=tg%10;
		tg/=10;
	}
	printf("n = %d co tong cac chu so la: %d",n,s);
	return 0;
}
