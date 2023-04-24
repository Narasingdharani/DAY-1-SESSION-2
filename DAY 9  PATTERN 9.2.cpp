#include<stdio.h>
int main()
{
	double i,j;
	int rows;
	printf("enter rows:");
	scanf("%d",&rows);
	for(i=1;i<=rows;i++){
		for(j=1;j<=i;j++){
			printf("%.1f",j/10);
		}
		printf(" \n");
	}
	return 0;
}
