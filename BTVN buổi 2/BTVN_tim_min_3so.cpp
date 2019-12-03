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
			printf("3 so bang nhau va bang %f",a);
		}else{
			if(b<c){
				printf("a = b = %f la min",a);
			}else{
				printf("c = %f la min",c);
			}
		}
	}else{
		if(a<b){
			if(b<=c){
				printf("a = %f la min",a);
			}else{
				if(a<c){
					printf("a = %f la min",a);
				}else{
					if(a==c){
						printf("a = c = %f la min",a);
					}else{
						printf("c = %f la min",c);
					}	
				}
			}
		}else{
			if (a<=c){
				printf("b = %f la min",b);
			}else{
				if(b<c){
					printf("b = %f la min",b);
				}else{
					if(b==c){
						printf("b = c = %f la min",b);
					}else{
						printf("c = %f la min",c);
					}
				}
			}
		}
	}
}
