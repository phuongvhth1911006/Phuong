#include <stdio.h>
int main(){
	int s=0;
	int count=0;
	for (int i=1; count<100;i++){
		if(i%2==1){
			s+=i;
			count++;
		}
	}
	printf("Tong 100 so le dau tien >0 la: %d",s);
	return 0;
}
