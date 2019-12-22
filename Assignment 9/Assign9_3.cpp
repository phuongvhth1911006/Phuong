#include <stdio.h>
#include <string.h>
void nhap(char a[][50],unsigned int n){
	for(int i=0;i<n;i++){
		printf("Nhap vao chuoi a[%d]: ",i);
		scanf("%s",a[i]);
	}
}
void sx(char a[][50],unsigned int n){
	for(int i=0;i<n-1;i++){
		for(int j=0;j<n-1-i;j++){
			if(strcmp(a[j],a[j+1])>0){
				char tg[50];
				strcpy(tg,a[j]);
				strcpy(a[j],a[j+1]);
				strcpy(a[j+1],tg);
			}
		}
	}
}
void in(char a[][50],unsigned int n){
	for(int i=0;i<n;i++){
		printf("%s\n",a[i]);
	}
}
int main(){
	int n;
	printf("Nhap vao n: ");
	scanf("%d",&n);
	char a[n][50];
	nhap(a,n);
	sx(a,n);
	printf("Mang da sap xep:");
	in(a,n);
	return 0;
}
