#include <stdio.h>
void tim(int a[4][4]){
	int dem=0;
	int max=a[0][0];
	for(int i=0;i<4;i++){
		int tong=0;
		for(int j=0;j<4;j++){
			tong+=a[i][j];
		}
		if(tong>max){
			max=tong;
			dem=i;
		}
	}
	printf("Hang co tong max la hang thu %d",dem+1);
}
int main(){
	int a[4][4] ={{1,2,3,4},{2,3,4,5},{3,4,5,6},{4,5,6,7}};
	tim(a);
	return 0;
}
