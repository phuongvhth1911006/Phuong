#include <stdio.h>
bool tim(int x,int a[], unsigned int n){
	for(int i=0;i<n;i++){
		if(a[i]==x){
			printf("%d co o trong mang",x);
			return true;
		}
	}
	printf("%d ko co o trong mang",x);
	return false;
}
void nhapmt(int a[],unsigned int n){
	for(int i=0;i<n;i++){
		printf("a[%d] = ",i);
		scanf("%d",&a[i]);
	}
}
int main(){
	int x,n;
	printf("Nhap vao n: ");
	scanf("%d",&n);
	int a[n];
	nhapmt(a,n);
	printf("Nhap vao x: ");
	scanf("%d",&x);
	tim(x,a,n);
	return 0;
}
