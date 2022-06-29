//Find the product of 2*2 matrix and display the product

#include <stdio.h>

int main()
{
	int a[2][2]={1,2,3,4},b[2][2]={1,2,3,4},p[2][2];
	int i, j;
	
		printf("product of two matrices are:\n");
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			p[i][j] = a[i][j]*b[i][j];
		printf("%d \t",p[i][j]);
		}
		printf("\n");
	}
	return 0;
}
