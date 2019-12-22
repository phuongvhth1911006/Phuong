#include <stdio.h>
#include <string.h>
void nhap(char a[][50],unsigned int n){
	for(int i=0;i<n;i++){
		printf("Nhap vao chuoi a[%d]: ",i);
		scanf("%s",a[i]);
	}
}
bool kt(char a[][50],unsigned int n,char s[50]){
	for(int i=0;i<n;i++){
		if(strcmp(a[i],s)==0){
			return true;
		}
	}
	return false;
}
int main(){
	int n;
	printf("Nhap vao n: ");
	scanf("%d",&n);
	char a[n][50];
	nhap(a,n);
	char s[50];
	printf("Nhap vao chuoi s: ");
	scanf("%s",s);
	if(kt(a,n,s)){
		printf("Chuoi s: %s co nam trong mang",s);
	}else{
		printf("Chuoi s: %s khong nam trong mang",s);
	}
	return 0;
}
