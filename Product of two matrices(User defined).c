//Find the product of 2*2 matrix and display the product

#include <stdio.h>

int main()
{
	int a[2][2],b[2][2],p[2][2];
	int i, j;
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			printf("enter the number for a[%d][%d]: \t",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			printf("enter the number for b[%d][%d]: \t",i,j);
			scanf("%d",&b[i][j]);
	    }
	}
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
