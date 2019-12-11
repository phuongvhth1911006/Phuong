#include <stdio.h>
int main(){
	for(int i=1; i<=4; i++)
	{
		for(int j=1; j<=8;j++)
		{
			if(j==1||j==8)
			{
				printf("|");
			}else{
				printf("+");
			}
		}
		printf("\n");
	}
	return 0;
}
