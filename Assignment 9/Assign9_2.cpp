#include <stdio.h> 
#include <string.h>
bool kt(char s1[],char s2[], unsigned int n){
	for(int i=0;i<strlen(s1);i++){
		for(int j=0;j<strlen(s2);j++){
			if(s1[i+j]!=s2[j]){
				break;
			}
			if (j==strlen(s2)-1){
				return true;
			}
		}
	}
	return false;
}
int main(){
	char s1[100];
	printf("Nhap vao chuoi s1: ");
	scanf("%s",s1);
	printf("Nhap vao chuoi s2: ");
	char s2[100];
	scanf("%s",s2);
	if(kt(s1,s2,n)){
		printf("Chuoi s2: %s  co nam trong chuoi s1",s2);
	}else{
		printf("Chuoi s2: %s  khong nam trong chuoi s1",s2);
	}
	return 0;
}
