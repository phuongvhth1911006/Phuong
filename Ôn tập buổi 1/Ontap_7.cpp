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
	cnt=0;
	for(int tg=n; tg>0;){
		tg/=10;
		cnt++;
	}
	printf("n = %d co %d chu so",n,cnt);
	return 0;
}
