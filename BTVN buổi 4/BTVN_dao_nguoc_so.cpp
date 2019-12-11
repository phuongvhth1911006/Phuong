#include <stdio.h>
#include <math.h>
int main(){
	int x;
	printf("Nhap vao x = ");
	scanf("%d",&x);
	if(x>=-9 && x<=9){
		printf("So dao nguoc bang chinh no: %d",x);
	}else if(x==-10){
		printf("So dao nguoc la: -1");
	}else if(x==10){
		printf("So dao nguoc la: 1");
	/*
	}else if(x<-10){
		int count=0;
		int y=x;
		while(y<-10){
			y=(y-y%10)/10;
			count++;
		}
		y=0;
		for(int tg=x;count>=0;count--){
			y-= (tg%10)*pow(10,count);
			tg=(tg+tg%10)/10;
		}
		printf("x = %d co so dao nguoc la y = %d",x,y);	
		*/
	}else{
		int count=0;
		int y=x;
		while(y>10||y<-10){
			y=(y-y%10)/10;
			count++;
		}
		y=0;
		for(int tg=x;count>=0;count--){
			y+= (tg%10)*pow(10,count);
			tg=(tg-tg%10)/10;
		}
		printf("x = %d co so dao nguoc la y = %d",x,y);	
	}
	return 0;	
}
