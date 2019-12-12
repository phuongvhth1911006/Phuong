#include <stdio.h>
int main(){
	int a,b,cnt=0;
	do{
		if(cnt>0){
			printf("a < b, nhap lai\n");	
		}
		printf("Nhap vao a,b");
		printf("\n a = ");
		scanf("%d",&a);
		printf("\n b = ");
		scanf("%d",&b);
		cnt++;
	}while(a>=b);
	int s=0;
	for(int i=a; i<=b; i++){
		s+=i;
	}
	printf("Tong cac so tu a -> b la: %d",s);
	return 0;
}
