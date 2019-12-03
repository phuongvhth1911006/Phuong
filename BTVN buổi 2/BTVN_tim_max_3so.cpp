#include <stdio.h>
int main(){
	float a,b,c;
	printf("Nhap vao 3 so\na= ");
	scanf("%f",&a);
	printf("\nb= ");
	scanf("%f",&b);
	printf("\nc= ");
	scanf("%f",&c);
	if(a==b){
		if(b==c){
			printf("\n3 so bang nhau va bang %f",a);
		}else{
			if(b<c){
				printf("\nc = %f la max",c);
			}else{
				printf("\na = b = %f la max",a);
			}
		}
	}else{
		if(a<b){
			if(b==c){
				printf("\nb = c = %f la max",b);
			}else{
				if(b<c){
					printf("\nc = %f la max",c);
				}else{
					printf("\nb = %f la max",b);
				}
			}		
		}else{
			if(a==c){
				printf("\na = c = %f la max",a);
			}else{
				if(a<c){
					printf("\nc = %f la max",c);
				}else{
					printf("\na = %f la max",a);
				}
			}		
		}
	}
}
